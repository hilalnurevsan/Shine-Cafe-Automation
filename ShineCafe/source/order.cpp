#include "order.h"
#include "ui_order.h"
#include "table.h"
#include <QPushButton>

/**
 * @file order.cpp
 * @brief Implementation of the Order class.
 */

// Constructor for the Order class
Order::Order(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Order)
{
    ui->setupUi(this);

    // Set window properties
    setWindowFlags(windowFlags() | Qt::WindowMinimizeButtonHint);
    setWindowTitle("ORDER ");

    // Initialize and open the database
    myDataBase = QSqlDatabase::addDatabase("QSQLITE");
    myDataBase.setDatabaseName("C:/Users/Asus/Documents/ShineCafe/database/dataBaseMenu.db");

    // Check if the database opens successfully
    if (!myDataBase.open())
    {
        ui->label->setText("Failed to open the database");
    }
    else
    {
        ui->label->setText("Total Bill");
    }

    // Connect all product push buttons to a common slot
    for (int i = 1; i <= 19; ++i)
    {
        QString buttonName = QString("product%1_pushButton").arg(i);
        QPushButton *button = findChild<QPushButton *>(buttonName);
        if (button)
        {
            connect(button, &QPushButton::clicked, this, &Order::on_pushButton_clicked);
            clickCounts[buttonName] = 0;
        }
    }

    // Connect the currentItemChanged signal of the listWidget to a slot
    connect(ui->listWidget, &QListWidget::currentItemChanged, this, &Order::on_listWidget_currentItemChanged);
}

// Destructor for the Order class
Order::~Order()
{
    delete ui;
}

// Event handler for window resize events
void Order::resizeEvent(QResizeEvent *event) {
    QDialog::resizeEvent(event); // Varsayılan işleme

    // Resize and set the background image
    QPixmap background("C:/Users/Asus/Documents/ShineCafe/photos/background_resized.jpg");
    background = background.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);

    QPalette palette;
    palette.setBrush(QPalette::Window, background);
    this->setPalette(palette);
}

// Slot for handling the back button click
void Order::on_back_pushButton_clicked()
{
    this->close();
}

// Slot for handling product push button clicks
void Order::on_pushButton_clicked()
{
    QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());

    if (clickedButton)
    {
        // Determine which button was clicked
        QString buttonName = clickedButton->objectName();
        QRegularExpression regex("product(\\d+)_pushButton");
        QRegularExpressionMatch match = regex.match(buttonName);

        if (match.hasMatch())
        {
            int buttonIndex = match.captured(1).toInt();
            selectedButtonIndex = buttonIndex - 1; // 0'dan başladığı için 1 çıkar

            // Retrieve and add data from the database to the listWidget
            QSqlQuery query;
            query.prepare("SELECT [Food/Drinks], Price FROM Menu LIMIT 1 OFFSET :offset");
            query.bindValue(":offset", selectedButtonIndex);

            if (query.exec() && query.next())
            {
                QString foodDrink = query.value("Food/Drinks").toString();
                QString price = query.value("Price").toString();
                int clickCount = clickCounts[buttonName];

                QListWidgetItem *item = new QListWidgetItem(foodDrink + "\t\t" + price + "\t\tCount: 1");

                // Update the item if it already exists in the list
                int existingRow = -1;
                for (int row = 0; row < ui->listWidget->count(); ++row)
                {
                    QListWidgetItem *existingItem = ui->listWidget->item(row);
                    if (existingItem->text().startsWith(foodDrink))
                    {
                        existingRow = row;
                        break;
                    }
                }

                if (existingRow != -1)
                {

                    QString existingItemText = ui->listWidget->item(existingRow)->text();
                    QRegularExpression countRegex("Count: (\\d+)");
                    QRegularExpressionMatch countMatch = countRegex.match(existingItemText);

                    if (countMatch.hasMatch())
                    {
                        int existingCount = countMatch.captured(1).toInt();
                        existingCount++;
                        existingItemText.replace(countRegex, "Count: " + QString::number(existingCount));
                        ui->listWidget->item(existingRow)->setText(existingItemText);
                    }
                    return;
                }

                ui->listWidget->addItem(item);
            }
        }
    }
}

// Function to save the current order to the database
void Order::saveOrderToDatabase() {

    // Add and set up the database connection
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/Asus/Documents/ShineCafe/database/Orders.db");

    // Open the database and check for successful connection
    if (!db.open()) {
        qDebug() << "Failed to open the database";
        return;
    }

    // Create a SQL query object
    QSqlQuery query;
    for (int row = 0; row < ui->listWidget->count(); ++row) {
        QListWidgetItem *orderItem = ui->listWidget->item(row);
        QString orderText = orderItem->text();

        // Log the order text
        qDebug() << "Order Text:" << orderText;

        // Regular expression to parse the order item text format "ItemName Quantity Price"
        QRegularExpression orderRegex("^(\\S+(?: \\S+)*)\\s+(\\d+)\\s+Count: (\\d+)$");
        QRegularExpressionMatch orderMatch = orderRegex.match(orderText);

        // Check if the regex successfully parsed the item text
        if (orderMatch.hasMatch()) {
            QString itemName = orderMatch.captured(1);
            double price = orderMatch.captured(2).toDouble();
            int quantity = orderMatch.captured(3).toInt();

            // Get the table number associated with the order item
            QListWidgetItem *tableItem = ui->TableNo->item(row);
            QString tableNumber = tableItem ? tableItem->text() : "";

            // Prepare the SQL query for inserting the order into the database
            query.prepare("INSERT INTO Orders (TableNumber, ItemNames, Price, Quantity) "
                          "VALUES (:TableNumber, :ItemName, :Price,:Quantity)");

            // Bind values to the query parameters
            query.bindValue(":TableNumber", tableNumber);
            query.bindValue(":ItemName", itemName);
            query.bindValue(":Quantity", quantity);
            query.bindValue(":Price", price);

            // Execute the query and check for errors
            if (!query.exec()) {
                qDebug() << "Failed to insert order into database:" << query.lastError();
            }
        } else {
            qDebug() << "Order Regex did not match the item text";
        }
    }
}

