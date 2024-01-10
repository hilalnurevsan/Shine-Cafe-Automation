#ifndef ADMIN_MANAGEMENT_H
#define ADMIN_MANAGEMENT_H

#include "add_waiter.h"
#include "remove_waiter.h"
#include"databaseheader.h"
#include <QTableView>
#include <QDialog>

namespace Ui {
class Admin_Management;
}

class Admin_Management : public QDialog
{
    Q_OBJECT

public:
    explicit Admin_Management(QWidget *parent = nullptr);
    ~Admin_Management();

protected:
    void resizeEvent(QResizeEvent *event) override;


private slots:
    void on_Add_pushButton_clicked();

    void on_Remove_pushButton_clicked();

    void on_See_pushButton_clicked();

    void on_Update_pushButton_clicked();

    void on_Admin_management_back_pushButton_clicked();

private:
    Ui::Admin_Management *ui;
    Add_waiter *add_waiter_open;
  //  Menu *update_menu;
    Remove_waiter *remove_waiter;


};

#endif // ADMIN_MANAGEMENT_H
