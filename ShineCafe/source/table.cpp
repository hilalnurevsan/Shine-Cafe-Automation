/**
 * @file table.cpp
 * @brief Implementation file for the Table class.
 */

#include "table.h"
#include "ui_table.h"
#include "waiter_page.h"
#include "order.h"
#include <QMap>
#include <QPushButton>
#include <QMessageBox>

/**
 * @brief Constructor for the Table class.
 * @param parent The parent widget.
 */
Table::Table(QWidget *parent) : QDialog(parent), ui(new Ui::Table) {
    ui->setupUi(this);

    // Set window properties
    setWindowFlags(windowFlags() | Qt::WindowMinimizeButtonHint);
    setWindowTitle("TABLES");

    // Initialize checkboxes for each table
    QList<QCheckBox*> checkboxes = {
        ui->s1_checkBox, ui->s2_checkBox, ui->s3_checkBox, ui->s4_checkBox, ui->s5_checkBox,
        ui->t1_checkBox, ui->t2_checkBox, ui->t3_checkBox, ui->t4_checkBox, ui->t5_checkBox,
        ui->g1_checkBox, ui->g2_checkBox, ui->g3_checkBox, ui->g4_checkBox, ui->g5_checkBox
    };

    // List of tables that are initially unavailable
    QList<QString> defaultUnavailableTables = {"s1", "t3", "g5"};
    for (const QString& tableName : defaultUnavailableTables) {
        tableAvailability[tableName] = false;
        // Find and check the corresponding checkbox to indicate unavailability
        for (QCheckBox* checkBox : checkboxes) {
            if (checkBox->objectName() == tableName + "_checkBox") {
                checkBox->setChecked(true);
                break;
            }
        }
    }

    // Set initial availability status for all tables
    const int totalTables = 15;
    for (int i = 1; i <= totalTables; ++i) {
        tableAvailability["s" + QString::number(i)] = true;
        tableAvailability["t" + QString::number(i)] = true;
        tableAvailability["g" + QString::number(i)] = true;
    }

    // Connect each table button to a lambda function to open the order window
    QList<QPushButton*> buttons = {
        ui->s1_pushButton, ui->s2_pushButton, ui->s3_pushButton, ui->s4_pushButton, ui->s5_pushButton,
        ui->t1_pushButton, ui->t2_pushButton, ui->t3_pushButton, ui->t4_pushButton, ui->t5_pushButton,
        ui->g1_pushButton, ui->g2_pushButton, ui->g3_pushButton, ui->g4_pushButton, ui->g5_pushButton
    };

    for (QPushButton* button : buttons) {
        connect(button, &QPushButton::clicked, [this, button]() {
            QString tableName = button->objectName().remove("_pushButton");
            openOrderWindow(tableName);
        });
    }
}

/**
 * @brief Destructor for the Table class.
 */
Table::~Table() {
    delete ui;
}

/**
 * @brief Event handler for window resize events.
 * @param event The resize event.
 */
void Table::resizeEvent(QResizeEvent *event) {
    QDialog::resizeEvent(event);

    // Set the background image
    QPixmap background("C:/Users/Asus/Documents/ShineCafe/photos/table1.png");
    background = background.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);

    QPalette palette;
    palette.setBrush(QPalette::Window, background);
    this->setPalette(palette);
}

/**
 * @brief Function to open the order window for a specific table.
 * @param tableName The name of the table.
 */
void Table::openOrderWindow(const QString &tableName) {
    Order *orderWindow = nullptr;

    // Check the checkbox status for the selected table
    QString checkBoxName = tableName + "_checkBox";
    QCheckBox* checkBox = this->findChild<QCheckBox*>(checkBoxName);
    bool isCheckBoxChecked = checkBox && checkBox->isChecked();

    // Show existing order details if the checkbox is checked
    if (isCheckBoxChecked) {
        QMessageBox::information(this, "Table Status", "Table " + tableName + " is unavailable.");
        return;
    }

    QSqlQuery query;
    query.prepare("SELECT * FROM Orders WHERE TableNumber = :tableNumber AND Status = 'Open'");
    query.bindValue(":tableNumber", tableName);

    if (query.exec() && query.next()) {
        QString orderDetails = query.value("OrderDetails").toString();
        QMessageBox::information(this, "Order for " + tableName, orderDetails);
        return;
    }

    // Create a new order window if the table is available
    if (tableAvailability[tableName]) {
        if (!orderWindows.contains(tableName)) {
            orderWindow = new Order(this);
            orderWindows[tableName] = orderWindow;

            // Update table availability when the order window is closed
            connect(orderWindow, &Order::finished, this, [this, tableName, checkBox]() {
                tableAvailability[tableName] = true;
                if (checkBox) {
                    checkBox->setChecked(false);
                }
                orderWindows.remove(tableName);
            });
        } else {
            // Retrieve the existing order window
            orderWindow = orderWindows[tableName];
        }

        // Show the order window and update the table status
        if (orderWindow) {
            orderWindow->updateListWidget(tableName);
            orderWindow->show();
            tableAvailability[tableName] = false;
            if (checkBox) {
                checkBox->setChecked(true);
            }
        }
    }
}

/**
 * @brief Slot for handling the back button click.
 */
void Table::on_back_pushButton_clicked() {
    // Open the waiter page and close the current window
    Waiter_page *waiterPage = new Waiter_page();
    waiterPage->show();
    this->close();
}
