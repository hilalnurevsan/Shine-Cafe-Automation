#ifndef WAITER_PAGE_H
#define WAITER_PAGE_H

#include "order.h"
#include <QDialog>
#include "databaseheader.h"


namespace Ui {
class Waiter_page;
}

class Waiter_page : public QDialog
{
    Q_OBJECT

public:
    explicit Waiter_page(QWidget *parent = nullptr);
    ~Waiter_page();

protected:
    void resizeEvent(QResizeEvent *event) override;


private slots:
    void on_Waiter_login_pushbutton_clicked();

    void on_back_pushButton_clicked();

private:
    Ui::Waiter_page *ui;
    Order *order_open;
    QSqlDatabase myDatabase;
};

#endif // WAITER_PAGE_H
