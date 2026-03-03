#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QWidget>

namespace Ui {
class LoginWindow;
}

class LoginWindow : public QWidget
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();

private slots:
    void on_P_toggle_toggled(bool checked);
    void on_l_register_btn_clicked();
    void on_l_login_clicked();

private:
    Ui::LoginWindow *ui;
};

#endif // LOGINWINDOW_H
