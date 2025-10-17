#include "firstwindow.h"
#include "ui_firstwindow.h"

firstWindow::firstWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::firstWindow)
{
    ui->setupUi(this);
     this->resize(800, 600);
}

firstWindow::~firstWindow()
{
    delete ui;
}
