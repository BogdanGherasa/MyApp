#ifndef FIRSTWINDOW_H
#define FIRSTWINDOW_H

#include <QWidget>

namespace Ui {
class firstWindow;
}

class firstWindow : public QWidget
{
    Q_OBJECT

public:
    explicit firstWindow(QWidget *parent = nullptr);
    ~firstWindow();

private:
    Ui::firstWindow *ui;
};

#endif // FIRSTWINDOW_H
