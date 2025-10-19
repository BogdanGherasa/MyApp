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

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::LoginWindow *ui;
    QString m_email;
    QString m_password;
};

#endif // LOGINWINDOW_H
