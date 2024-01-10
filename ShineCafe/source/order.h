#ifndef ORDER_H
#define ORDER_H

#include "databaseheader.h"
#include<QtSql>
#include<QtDebug>
#include<QFileInfo>
#include <QDialog>
#include <QListWidgetItem>
#include <QMap>
#include <QPushButton>

namespace Ui {
class Order;
}

class Order : public QDialog
{
    Q_OBJECT

public:
    explicit Order(QWidget *parent = nullptr);
    ~Order();
    void updateListWidget(const QString &tableName);
    void saveOrderToDatabase();


protected:
    void resizeEvent(QResizeEvent *event) override;


private slots:
    void on_back_pushButton_clicked();

    void on_increase_pushButton_clicked();

    void on_decrease_pushButton_clicked();

    void on_pushButton_clicked();

    void on_listWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous);

    void on_calculate_pushButton_clicked();

    void on_cashPayment_pushButton_clicked();

    void on_creditCardPayment_pushButton_clicked();

    void on_submitOrder_pushButton_clicked();

private:
    Ui::Order *ui;
    QSqlDatabase myDataBase;
    int selectedButtonIndex;
    QMap<QString, int> clickCounts;

};

#endif // ORDER_H
