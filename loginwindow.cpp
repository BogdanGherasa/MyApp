#include "loginwindow.h"
#include "registerwindow.h"
#include "ui_loginwindow.h"
#include "windowmanager.h"

LoginWindow::LoginWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    this->resize(400,300);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}


void LoginWindow::on_P_toggle_toggled(bool checked)
{
    if(checked)
    {
        ui->l_password->setEchoMode(QLineEdit::Normal);
    }
    else
    {
        ui->l_password->setEchoMode(QLineEdit::Password);
    }
}


void LoginWindow::on_pushButton_2_clicked()
{
    WindowManager::instance()->showRegister();

}


void LoginWindow::on_pushButton_clicked()
{

}

