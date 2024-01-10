#ifndef ADMIN_INFORMATION_H
#define ADMIN_INFORMATION_H

#include "people.h"
#include<QString>


class Admin_information : public People
{
private:
    QString password;
public:
    Admin_information();
    Admin_information(int x, QString y, float z, QString s);
    void setPassword(QString s);
    QString getPassword();
};

#endif // ADMIN_INFORMATION_H




