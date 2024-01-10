/********************************************************************************
** Form generated from reading UI file 'waiter_page.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WAITER_PAGE_H
#define UI_WAITER_PAGE_H

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

class Ui_Waiter_page
{
public:
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblResult;
    QLineEdit *Waiter_username_lineEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *Waiter_pass_lineEdit;
    QPushButton *Waiter_login_pushbutton;
    QPushButton *back_pushButton;

    void setupUi(QDialog *Waiter_page)
    {
        if (Waiter_page->objectName().isEmpty())
            Waiter_page->setObjectName("Waiter_page");
        Waiter_page->resize(1600, 850);
        groupBox = new QGroupBox(Waiter_page);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(310, 70, 1041, 691));
        QFont font;
        font.setFamilies({QString::fromUtf8("Perpetua Titling MT")});
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(true);
        groupBox->setFont(font);
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(200, 100, 581, 461));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lblResult = new QLabel(layoutWidget);
        lblResult->setObjectName("lblResult");
        lblResult->setMaximumSize(QSize(100, 16777215));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Perpetua Titling MT")});
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setItalic(true);
        lblResult->setFont(font1);

        horizontalLayout_2->addWidget(lblResult);

        Waiter_username_lineEdit = new QLineEdit(layoutWidget);
        Waiter_username_lineEdit->setObjectName("Waiter_username_lineEdit");

        horizontalLayout_2->addWidget(Waiter_username_lineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setMaximumSize(QSize(100, 16777215));
        label_4->setFont(font1);

        horizontalLayout->addWidget(label_4);

        Waiter_pass_lineEdit = new QLineEdit(layoutWidget);
        Waiter_pass_lineEdit->setObjectName("Waiter_pass_lineEdit");
        Waiter_pass_lineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(Waiter_pass_lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        Waiter_login_pushbutton = new QPushButton(groupBox);
        Waiter_login_pushbutton->setObjectName("Waiter_login_pushbutton");
        Waiter_login_pushbutton->setGeometry(QRect(690, 570, 91, 41));
        back_pushButton = new QPushButton(groupBox);
        back_pushButton->setObjectName("back_pushButton");
        back_pushButton->setGeometry(QRect(200, 570, 101, 41));

        retranslateUi(Waiter_page);

        QMetaObject::connectSlotsByName(Waiter_page);
    } // setupUi

    void retranslateUi(QDialog *Waiter_page)
    {
        Waiter_page->setWindowTitle(QCoreApplication::translate("Waiter_page", "Dialog", nullptr));
#if QT_CONFIG(whatsthis)
        Waiter_page->setWhatsThis(QCoreApplication::translate("Waiter_page", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        groupBox->setTitle(QCoreApplication::translate("Waiter_page", "WAITER", nullptr));
        lblResult->setText(QCoreApplication::translate("Waiter_page", "Username:", nullptr));
        label_4->setText(QCoreApplication::translate("Waiter_page", "Password:   ", nullptr));
        Waiter_login_pushbutton->setText(QCoreApplication::translate("Waiter_page", "LOGIN", nullptr));
        back_pushButton->setText(QCoreApplication::translate("Waiter_page", "BACK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Waiter_page: public Ui_Waiter_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WAITER_PAGE_H