// Slot for handling increase button clicks
void Order::on_increase_pushButton_clicked()
{
    // Get the currently selected item in the listWidget
    QListWidgetItem *selectedItem = ui->listWidget->currentItem();

    if (selectedItem) {
        // Get the text of the selected item
        QString itemText = selectedItem->text();

        // Use a regular expression to extract the count value from the item text
        QRegularExpression countRegex("Count: (\\d+)");
        QRegularExpressionMatch countMatch = countRegex.match(itemText);

        if (countMatch.hasMatch()) {
            int currentCount = countMatch.captured(1).toInt();

            // Increase the count by 1
            currentCount++;

            // Update the text of the selected item with the new count
            itemText.replace(countRegex, "Count: " + QString::number(currentCount));
            selectedItem->setText(itemText);
        }
    }
}

// Slot for handling decrease button clicks
void Order::on_decrease_pushButton_clicked()
{
    // Get the currently selected item in the listWidget
    QListWidgetItem *selectedItem = ui->listWidget->currentItem();

    if (selectedItem) {
        // Get the text of the selected item
        QString itemText = selectedItem->text();

        // Use a regular expression to extract the count value from the item text
        QRegularExpression countRegex("Count: (\\d+)");
        QRegularExpressionMatch countMatch = countRegex.match(itemText);

        if (countMatch.hasMatch()) {
            int currentCount = countMatch.captured(1).toInt();

            // Decrease the count by 1, but ensure it doesn't go below 0
            currentCount = qMax(0, currentCount - 1);

            // Update the text of the selected item with the new count
            itemText.replace(countRegex, "Count: " + QString::number(currentCount));
            selectedItem->setText(itemText);

            // Clear selection if count reaches 0 and remove the item from the listWidget
            ui->listWidget->clearSelection();
            if (currentCount == 0) {
                int row = ui->listWidget->row(selectedItem);
                delete ui->listWidget->takeItem(row);
            }
        }
    }
}

// Slot for handling changes in the selection of listWidget items
void Order::on_listWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous)
{
    // Actions to perform when the current item in the listWidget changes
    qDebug() << "Current Item Changed:" << current->text();
}

// Function to update the ListWidget with the table name
void Order::updateListWidget(const QString &tableName)
{
    // Add the given table name to the TableNo listWidget
    ui->TableNo->addItem(tableName);
}

// Slot for handling the calculate button click
void Order::on_calculate_pushButton_clicked()
{
    double totalBill = 0.0;

    // Iterate through each item in the listWidget and calculate the total bill
    for (int row = 0; row < ui->listWidget->count(); ++row)
    {
        QListWidgetItem *item = ui->listWidget->item(row);
        QString itemText = item->text();

        // Extract product name and count from the item text using regular expression
        QRegularExpression regex("^(.+)\\t\\t(.+)\\t\\tCount: (\\d+)");
        QRegularExpressionMatch match = regex.match(itemText);

        if (match.hasMatch())
        {
            QString productName = match.captured(1).trimmed();
            int count = match.captured(3).toInt();

            // Get the corresponding Price from the database for the extracted product name
            QSqlQuery query;
            query.prepare("SELECT Price FROM Menu WHERE [Food/Drinks] = :productName");
            query.bindValue(":productName", productName);

            if (query.exec() && query.next())
            {
                double price = query.value("Price").toDouble();

                // Calculate the subtotal for the current item and add to totalBill
                double subtotal = price * count;
                totalBill += subtotal;
            }
        }
    }

    // Display the totalBill in totalBill_listWidget
    ui->totalBill_listWidget->clear();
    ui->totalBill_listWidget->addItem(QString("%1").arg(totalBill));
}

// Slot for handling cash payment button clicks
void Order::on_cashPayment_pushButton_clicked()
{
    // Show a message box for cash payment
    QMessageBox::information(this, "Payment Information", "Payment was made in cash.");

    // Clear the listWidget and other relevant widgets
    ui->listWidget->clear();
    ui->totalBill_listWidget->clear();
    ui->TableNo->clear();
}

// Slot for handling credit card payment button clicks
void Order::on_creditCardPayment_pushButton_clicked()
{
    // Display a message box confirming credit card payment
    QMessageBox::information(this, "Payment Information", "Payment transaction confirmed.");

    // Clear the listWidget and other relevant widgets
    ui->listWidget->clear();
    ui->totalBill_listWidget->clear();
    ui->TableNo->clear();
}

// Slot for handling submit order button clicks
void Order::on_submitOrder_pushButton_clicked()
{
    // Save the current order to the database
    saveOrderToDatabase();
}
