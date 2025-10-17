/********************************************************************************
** Form generated from reading UI file 'secondwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDWINDOW_H
#define UI_SECONDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_secondWindow
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *secondWindow)
    {
        if (secondWindow->objectName().isEmpty())
            secondWindow->setObjectName("secondWindow");
        secondWindow->resize(400, 300);
        pushButton = new QPushButton(secondWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(130, 120, 56, 18));
        pushButton_2 = new QPushButton(secondWindow);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(220, 120, 56, 18));

        retranslateUi(secondWindow);

        QMetaObject::connectSlotsByName(secondWindow);
    } // setupUi

    void retranslateUi(QWidget *secondWindow)
    {
        secondWindow->setWindowTitle(QCoreApplication::translate("secondWindow", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("secondWindow", "main", nullptr));
        pushButton_2->setText(QCoreApplication::translate("secondWindow", "first", nullptr));
    } // retranslateUi

};

namespace Ui {
    class secondWindow: public Ui_secondWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW_H
