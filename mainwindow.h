#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "firstwindow.h"
#include "secondwindow.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void openFirstWindow();
    void openSecondWindow();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    firstWindow * m_firstWindow;
    secondWindow *m_secondWindow;
};
#endif // MAINWINDOW_H
