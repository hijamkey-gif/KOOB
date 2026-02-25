#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QGraphicsDropShadowEffect"
#include "tcpmgr.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    _login_dlg = new LoginDialog(this);
    setCentralWidget(_login_dlg);
    _login_dlg->setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    _login_dlg->show();
    connect(_login_dlg,&LoginDialog::switchRegister,this,&MainWindow::SlotSwitchReg);
    //连接登录界面忘记密码信号
    connect(_login_dlg, &LoginDialog::switchReset, this, &MainWindow::SlotSwitchReset);
    connect(TcpMgr::GetInstance().get(),&TcpMgr::sig_switch_chatdlg, this, &MainWindow::SlotSwitchChat);

    // 测试切换到聊天界面
    // SlotSwitchChat();

    this->setMinimumSize(800,500);
    //this->setMaximumSize(800,500);

}

MainWindow::~MainWindow()
{
    delete ui;
    // if(_login_dlg){
    //     delete _login_dlg;
    //     _login_dlg = nullptr;
    // }
    // if(_register_dlg){
    //     delete _register_dlg;
    //     _register_dlg = nullptr;
    // }
}

void MainWindow::SlotSwitchReg()
{
    _register_dlg = new RegisterDialog(this);
    _register_dlg->setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    connect(_register_dlg,&RegisterDialog::sigSwitchLogin,this,&MainWindow::SlotReturnLog);

    setCentralWidget(_register_dlg);
    _login_dlg->hide();
    _register_dlg->show();
}

void MainWindow::SlotReturnLog()
{
    _login_dlg = new LoginDialog(this);
    _login_dlg->setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    connect(_login_dlg, &LoginDialog::switchReset, this, &MainWindow::SlotSwitchReset);
    connect(_login_dlg,&LoginDialog::switchRegister,this,&MainWindow::SlotSwitchReg);

    setCentralWidget(_login_dlg);
    _register_dlg->hide();
    _login_dlg->show();
}

void MainWindow::SlotReturnLog2()
{
    _login_dlg = new LoginDialog(this);
    _login_dlg->setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    connect(_login_dlg, &LoginDialog::switchReset, this, &MainWindow::SlotSwitchReset);
    connect(_login_dlg,&LoginDialog::switchRegister,this,&MainWindow::SlotSwitchReg);

    setCentralWidget(_login_dlg);
    _reset_dlg->hide();
    _login_dlg->show();
}

void MainWindow::SlotSwitchReset()
{
    //创建一个CentralWidget, 并将其设置为MainWindow的中心部件
    _reset_dlg = new ResetDialog(this);
    _reset_dlg->setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    setCentralWidget(_reset_dlg);
    _login_dlg->hide();
    _reset_dlg->show();
    //注册返回登录信号和槽函数
    connect(_reset_dlg, &ResetDialog::sigSwitchLogin, this, &MainWindow::SlotReturnLog2);
}

void MainWindow::SlotSwitchChat()
{
    _chat_dlg = new ChatDialog();
    _chat_dlg->setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    setCentralWidget(_chat_dlg);
    _chat_dlg->show();
    _login_dlg->hide();
    //this->setMinimumSize(QSize(400,400));
    this->setMaximumSize(QWIDGETSIZE_MAX, QWIDGETSIZE_MAX);
}
