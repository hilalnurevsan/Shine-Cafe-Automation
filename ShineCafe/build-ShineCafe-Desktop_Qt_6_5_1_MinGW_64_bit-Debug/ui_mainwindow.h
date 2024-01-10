/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *photo2_label;
    QLabel *photo1_label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *Admin_PushButton;
    QPushButton *Waiter_PushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1570, 817);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        photo2_label = new QLabel(centralwidget);
        photo2_label->setObjectName("photo2_label");
        photo2_label->setGeometry(QRect(390, 200, 340, 350));
        photo1_label = new QLabel(centralwidget);
        photo1_label->setObjectName("photo1_label");
        photo1_label->setGeometry(QRect(760, 200, 340, 350));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(390, 510, 721, 121));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Admin_PushButton = new QPushButton(widget);
        Admin_PushButton->setObjectName("Admin_PushButton");
        QFont font;
        font.setFamilies({QString::fromUtf8("Sitka Heading")});
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(true);
        Admin_PushButton->setFont(font);

        horizontalLayout->addWidget(Admin_PushButton);

        Waiter_PushButton = new QPushButton(widget);
        Waiter_PushButton->setObjectName("Waiter_PushButton");
        Waiter_PushButton->setFont(font);

        horizontalLayout->addWidget(Waiter_PushButton);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1570, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        photo2_label->setText(QString());
        photo1_label->setText(QString());
        Admin_PushButton->setText(QCoreApplication::translate("MainWindow", "ADMIN", nullptr));
        Waiter_PushButton->setText(QCoreApplication::translate("MainWindow", "WAITER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
