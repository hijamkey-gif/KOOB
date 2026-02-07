#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QGraphicsDropShadowEffect"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // QGraphicsDropShadowEffect* shadow = new QGraphicsDropShadowEffect(this);
    // shadow->setBlurRadius(100);
    // shadow->setOffset(0, 20);
    // shadow->setColor(QColor(0, 0, 0, 150));
    // ui->centralwidget->setGraphicsEffect(shadow);
    //setWindowFlags(Qt::FramelessWindowHint | Qt::Window);
    _login_dlg = new LoginDialog(this);
    //_login_dlg->show();
    setCentralWidget(_login_dlg);
    _login_dlg->setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    _login_dlg->show();
    connect(_login_dlg,&LoginDialog::switchRegister,this,&MainWindow::SlotSwitchReg);
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
    connect(_login_dlg,&LoginDialog::switchRegister,this,&MainWindow::SlotSwitchReg);

    setCentralWidget(_login_dlg);
    _register_dlg->hide();
    _login_dlg->show();

}
