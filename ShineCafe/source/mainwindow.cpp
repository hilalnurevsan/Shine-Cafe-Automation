#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QPalette>
#include <QBrush>
#include <QPainter>
#include <QPainterPath>

/**
 * @file mainwindow.cpp
 * @brief Implementation of the MainWindow class.
 */

// Constructor for the MainWindow class.
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Set the window title for the main window.
    setWindowTitle("SHINE CAFE");

    // Load the waiter and admin images.
    QPixmap waiterPixmap("C:/Users/Asus/Documents/ShineCafe/photos/waiter.png");
    QPixmap adminPixmap("C:/Users/Asus/Documents/ShineCafe/photos/admin.png");

    // Define the corner radius for rounded images.
    int cornerRadius = 50;

    // Create rounded versions of the waiter and admin images.
    QPixmap roundedWaiterPixmap = roundedPixmap(waiterPixmap, cornerRadius);
    QPixmap roundedAdminPixmap = roundedPixmap(adminPixmap, cornerRadius);

    // Get the dimensions of the labels.
    int w = ui->photo1_label->width();
    int h = ui->photo1_label->height();

    int w1 = ui->photo2_label->width();
    int h1 = ui->photo2_label->height();

    // Set the rounded images on labels with smooth scaling.
    ui->photo1_label->setPixmap(roundedWaiterPixmap.scaled(w, h, Qt::KeepAspectRatio, Qt::SmoothTransformation));
    ui->photo2_label->setPixmap(roundedAdminPixmap.scaled(w1, h1, Qt::KeepAspectRatio, Qt::SmoothTransformation));
}

// Function to create a rounded version of the given pixmap.
/**
 * @brief Creates a rounded version of the given pixmap with a specified radius.
 * @param source The source QPixmap to be rounded.
 * @param radius The corner radius for rounding.
 * @return A rounded QPixmap.
 */
QPixmap MainWindow::roundedPixmap(const QPixmap &source, int radius) {
    QPixmap rounded(source.size());
    // Set transparent background.
    rounded.fill(Qt::transparent);

    QPainter painter(&rounded);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setRenderHint(QPainter::SmoothPixmapTransform);

    QPainterPath path;
    // Create a rounded rectangle path.
    path.addRoundedRect(0, 0, source.width(), source.height(), radius, radius);

    // Clip the painter to the rounded rectangle shape.
    painter.setClipPath(path);
    // Draw the source image within the path.
    painter.drawPixmap(0, 0, source);

    return rounded;
}

// Event handler for window resize event.
/**
 * @brief Event handler for window resize event.
 * Scales the background image to fit the current window size.
 * @param event A QResizeEvent representing the resize event.
 */
void MainWindow::resizeEvent(QResizeEvent *event) {
    QMainWindow::resizeEvent(event);

    // Scale the background image to fit the current window size.
    QPixmap background("C:/Users/Asus/Documents/ShineCafe/photos/background_resized.jpg");
    background = background.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);

    // Set the scaled background as the window's background.
    QPalette palette;
    palette.setBrush(QPalette::Window, background);
    this->setPalette(palette);
}

// Destructor for the MainWindow class.
MainWindow::~MainWindow()
{
    delete ui;
}

// Slot for handling the 'Admin' button click.
/**
 * @brief Slot for handling the 'Admin' button click event.
 * Hides the current window and shows the admin page.
 */
void MainWindow::on_Admin_PushButton_clicked()
{
    // Hide the current window and show the admin page.
    hide();
    admin_page = new Admin_page(this);
    admin_page->show();
}

// Slot for handling the 'Waiter' button click.
/**
 * @brief Slot for handling the 'Waiter' button click event.
 * Hides the current window and shows the waiter page.
 */
void MainWindow::on_Waiter_PushButton_clicked()
{
    // Hide the current window and show the waiter page.
    hide();
    waiter_page = new Waiter_page(this);
    waiter_page->show();
}
