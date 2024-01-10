#ifndef ADD_WAITER_H
#define ADD_WAITER_H
#include "databaseheader.h"
#include <QDialog>

namespace Ui {
class Add_waiter;
}

class Add_waiter : public QDialog
{
    Q_OBJECT

public:
    explicit Add_waiter(QWidget *parent = nullptr);
    ~Add_waiter();

protected:

    void resizeEvent(QResizeEvent *event) override;


private slots:
    void on_back_pushButton_clicked();

    void on_add_pushButton_clicked();



private:
    Ui::Add_waiter *ui;
};

#endif // ADD_WAITER_H
