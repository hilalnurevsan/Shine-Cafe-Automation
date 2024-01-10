/********************************************************************************
** Form generated from reading UI file 'order.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDER_H
#define UI_ORDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Order
{
public:
    QGroupBox *groupBox_2;
    QLabel *label_2;
    QGroupBox *foods_groupBox;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_3;
    QPushButton *product1_pushButton;
    QPushButton *product2_pushButton;
    QPushButton *product3_pushButton;
    QPushButton *product4_pushButton;
    QPushButton *product5_pushButton;
    QPushButton *product6_pushButton;
    QGroupBox *hotdrinks_groupBox;
    QWidget *layoutWidget_5;
    QGridLayout *gridLayout_2;
    QPushButton *product7_pushButton;
    QPushButton *product8_pushButton;
    QPushButton *product9_pushButton;
    QPushButton *product10_pushButton;
    QPushButton *product11_pushButton;
    QPushButton *product12_pushButton;
    QPushButton *product13_pushButton;
    QGroupBox *colddrinks_groupBox;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *product14_pushButton;
    QPushButton *product15_pushButton;
    QPushButton *product16_pushButton;
    QPushButton *product17_pushButton;
    QPushButton *product18_pushButton;
    QPushButton *product19_pushButton;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *deleteProduct_pushButton;
    QPushButton *calculate_pushButton;
    QGroupBox *orderlist_groupBox;
    QListWidget *listWidget;
    QGroupBox *groupBox;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *cashPayment_pushButton;
    QPushButton *creditCardPayment_pushButton;
    QLabel *label;
    QListWidget *totalBill_listWidget;
    QPushButton *back_pushButton;
    QPushButton *increase_pushButton;
    QPushButton *decrease_pushButton;
    QListWidget *TableNo;

    void setupUi(QDialog *Order)
    {
        if (Order->objectName().isEmpty())
            Order->setObjectName("Order");
        Order->resize(1600, 850);
        groupBox_2 = new QGroupBox(Order);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(190, 30, 1181, 721));
        QFont font;
        font.setFamilies({QString::fromUtf8("Perpetua Titling MT")});
        font.setPointSize(9);
        font.setBold(true);
        font.setItalic(true);
        groupBox_2->setFont(font);
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(190, 50, 171, 31));
        foods_groupBox = new QGroupBox(groupBox_2);
        foods_groupBox->setObjectName("foods_groupBox");
        foods_groupBox->setGeometry(QRect(570, 40, 551, 191));
        foods_groupBox->setFont(font);
        layoutWidget_2 = new QWidget(foods_groupBox);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(30, 40, 501, 131));
        gridLayout_3 = new QGridLayout(layoutWidget_2);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        product1_pushButton = new QPushButton(layoutWidget_2);
        product1_pushButton->setObjectName("product1_pushButton");

        gridLayout_3->addWidget(product1_pushButton, 0, 0, 1, 1);

        product2_pushButton = new QPushButton(layoutWidget_2);
        product2_pushButton->setObjectName("product2_pushButton");

        gridLayout_3->addWidget(product2_pushButton, 0, 1, 1, 1);

        product3_pushButton = new QPushButton(layoutWidget_2);
        product3_pushButton->setObjectName("product3_pushButton");

        gridLayout_3->addWidget(product3_pushButton, 0, 2, 1, 1);

        product4_pushButton = new QPushButton(layoutWidget_2);
        product4_pushButton->setObjectName("product4_pushButton");

        gridLayout_3->addWidget(product4_pushButton, 1, 0, 1, 1);

        product5_pushButton = new QPushButton(layoutWidget_2);
        product5_pushButton->setObjectName("product5_pushButton");

        gridLayout_3->addWidget(product5_pushButton, 1, 1, 1, 1);

        product6_pushButton = new QPushButton(layoutWidget_2);
        product6_pushButton->setObjectName("product6_pushButton");

        gridLayout_3->addWidget(product6_pushButton, 1, 2, 1, 1);

        hotdrinks_groupBox = new QGroupBox(groupBox_2);
        hotdrinks_groupBox->setObjectName("hotdrinks_groupBox");
        hotdrinks_groupBox->setGeometry(QRect(570, 250, 551, 171));
        hotdrinks_groupBox->setFont(font);
        layoutWidget_5 = new QWidget(hotdrinks_groupBox);
        layoutWidget_5->setObjectName("layoutWidget_5");
        layoutWidget_5->setGeometry(QRect(30, 30, 507, 121));
        gridLayout_2 = new QGridLayout(layoutWidget_5);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        product7_pushButton = new QPushButton(layoutWidget_5);
        product7_pushButton->setObjectName("product7_pushButton");
        product7_pushButton->setFont(font);

        gridLayout_2->addWidget(product7_pushButton, 0, 0, 1, 1);

        product8_pushButton = new QPushButton(layoutWidget_5);
        product8_pushButton->setObjectName("product8_pushButton");

        gridLayout_2->addWidget(product8_pushButton, 0, 1, 1, 1);

        product9_pushButton = new QPushButton(layoutWidget_5);
        product9_pushButton->setObjectName("product9_pushButton");

        gridLayout_2->addWidget(product9_pushButton, 0, 2, 1, 1);

        product10_pushButton = new QPushButton(layoutWidget_5);
        product10_pushButton->setObjectName("product10_pushButton");

        gridLayout_2->addWidget(product10_pushButton, 1, 0, 1, 1);

        product11_pushButton = new QPushButton(layoutWidget_5);
        product11_pushButton->setObjectName("product11_pushButton");

        gridLayout_2->addWidget(product11_pushButton, 1, 1, 1, 1);

        product12_pushButton = new QPushButton(layoutWidget_5);
        product12_pushButton->setObjectName("product12_pushButton");

        gridLayout_2->addWidget(product12_pushButton, 1, 2, 1, 1);

        product13_pushButton = new QPushButton(layoutWidget_5);
        product13_pushButton->setObjectName("product13_pushButton");

        gridLayout_2->addWidget(product13_pushButton, 2, 0, 1, 1);

        colddrinks_groupBox = new QGroupBox(groupBox_2);
        colddrinks_groupBox->setObjectName("colddrinks_groupBox");
        colddrinks_groupBox->setGeometry(QRect(570, 440, 551, 171));
        colddrinks_groupBox->setFont(font);
        layoutWidget = new QWidget(colddrinks_groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 40, 511, 101));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        product14_pushButton = new QPushButton(layoutWidget);
        product14_pushButton->setObjectName("product14_pushButton");

        gridLayout->addWidget(product14_pushButton, 0, 0, 1, 1);

        product15_pushButton = new QPushButton(layoutWidget);
        product15_pushButton->setObjectName("product15_pushButton");

        gridLayout->addWidget(product15_pushButton, 0, 1, 1, 1);

        product16_pushButton = new QPushButton(layoutWidget);
        product16_pushButton->setObjectName("product16_pushButton");

        gridLayout->addWidget(product16_pushButton, 0, 2, 1, 1);

        product17_pushButton = new QPushButton(layoutWidget);
        product17_pushButton->setObjectName("product17_pushButton");

        gridLayout->addWidget(product17_pushButton, 1, 0, 1, 1);

        product18_pushButton = new QPushButton(layoutWidget);
        product18_pushButton->setObjectName("product18_pushButton");

        gridLayout->addWidget(product18_pushButton, 1, 1, 1, 1);

        product19_pushButton = new QPushButton(layoutWidget);
        product19_pushButton->setObjectName("product19_pushButton");

        gridLayout->addWidget(product19_pushButton, 1, 2, 1, 1);

        product14_pushButton->raise();
        product15_pushButton->raise();
        product17_pushButton->raise();
        product18_pushButton->raise();
        product19_pushButton->raise();
        product16_pushButton->raise();
        layoutWidget_4 = new QWidget(groupBox_2);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(100, 430, 371, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget_4);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        deleteProduct_pushButton = new QPushButton(layoutWidget_4);
        deleteProduct_pushButton->setObjectName("deleteProduct_pushButton");

        horizontalLayout->addWidget(deleteProduct_pushButton);

        calculate_pushButton = new QPushButton(layoutWidget_4);
        calculate_pushButton->setObjectName("calculate_pushButton");

        horizontalLayout->addWidget(calculate_pushButton);

        orderlist_groupBox = new QGroupBox(groupBox_2);
        orderlist_groupBox->setObjectName("orderlist_groupBox");
        orderlist_groupBox->setGeometry(QRect(40, 100, 501, 321));
        listWidget = new QListWidget(orderlist_groupBox);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(10, 30, 481, 281));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Perpetua Titling MT")});
        font1.setPointSize(8);
        font1.setBold(true);
        font1.setItalic(true);
        listWidget->setFont(font1);
        groupBox = new QGroupBox(groupBox_2);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(100, 480, 371, 131));
        layoutWidget_3 = new QWidget(groupBox);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(30, 80, 311, 41));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        cashPayment_pushButton = new QPushButton(layoutWidget_3);
        cashPayment_pushButton->setObjectName("cashPayment_pushButton");
        cashPayment_pushButton->setFont(font);

        horizontalLayout_2->addWidget(cashPayment_pushButton);

        creditCardPayment_pushButton = new QPushButton(layoutWidget_3);
        creditCardPayment_pushButton->setObjectName("creditCardPayment_pushButton");

        horizontalLayout_2->addWidget(creditCardPayment_pushButton);

        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 40, 101, 31));
        label->setFont(font);
        totalBill_listWidget = new QListWidget(groupBox);
        totalBill_listWidget->setObjectName("totalBill_listWidget");
        totalBill_listWidget->setGeometry(QRect(190, 40, 61, 31));
        back_pushButton = new QPushButton(groupBox_2);
        back_pushButton->setObjectName("back_pushButton");
        back_pushButton->setGeometry(QRect(20, 670, 71, 29));
        increase_pushButton = new QPushButton(groupBox_2);
        increase_pushButton->setObjectName("increase_pushButton");
        increase_pushButton->setGeometry(QRect(480, 490, 71, 29));
        decrease_pushButton = new QPushButton(groupBox_2);
        decrease_pushButton->setObjectName("decrease_pushButton");
        decrease_pushButton->setGeometry(QRect(480, 530, 71, 29));
        TableNo = new QListWidget(groupBox_2);
        TableNo->setObjectName("TableNo");
        TableNo->setGeometry(QRect(50, 30, 61, 31));

        retranslateUi(Order);

        QMetaObject::connectSlotsByName(Order);
    } // setupUi

    void retranslateUi(QDialog *Order)
    {
        Order->setWindowTitle(QCoreApplication::translate("Order", "Dialog", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Order", "ORDER ", nullptr));
        label_2->setText(QCoreApplication::translate("Order", "   Order List", nullptr));
        foods_groupBox->setTitle(QCoreApplication::translate("Order", "Foods", nullptr));
        product1_pushButton->setText(QCoreApplication::translate("Order", "Brownie", nullptr));
        product2_pushButton->setText(QCoreApplication::translate("Order", "Sandwich", nullptr));
        product3_pushButton->setText(QCoreApplication::translate("Order", "Cheesecake", nullptr));
        product4_pushButton->setText(QCoreApplication::translate("Order", "Macaron", nullptr));
        product5_pushButton->setText(QCoreApplication::translate("Order", "Taco", nullptr));
        product6_pushButton->setText(QCoreApplication::translate("Order", "Croissant", nullptr));
        hotdrinks_groupBox->setTitle(QCoreApplication::translate("Order", "Hot Drinks", nullptr));
        product7_pushButton->setText(QCoreApplication::translate("Order", "FLAT WHITE", nullptr));
        product8_pushButton->setText(QCoreApplication::translate("Order", "Latte", nullptr));
        product9_pushButton->setText(QCoreApplication::translate("Order", "Americano", nullptr));
        product10_pushButton->setText(QCoreApplication::translate("Order", "Espresso", nullptr));
        product11_pushButton->setText(QCoreApplication::translate("Order", "Cappuccino", nullptr));
        product12_pushButton->setText(QCoreApplication::translate("Order", "Mocha", nullptr));
        product13_pushButton->setText(QCoreApplication::translate("Order", "Tea", nullptr));
        colddrinks_groupBox->setTitle(QCoreApplication::translate("Order", "Cold Drinks", nullptr));
        product14_pushButton->setText(QCoreApplication::translate("Order", "Mojito", nullptr));
        product15_pushButton->setText(QCoreApplication::translate("Order", "Coke", nullptr));
        product16_pushButton->setText(QCoreApplication::translate("Order", "Lemonade", nullptr));
        product17_pushButton->setText(QCoreApplication::translate("Order", "Ice Tea", nullptr));
        product18_pushButton->setText(QCoreApplication::translate("Order", "Soda", nullptr));
        product19_pushButton->setText(QCoreApplication::translate("Order", "Smoothies", nullptr));
        deleteProduct_pushButton->setText(QCoreApplication::translate("Order", "Delete Product", nullptr));
        calculate_pushButton->setText(QCoreApplication::translate("Order", "Calculate", nullptr));
        orderlist_groupBox->setTitle(QCoreApplication::translate("Order", "    PRODUCT                        PRICE                      AMOUNT", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Order", "Payment", nullptr));
        cashPayment_pushButton->setText(QCoreApplication::translate("Order", "Cash", nullptr));
        creditCardPayment_pushButton->setText(QCoreApplication::translate("Order", "Credit Card", nullptr));
        label->setText(QCoreApplication::translate("Order", "TOTAL BILL: ", nullptr));
        back_pushButton->setText(QCoreApplication::translate("Order", "BACK", nullptr));
        increase_pushButton->setText(QCoreApplication::translate("Order", "+", nullptr));
        decrease_pushButton->setText(QCoreApplication::translate("Order", "-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Order: public Ui_Order {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDER_H
