#include "mainwindow.h"
#include "loginwindow.h"
#include "registerwindow.h"
#include "windowmanager.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WindowManager::instance()->showLogin();
    return a.exec();
}
