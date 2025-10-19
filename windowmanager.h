#ifndef WINDOWMANAGER_H
#define WINDOWMANAGER_H


#include <qwidget.h>
class WindowManager
{
public:
   static WindowManager *instance();


    void showLogin();
    void showRegister();
    void showMainWindow(QString username);
    void logout();

private:
     WindowManager();
    ~WindowManager();

    static WindowManager* m_instance;
    QWidget* m_currentWindow;

    void switchToWindow(QWidget *newWindow);

};

#endif // WINDOWMANAGER_H
