#include "registerwindow.h"
#include "ui_registerwindow.h"
#include "mainwindow.h"
#include"windowmanager.h"

registerWindow::registerWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::registerWindow)
{
    ui->setupUi(this);
}

registerWindow::~registerWindow()
{
    delete ui;
}



void registerWindow::on_r_Register_clicked()
{
    QString username="Bogdan";
    WindowManager::instance()->showMainWindow(username);
}

