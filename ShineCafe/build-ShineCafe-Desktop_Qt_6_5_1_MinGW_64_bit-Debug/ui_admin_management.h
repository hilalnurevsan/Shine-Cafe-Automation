/********************************************************************************
** Form generated from reading UI file 'admin_management.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_MANAGEMENT_H
#define UI_ADMIN_MANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Admin_Management
{
public:
    QGroupBox *groupBox;
    QPushButton *Admin_management_back_pushButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *Add_pushButton;
    QPushButton *Remove_pushButton;
    QPushButton *See_pushButton;
    QPushButton *Update_pushButton;

    void setupUi(QDialog *Admin_Management)
    {
        if (Admin_Management->objectName().isEmpty())
            Admin_Management->setObjectName("Admin_Management");
        Admin_Management->resize(1600, 850);
        QFont font;
        font.setFamilies({QString::fromUtf8("Roman")});
        Admin_Management->setFont(font);
        groupBox = new QGroupBox(Admin_Management);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(330, 110, 921, 611));
        QPalette palette;
        QBrush brush(QColor(102, 104, 240, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        groupBox->setPalette(palette);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Perpetua Titling MT")});
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setUnderline(false);
        font1.setStrikeOut(false);
        font1.setKerning(true);
        groupBox->setFont(font1);
        Admin_management_back_pushButton = new QPushButton(groupBox);
        Admin_management_back_pushButton->setObjectName("Admin_management_back_pushButton");
        Admin_management_back_pushButton->setGeometry(QRect(660, 490, 91, 41));
        QPalette palette1;
        QBrush brush1(QColor(240, 73, 76, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(165, 230, 240, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        Admin_management_back_pushButton->setPalette(palette1);
        Admin_management_back_pushButton->setFont(font1);
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(140, 110, 611, 371));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        Add_pushButton = new QPushButton(layoutWidget);
        Add_pushButton->setObjectName("Add_pushButton");

        verticalLayout_2->addWidget(Add_pushButton);

        Remove_pushButton = new QPushButton(layoutWidget);
        Remove_pushButton->setObjectName("Remove_pushButton");

        verticalLayout_2->addWidget(Remove_pushButton);

        See_pushButton = new QPushButton(layoutWidget);
        See_pushButton->setObjectName("See_pushButton");

        verticalLayout_2->addWidget(See_pushButton);

        Update_pushButton = new QPushButton(layoutWidget);
        Update_pushButton->setObjectName("Update_pushButton");

        verticalLayout_2->addWidget(Update_pushButton);


        retranslateUi(Admin_Management);

        QMetaObject::connectSlotsByName(Admin_Management);
    } // setupUi

    void retranslateUi(QDialog *Admin_Management)
    {
        Admin_Management->setWindowTitle(QCoreApplication::translate("Admin_Management", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Admin_Management", "ADMIN MANAGEMENT", nullptr));
        Admin_management_back_pushButton->setText(QCoreApplication::translate("Admin_Management", "BACK", nullptr));
        Add_pushButton->setText(QCoreApplication::translate("Admin_Management", "ADD", nullptr));
        Remove_pushButton->setText(QCoreApplication::translate("Admin_Management", "REMOVE", nullptr));
        See_pushButton->setText(QCoreApplication::translate("Admin_Management", "SEE", nullptr));
        Update_pushButton->setText(QCoreApplication::translate("Admin_Management", "UPDATE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Admin_Management: public Ui_Admin_Management {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_MANAGEMENT_H
