/**
 * @file waiter_page.cpp
 * @brief Implementation file for the Waiter_page class.
 */

#include "waiter_page.h"
#include "ui_waiter_page.h"
#include "mainwindow.h"
#include "table.h"
#include <QPixmap>
#include <QMessageBox>

/**
 * @brief Constructor for the Waiter_page dialog, initializing UI components.
 * @param parent The parent widget.
 */
Waiter_page::Waiter_page(QWidget *parent) : QDialog(parent), ui(new Ui::Waiter_page) {
    ui->setupUi(this);
    // Add minimize button to the dialog.
    setWindowFlags(windowFlags() | Qt::WindowMinimizeButtonHint);
    // Set the window title for the dialog.
    setWindowTitle("WAITER");
}

/**
 * @brief Event handler for when the dialog is resized.
 * @param event The resize event.
 */
void Waiter_page::resizeEvent(QResizeEvent *event) {
    QDialog::resizeEvent(event);

    // Load and scale the background image to fit the current dialog size.
    QPixmap background("C:/Users/Asus/Documents/ShineCafe/photos/background_resized.jpg");
    background = background.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);

    // Set the scaled background as the window's background.
    QPalette palette;
    palette.setBrush(QPalette::Window, background);
    this->setPalette(palette);
}

/**
 * @brief Destructor for the Waiter_page dialog.
 */
Waiter_page::~Waiter_page() {
    delete ui;
}

/**
 * @brief Slot for handling the 'Waiter Login' button click.
 */
void Waiter_page::on_Waiter_login_pushbutton_clicked() {
    // Retrieve the username and password from the line edits.
    QString Username = ui->Waiter_username_lineEdit->text();
    QString Password = ui->Waiter_pass_lineEdit->text();

    // Set up the database connection.
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/Asus/Documents/ShineCafe/database/ShineCafe.db");

    // Attempt to open the database.
    if (!db.open()) {
        qDebug() << "Database cannot open!";
        return;
    }

    // Prepare the SQL query with bound values for login credentials.
    QSqlQuery query;
    query.prepare("SELECT * FROM Waiter WHERE Username = :Username AND Password = :Password");
    query.bindValue(":Username", Username);
    query.bindValue(":Password", Password);

    // Execute the query and check for successful login.
    if (query.exec()) {
        if (query.next()) {
            qDebug() << "Login successful!";

            // If login is successful, display the table view and hide the login dialog.
            Table *table = new Table(this);
            table->show();
            this->hide();
        } else {
            // If the credentials are incorrect, display an error message.
            qDebug() << "Login failed: Invalid username or password";
            QMessageBox::warning(this, "Error", "Invalid username or password. Please try again.");
        }
    } else {
        // If the query fails, log the error.
        qDebug() << "Database query failed: " << query.lastError().text();
    }
    // Close the database connection.
    db.close();
}

// Global pointer to the MainWindow.
MainWindow *m3;

/**
 * @brief Slot for handling the 'Back' button click.
 */
void Waiter_page::on_back_pushButton_clicked() {
    // Hide the current dialog and display the main window.
    hide();
    m3 = new MainWindow(this);
    m3->show();
}
