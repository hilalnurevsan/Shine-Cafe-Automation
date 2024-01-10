#ifndef ADMIN_PAGE_H
#define ADMIN_PAGE_H

#include"admin_management.h"
#include <QDialog>

namespace Ui {
class Admin_page;
}

class Admin_page : public QDialog
{
    Q_OBJECT

public:
    explicit Admin_page(QWidget *parent = nullptr);
    ~Admin_page();

protected:
    void resizeEvent(QResizeEvent *event) override;


private slots:
    void on_Admin_login_pushbutton_clicked();

    void on_back_pushButton_clicked();

private:
    Ui::Admin_page *ui;
    Admin_Management *admin_management_open;

};

#endif // ADMIN_PAGE_H
