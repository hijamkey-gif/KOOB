#include "registerdialog.h"
#include "ui_registerdialog.h"
#include "global.h"
#include "httpMgr.h"

RegisterDialog::RegisterDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RegisterDialog)
{
    ui->setupUi(this);
    ui->pass_edit->setEchoMode(QLineEdit::Password);
    ui->err_tip->setProperty("state","normal");
    repolish(ui->err_tip);
    connect(HttpMgr::GetInstance().get(),&HttpMgr::sig_reg_mod_finish,
            this,&RegisterDialog::slot_reg_mod_finish);

    initHttpHandlers();
}

RegisterDialog::~RegisterDialog()
{
    delete ui;
}

void RegisterDialog::on_get_code_clicked()
{
    auto email = ui->email_lineEdit->text();
    QRegularExpression regex(R"((\w+)(\.|_)?(\w*)@(\w+)(\.(\w+))+)");
    bool match = regex.match(email).hasMatch();
    if(match){
        //发送验证码
        QJsonObject json_obj;
        json_obj["email"] = email;
        //showTip(gate_url_prefix,true);
        HttpMgr::GetInstance()->PostHttpReq(QUrl(gate_url_prefix+"/get_varifycode"),
                                            json_obj, ReqId::ID_GET_VARIFY_CODE,Modules::REGISTERMOD);

    }else{
        showTip(tr("邮箱地址不正确"),false);
    }
}

void RegisterDialog::slot_reg_mod_finish(ReqId id, QString res, ErrorCodes err)
{
    if(err != ErrorCodes::SUCCESS){
        showTip(tr("网络请求错误"),false);
        return;
    }
    // 解析Json
    QJsonDocument jsonDoc = QJsonDocument::fromJson(res.toUtf8());
    if(jsonDoc.isNull() || !jsonDoc.isObject()){
        showTip(tr("Json解析错误"),false);
        return;
    }
    // 交付给回调函数处理
    _handlers[id](jsonDoc.object());
    return;
}

void RegisterDialog::initHttpHandlers()
{
    //注册回调
    _handlers.insert(ReqId::ID_GET_VARIFY_CODE,[this](const QJsonObject& jsonObj){
        int error = jsonObj["error"].toInt();
        if(error != ErrorCodes::SUCCESS){
            showTip(tr("参数错误"),false);
            return;
        }
        auto email = jsonObj["email"].toString();
        showTip(tr("验证码已发送"),true);
        qDebug()<<"email is"<<email;
    });
}

void RegisterDialog::showTip(QString str,bool state)
{
    ui->err_tip->setText(str);
    if(state)
        ui->err_tip->setProperty("state","normal");
    else
        ui->err_tip->setProperty("state","err");
    repolish(ui->err_tip);
}

