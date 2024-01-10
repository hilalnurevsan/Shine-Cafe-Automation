#ifndef WAITER_INFORMATION_H
#define WAITER_INFORMATION_H

#include "people.h"
#include<QString>


class Waiter_information : public People
{
private:
    QString password;
public:
    Waiter_information();
    Waiter_information(int x, QString y, float z, QString s);
    void setPassword(QString s);
    QString getPassword();
};

#endif // WAITER_INFORMATION_H




