/********************************************************************************
** Form generated from reading UI file 'firstwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRSTWINDOW_H
#define UI_FIRSTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_firstWindow
{
public:
    QLabel *label;

    void setupUi(QWidget *firstWindow)
    {
        if (firstWindow->objectName().isEmpty())
            firstWindow->setObjectName("firstWindow");
        firstWindow->resize(400, 300);
        label = new QLabel(firstWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 110, 131, 111));

        retranslateUi(firstWindow);

        QMetaObject::connectSlotsByName(firstWindow);
    } // setupUi

    void retranslateUi(QWidget *firstWindow)
    {
        firstWindow->setWindowTitle(QCoreApplication::translate("firstWindow", "Form", nullptr));
        label->setText(QCoreApplication::translate("firstWindow", "First", nullptr));
    } // retranslateUi

};

namespace Ui {
    class firstWindow: public Ui_firstWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRSTWINDOW_H
