#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "waiter_page.h"
#include "admin_page.h"
#include "admin_management.h"
#include "remove_waiter.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Admin_PushButton_clicked();

    void on_Waiter_PushButton_clicked();

protected:

    void resizeEvent(QResizeEvent *event) override;

private:
    Ui::MainWindow *ui;
    QPixmap roundedPixmap(const QPixmap &source, int radius);
    Admin_page *admin_page;
    Waiter_page *waiter_page;

};
#endif // MAINWINDOW_H
