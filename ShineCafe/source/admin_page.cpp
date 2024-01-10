#include "admin_page.h"
#include "ui_admin_page.h"
#include "mainwindow.h"
#include <QPixmap>
#include <QMessageBox>
#include <iostream>
#include <string>

/**
 * @file admin_page.cpp
 * @brief Implementation of the Admin_page class.
 */

// Constructor for the Admin_page dialog.
Admin_page::Admin_page(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Admin_page)
{
    ui->setupUi(this);
    // Enable the minimize button on the dialog.
    setWindowFlags(windowFlags() | Qt::WindowMinimizeButtonHint);
    // Set the window title for the dialog.
    setWindowTitle("ADMIN PAGE");
}

// Destructor for the Admin_page dialog.
Admin_page::~Admin_page()
{
    delete ui;
}

/**
 * @brief Event handler for when the dialog is resized.
 * @param event A QResizeEvent representing the resize event.
 */
void Admin_page::resizeEvent(QResizeEvent *event) {
    QDialog::resizeEvent(event);

    // Load and scale the background image to fit the current dialog size.
    QPixmap background("C:/Users/Asus/Documents/ShineCafe/photos/background_resized.jpg");
    background = background.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);

    // Set the scaled background as the window's background.
    QPalette palette;
    palette.setBrush(QPalette::Window, background);
    this->setPalette(palette);
}

// Slot for handling the 'Admin Login' button click.
/**
 * @brief Slot for handling the 'Admin Login' button click event.
 * This function validates the admin credentials and opens the admin management window if they are correct.
 */
void Admin_page::on_Admin_login_pushbutton_clicked()
{
    // Default admin credentials.
    QString default_username = "nurevsan";
    QString default_password = "1234";

    // Retrieve the username and password from the line edits.
    QString username = ui->Admin_username_lineEdit->text();
    QString password = ui->Admin_pass_lineEdit->text();

    // Validate the credentials.
    if(username == default_username && password == default_password)
    {
        // If credentials are correct, hide the current dialog and show the admin management window.
        hide();
        admin_management_open = new Admin_Management(this);
        admin_management_open->show();
    }
    else
    {
        // If credentials are incorrect, show a warning message box.
        QMessageBox::warning(this, "Login", "Incorrect Username or Password. Please Try Again");
    }
}

// Global pointer to the main window.
MainWindow *m5;

// Slot for handling the 'Back' button click.
/**
 * @brief Slot for handling the 'Back' button click event.
 * This function hides the current dialog and shows the main window.
 */
void Admin_page::on_back_pushButton_clicked()
{
    // Hide the current dialog and show the main window.
    hide();
    m5 = new MainWindow(this);
    m5->show();
}
