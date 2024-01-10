#ifndef REMOVE_WAITER_H
#define REMOVE_WAITER_H

#include "databaseheader.h"
#include <QDialog>

namespace Ui {
class Remove_waiter;
}

class Remove_waiter : public QDialog
{
    Q_OBJECT

public:
    explicit Remove_waiter(QWidget *parent = nullptr);
    ~Remove_waiter();

protected:
    void resizeEvent(QResizeEvent *event) override;


private slots:
    void on_Back_pushButton_clicked();

    void on_Remove_pushButton_clicked();

private:
    Ui::Remove_waiter *ui;
};

#endif // REMOVE_WAITER_H
