#ifndef TABLE_H
#define TABLE_H

#include <QDialog>
#include<QMap>
#include "order.h"
#include "databaseheader.h"

namespace Ui {
class Table;
}

class Table : public QDialog
{
    Q_OBJECT

public:
    explicit Table(QWidget *parent = nullptr);
    ~Table();

protected:
    void resizeEvent(QResizeEvent *event) override;


private slots:
    void on_back_pushButton_clicked();

private:
    Ui::Table *ui;
    QMap<QString, bool> tableAvailability;
    QMap<QString, Order*> orderWindows;

    void openOrderWindow(const QString &tableName);
};

#endif // TABLE_H
