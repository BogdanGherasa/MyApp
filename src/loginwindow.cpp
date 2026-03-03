#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "windowmanager.h"
#include "datamanager.h"
#include <QMessageBox>

LoginWindow::LoginWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    this->setFixedSize(400, 300);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_P_toggle_toggled(bool checked)
{
    ui->l_password->setEchoMode(checked ? QLineEdit::Normal : QLineEdit::Password);
}

void LoginWindow::on_l_register_btn_clicked()
{
    WindowManager::instance()->showRegister();
}

void LoginWindow::on_l_login_clicked()
{
    QString username = ui->l_username->text();
    QString password = ui->l_password->text();

    if (DataManager::instance()->loginUser(username, password)) {
        WindowManager::instance()->showMainWindow(username);
    } else {
        QMessageBox::warning(this, "Login Failed", "Invalid username or password.");
    }
}
