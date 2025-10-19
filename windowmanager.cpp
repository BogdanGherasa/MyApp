#include "windowmanager.h"
#include "loginwindow.h"
#include "registerwindow.h"
#include "mainwindow.h"

WindowManager* WindowManager::m_instance = nullptr;

WindowManager::WindowManager()
    : m_currentWindow(nullptr)
{
}

WindowManager::~WindowManager()
{
    if (m_currentWindow) {
        m_currentWindow->close();
        delete m_currentWindow;
    }
}

WindowManager* WindowManager::instance()
{
    if (!m_instance) {
        m_instance = new WindowManager;
    }
    return m_instance;
}

void WindowManager::switchToWindow(QWidget* newWindow)
{
    // Închide fereastra veche
    if (m_currentWindow) {
        m_currentWindow->close();
        m_currentWindow->deleteLater();
    }

    // Afișează fereastra nouă
    m_currentWindow = newWindow;
    m_currentWindow->show();
}

void WindowManager::showLogin()
{
    LoginWindow* loginWin = new LoginWindow;
    switchToWindow(loginWin);
}

void WindowManager::showRegister()
{
    registerWindow* regWin = new registerWindow;
    switchToWindow(regWin);

}

void WindowManager::showMainWindow(QString user)
{
    MainWindow* mainWin = new MainWindow;

    switchToWindow(mainWin);;
}

void WindowManager::logout()
{
    showLogin();
}
