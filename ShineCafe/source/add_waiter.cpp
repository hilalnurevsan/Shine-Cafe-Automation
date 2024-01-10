#include "add_waiter.h"
#include "ui_add_waiter.h"
#include "admin_management.h"

/**
 * @brief Constructor for the Add_waiter dialog, setting up the user interface.
 * @param parent The parent widget of the dialog.
 */
Add_waiter::Add_waiter(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Add_waiter)
{
    ui->setupUi(this);
    // Enable the minimize button on the dialog.
    setWindowFlags(windowFlags() | Qt::WindowMinimizeButtonHint);
    // Set the window title for the dialog.
    setWindowTitle("ADD WAITER");
}

/**
 * @brief Destructor for the Add_waiter dialog.
 */
Add_waiter::~Add_waiter()
{
    delete ui;
}

/**
 * @brief Event handler for when the dialog is resized.
 * @param event The resize event.
 */
void Add_waiter::resizeEvent(QResizeEvent *event) {
    QDialog::resizeEvent(event);

    // Load and scale the background image to fit the current dialog size.
    QPixmap background("C:/Users/Asus/Documents/ShineCafe/photos/background_resized.jpg");
    background = background.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);

    // Apply the background to the dialog's palette.
    QPalette palette;
    palette.setBrush(QPalette::Window, background);
    this->setPalette(palette);
}

/**
 * @brief Slot for handling the 'Back' button click event.
 */
void Add_waiter::on_back_pushButton_clicked()
{
    // Create and show the admin management window and close the current dialog.
    Admin_Management *adminManagement = new Admin_Management();
    adminManagement->show();
    this->close();
}

/**
 * @brief Slot for handling the 'Add' button click event.
 */
void Add_waiter::on_add_pushButton_clicked()
{
    // Retrieve the input details from the user interface.
    QString name = ui->add_waiter_name_lineEdit->text();
    QString surname = ui->add_waiter_surname_lineEdit->text();
    QString username = ui->add_waiter_username_lineEdit->text();
    QString password = ui->add_waiter_pass_lineEdit->text();

    // Log the details to the debug console.
    qDebug() << " Name : "<< name <<"Surname : " << surname <<"Username : " << username <<"Password : " << password ;

    // Set up the database connection.
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
        qDebug() << "Error: Unable to open the database";
        return;
    }
    else{
        qDebug() <<"Database opened successfully";
    }

    // Prepare and execute the SQL query to insert a new waiter.
    QSqlQuery query;
    query = QSqlQuery(database);

    query.prepare("Insert into Waiter (Name, Surname, Username, Password) values ('" + name +"','" + surname + "','" + username + "','"  + password +"') ");
    query.exec();

    // Log any errors that occurred during the execution of the query.
    qDebug() << "last error : "<<query.lastError().text();

    // Close the database connection.
    database.close();

    // Display a message box to the user indicating that the waiter has been added.
    QMessageBox::information(this, "info", "Waiter added.");

    // Clear the input fields.
    ui->add_waiter_name_lineEdit->clear();
    ui->add_waiter_surname_lineEdit->clear();
    ui->add_waiter_username_lineEdit->clear();
    ui->add_waiter_pass_lineEdit->clear();
}
