/********************************************************************************
** Form generated from reading UI file 'remove_waiter.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVE_WAITER_H
#define UI_REMOVE_WAITER_H

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

class Ui_Remove_waiter
{
public:
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *Name_lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *Surname_lineEdit;
    QPushButton *Remove_pushButton;
    QPushButton *Back_pushButton;

    void setupUi(QDialog *Remove_waiter)
    {
        if (Remove_waiter->objectName().isEmpty())
            Remove_waiter->setObjectName("Remove_waiter");
        Remove_waiter->resize(1600, 850);
        groupBox = new QGroupBox(Remove_waiter);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(250, 60, 1031, 661));
        QFont font;
        font.setFamilies({QString::fromUtf8("Perpetua Titling MT")});
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(true);
        groupBox->setFont(font);
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(170, 90, 591, 421));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        Name_lineEdit = new QLineEdit(layoutWidget);
        Name_lineEdit->setObjectName("Name_lineEdit");

        horizontalLayout->addWidget(Name_lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        Surname_lineEdit = new QLineEdit(layoutWidget);
        Surname_lineEdit->setObjectName("Surname_lineEdit");

        horizontalLayout_2->addWidget(Surname_lineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        Remove_pushButton = new QPushButton(groupBox);
        Remove_pushButton->setObjectName("Remove_pushButton");
        Remove_pushButton->setGeometry(QRect(670, 520, 91, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Perpetua Titling MT")});
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setItalic(true);
        Remove_pushButton->setFont(font1);
        Back_pushButton = new QPushButton(groupBox);
        Back_pushButton->setObjectName("Back_pushButton");
        Back_pushButton->setGeometry(QRect(170, 520, 91, 41));

        retranslateUi(Remove_waiter);

        QMetaObject::connectSlotsByName(Remove_waiter);
    } // setupUi

    void retranslateUi(QDialog *Remove_waiter)
    {
        Remove_waiter->setWindowTitle(QCoreApplication::translate("Remove_waiter", "Dialog", nullptr));
#if QT_CONFIG(tooltip)
        Remove_waiter->setToolTip(QCoreApplication::translate("Remove_waiter", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QCoreApplication::translate("Remove_waiter", "REMOVE WAITER", nullptr));
        label->setText(QCoreApplication::translate("Remove_waiter", "Name:     ", nullptr));
        label_2->setText(QCoreApplication::translate("Remove_waiter", "Surname:", nullptr));
        Remove_pushButton->setText(QCoreApplication::translate("Remove_waiter", "REMOVE ", nullptr));
        Back_pushButton->setText(QCoreApplication::translate("Remove_waiter", "BACK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Remove_waiter: public Ui_Remove_waiter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVE_WAITER_H
