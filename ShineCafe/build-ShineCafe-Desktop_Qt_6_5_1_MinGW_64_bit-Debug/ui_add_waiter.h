/********************************************************************************
** Form generated from reading UI file 'add_waiter.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_WAITER_H
#define UI_ADD_WAITER_H

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

class Ui_Add_waiter
{
public:
    QGroupBox *groupBox;
    QPushButton *add_pushButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *add_waiter_name_lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *add_waiter_surname_lineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *add_waiter_username_lineEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *add_waiter_pass_lineEdit;
    QPushButton *back_pushButton;

    void setupUi(QDialog *Add_waiter)
    {
        if (Add_waiter->objectName().isEmpty())
            Add_waiter->setObjectName("Add_waiter");
        Add_waiter->resize(1600, 850);
        groupBox = new QGroupBox(Add_waiter);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(300, 80, 941, 681));
        QFont font;
        font.setFamilies({QString::fromUtf8("Perpetua Titling MT")});
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(true);
        groupBox->setFont(font);
        add_pushButton = new QPushButton(groupBox);
        add_pushButton->setObjectName("add_pushButton");
        add_pushButton->setGeometry(QRect(660, 500, 91, 41));
        widget = new QWidget(groupBox);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(150, 100, 601, 391));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        add_waiter_name_lineEdit = new QLineEdit(widget);
        add_waiter_name_lineEdit->setObjectName("add_waiter_name_lineEdit");

        horizontalLayout->addWidget(add_waiter_name_lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        add_waiter_surname_lineEdit = new QLineEdit(widget);
        add_waiter_surname_lineEdit->setObjectName("add_waiter_surname_lineEdit");

        horizontalLayout_2->addWidget(add_waiter_surname_lineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        add_waiter_username_lineEdit = new QLineEdit(widget);
        add_waiter_username_lineEdit->setObjectName("add_waiter_username_lineEdit");

        horizontalLayout_3->addWidget(add_waiter_username_lineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        add_waiter_pass_lineEdit = new QLineEdit(widget);
        add_waiter_pass_lineEdit->setObjectName("add_waiter_pass_lineEdit");

        horizontalLayout_4->addWidget(add_waiter_pass_lineEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        back_pushButton = new QPushButton(groupBox);
        back_pushButton->setObjectName("back_pushButton");
        back_pushButton->setGeometry(QRect(150, 500, 91, 41));

        retranslateUi(Add_waiter);

        QMetaObject::connectSlotsByName(Add_waiter);
    } // setupUi

    void retranslateUi(QDialog *Add_waiter)
    {
        Add_waiter->setWindowTitle(QCoreApplication::translate("Add_waiter", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Add_waiter", "ADD WAITER", nullptr));
        add_pushButton->setText(QCoreApplication::translate("Add_waiter", "ADD", nullptr));
        label->setText(QCoreApplication::translate("Add_waiter", "Name:        ", nullptr));
        add_waiter_name_lineEdit->setText(QString());
        label_2->setText(QCoreApplication::translate("Add_waiter", "Surname:  ", nullptr));
        label_3->setText(QCoreApplication::translate("Add_waiter", "Username: ", nullptr));
        label_4->setText(QCoreApplication::translate("Add_waiter", "Password: ", nullptr));
        back_pushButton->setText(QCoreApplication::translate("Add_waiter", "BACK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Add_waiter: public Ui_Add_waiter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_WAITER_H
