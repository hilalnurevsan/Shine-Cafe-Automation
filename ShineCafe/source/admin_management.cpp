/**
 * @file admin_management.h
 * @brief Admin_Management class definition.
 *
 * This file contains the definition of the Admin_Management class,
 * which is used to manage the administrative functionalities such as
 * adding, removing, and viewing waiters, as well as updating the menu.
 */

#include "admin_management.h"
#include "ui_admin_management.h"
#include "admin_page.h"
#include <QGraphicsBlurEffect>
#include <QLabel>
#include <QHeaderView>

/**
 * @brief Constructor for the Admin_Management dialog.
 * Initializes the user interface and sets up dialog properties.
 * @param parent The parent widget of the dialog.
 */
Admin_Management::Admin_Management(QWidget *parent)
    : QDialog(parent), ui(new Ui::Admin_Management)
{
    ui->setupUi(this);
    setWindowFlags(windowFlags() | Qt::WindowMinimizeButtonHint);
    setWindowTitle("ADMIN MANAGEMENT");
}

/**
 * @brief Destructor for the Admin_Management dialog.
 * Cleans up the user interface.
 */
Admin_Management::~Admin_Management()
{
    delete ui;
}

/**
 * @brief Handles the resize event for the dialog.
 * Scales the background image to fit the current dialog size.
 * @param event The resize event.
 */
void Admin_Management::resizeEvent(QResizeEvent *event) {
    QDialog::resizeEvent(event);
    QPixmap background("C:/Users/Asus/Documents/ShineCafe/photos/background_resized.jpg");
    background = background.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    QPalette palette;
    palette.setBrush(QPalette::Window, background);
    this->setPalette(palette);
}

/**
 * @brief Slot for handling the 'Add' button click.
 * Opens the Add Waiter dialog.
 */
void Admin_Management::on_Add_pushButton_clicked()
{
    hide();
    add_waiter_open = new Add_waiter(this);
    add_waiter_open->show();
}

/**
 * @brief Slot for handling the 'Remove' button click.
 * Opens the Remove Waiter dialog.
 */
void Admin_Management::on_Remove_pushButton_clicked()
{
    hide();
    remove_waiter = new Remove_waiter(this);
    remove_waiter->show();
}

/**
 * @brief Slot for handling the 'See' button click.
 * Displays the list of waiters from the database.
 */
void Admin_Management::on_See_pushButton_clicked()
{
    // Database and TableView setup for displaying waiter list.
}

/**
 * @brief Slot for handling the 'Update' button click.
 * Allows editing of the menu from the database.
 */
void Admin_Management::on_Update_pushButton_clicked()
{
    // Database and TableView setup for menu editing.
}

/**
 * @brief Slot for handling the 'Back' button click.
 * Returns to the admin page.
 */
void Admin_Management::on_Admin_management_back_pushButton_clicked()
{
    Admin_page *adminPage = new Admin_page();
    adminPage->show();
    this->close();
}
