#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "windowmanager.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("User Authentication System - Dashboard");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_logout_btn_clicked()
{
    WindowManager::instance()->logout();
}
