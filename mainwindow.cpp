#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , m_firstWindow(nullptr)
    , m_secondWindow(nullptr)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    if(m_firstWindow) delete m_firstWindow;
    if(m_secondWindow) delete m_secondWindow;
}

void MainWindow::openFirstWindow()
{
    if(!m_firstWindow)
    {
        m_firstWindow =new firstWindow(nullptr);
        m_firstWindow->setAttribute(Qt::WA_DeleteOnClose, true);
        close();
    }
    m_firstWindow->show();
    m_firstWindow->raise();
    m_firstWindow->activateWindow();
}

void MainWindow::openSecondWindow()
{
    if(!m_secondWindow)
    {
        m_secondWindow=new secondWindow(nullptr);
        m_firstWindow->setAttribute(Qt::WA_DeleteOnClose, false);
        close();
    }
    m_secondWindow->show();
    m_secondWindow->raise();
    m_secondWindow->activateWindow();
}



void MainWindow::on_pushButton_clicked()
{
    openFirstWindow();
}


void MainWindow::on_pushButton_2_clicked()
{
    openSecondWindow();
}

