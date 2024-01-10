#include "remove_waiter.h"
#include "ui_remove_waiter.h"
#include "admin_management.h"
#include <QMessageBox>

/**
 * @file remove_waiter.cpp
 * @brief Implementation of the Remove_waiter class.
 */

// Constructor for Remove_waiter dialog, setting up the UI components.
Remove_waiter::Remove_waiter(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Remove_waiter)
{
    ui->setupUi(this);
    // Enable the minimize button on the dialog.
    setWindowFlags(windowFlags() | Qt::WindowMinimizeButtonHint);
    // Set the window title for the dialog.
    setWindowTitle("REMOVE WAITER");
}

// Destructor for Remove_waiter dialog.
Remove_waiter::~Remove_waiter()
{
    delete ui;
}

// Event handler for when the dialog is resized.
void Remove_waiter::resizeEvent(QResizeEvent *event) {
    QDialog::resizeEvent(event);

    // Load and scale the background image to fit the current dialog size.
    QPixmap background("C:/Users/Asus/Documents/ShineCafe/photos/background_resized.jpg");
    background = background.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);

    // Set the scaled background as the window's background.
    QPalette palette;
    palette.setBrush(QPalette::Window, background);
    this->setPalette(palette);
}

// Slot for handling the 'Back' button click - returns to the admin management page.
void Remove_waiter::on_Back_pushButton_clicked()
{
    // Instantiate and show the admin management window, then close the current dialog.
    Admin_Management *adminManagement = new Admin_Management();
    adminManagement->show();
    this->close();
}

// Slot for handling the 'Remove' button click - attempts to remove a waiter from the database.
void Remove_waiter::on_Remove_pushButton_clicked()
{
    // Retrieve the name and surname from the input fields.
    QString name = ui->Name_lineEdit->text();
    QString surname = ui->Surname_lineEdit->text();

    // Output the name and surname to the debug console.
    qDebug() << " Name : "<< name <<"Surname : " << surname;
    // Configure the database connection.
    QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("C:/Users/Asus/Documents/ShineCafe/database/ShineCafe.db");

    // Check if the database file exists.
    if(QFile::exists("C:/Users/Asus/Documents/ShineCafe/database/ShineCafe.db"))
    {
        qDebug() << "Database file exists";
    }
    else{
        qDebug() << "Database file doesn't exist";
        return;
    }

    // Attempt to open the database.
    if(!database.open())
    {
        qDebug() << "Error: Unable to open database";
        return;
    }
    else{
        qDebug() << "Database opened successfully";
    }

    // Prepare and execute the SQL delete query.
    QSqlQuery query;
    query = QSqlQuery(database);
    query.prepare("Delete from Waiter where name='" + name + "'");
    if(query.exec()){
        // If the query is successful, show a message box indicating the waiter was deleted.
        QMessageBox::critical(this, tr("Delete"), tr("Deleted"));
        database.close();
    }
    else{
        // If there's an error, show a message box with the error details.
        QMessageBox::critical(this, tr("Error"), query.lastError().text());
    }

    // Close the database connection.
    database.close();

    // Clear the input fields.
    ui->Name_lineEdit->clear();
    ui->Surname_lineEdit->clear();
}
