#include "registerwindow.h"
#include "ui_registerwindow.h"
#include "windowmanager.h"
#include "datamanager.h"
#include <QMessageBox>

RegisterWindow::RegisterWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::RegisterWindow)
{
    ui->setupUi(this);
}

RegisterWindow::~RegisterWindow()
{
    delete ui;
}

void RegisterWindow::on_r_Register_clicked()
{
    QString username = ui->r_username->text();
    QString password = ui->r_password->text();
    QString confirm = ui->r_c_password->text();

    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Registration Failed", "Fields cannot be empty.");
        return;
    }

    if (password != confirm) {
        QMessageBox::warning(this, "Registration Failed", "Passwords do not match.");
        return;
    }

    if (DataManager::instance()->registerUser(username, password)) {
        QMessageBox::information(this, "Success", "Account created successfully!");
        WindowManager::instance()->showLogin();
    } else {
        QMessageBox::warning(this, "Registration Failed", "Username already exists.");
    }
}

void RegisterWindow::on_r_Cancel_clicked()
{
    WindowManager::instance()->showLogin();
}
