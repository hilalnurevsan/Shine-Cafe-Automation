/********************************************************************************
** Form generated from reading UI file 'admin_page.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_PAGE_H
#define UI_ADMIN_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Admin_page
{
public:
    QGroupBox *groupBox;
    QPushButton *Admin_login_pushbutton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *Admin_username_lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *Admin_pass_lineEdit;
    QPushButton *back_pushButton;

    void setupUi(QDialog *Admin_page)
    {
        if (Admin_page->objectName().isEmpty())
            Admin_page->setObjectName("Admin_page");
        Admin_page->resize(1600, 850);
        groupBox = new QGroupBox(Admin_page);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(390, 80, 841, 691));
        QFont font;
        font.setFamilies({QString::fromUtf8("Perpetua Titling MT")});
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(true);
        groupBox->setFont(font);
        Admin_login_pushbutton = new QPushButton(groupBox);
        Admin_login_pushbutton->setObjectName("Admin_login_pushbutton");
        Admin_login_pushbutton->setGeometry(QRect(620, 550, 91, 41));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(100, 130, 611, 411));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setMaximumSize(QSize(100, 16777215));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Perpetua Titling MT")});
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setItalic(true);
        label_3->setFont(font1);

        horizontalLayout->addWidget(label_3);

        Admin_username_lineEdit = new QLineEdit(layoutWidget);
        Admin_username_lineEdit->setObjectName("Admin_username_lineEdit");

        horizontalLayout->addWidget(Admin_username_lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setMaximumSize(QSize(100, 16777215));
        label_4->setFont(font1);

        horizontalLayout_2->addWidget(label_4);

        Admin_pass_lineEdit = new QLineEdit(layoutWidget);
        Admin_pass_lineEdit->setObjectName("Admin_pass_lineEdit");
        Admin_pass_lineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(Admin_pass_lineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        back_pushButton = new QPushButton(groupBox);
        back_pushButton->setObjectName("back_pushButton");
        back_pushButton->setGeometry(QRect(100, 550, 81, 41));

        retranslateUi(Admin_page);

        QMetaObject::connectSlotsByName(Admin_page);
    } // setupUi

    void retranslateUi(QDialog *Admin_page)
    {
        Admin_page->setWindowTitle(QCoreApplication::translate("Admin_page", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Admin_page", "ADMIN LOGIN", nullptr));
        Admin_login_pushbutton->setText(QCoreApplication::translate("Admin_page", "LOGIN", nullptr));
        label_3->setText(QCoreApplication::translate("Admin_page", "Username:     ", nullptr));
        label_4->setText(QCoreApplication::translate("Admin_page", "Password:    ", nullptr));
        back_pushButton->setText(QCoreApplication::translate("Admin_page", "BACK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Admin_page: public Ui_Admin_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_PAGE_H
