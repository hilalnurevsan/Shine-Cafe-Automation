#ifndef PEOPLE_H
#define PEOPLE_H
#include<QString>
#include<QHash>


class People
{
protected:
    QString name;

public:
    People();
    People(int x,QString y, float z);
    void setName(QString y);
    QString getName();
    virtual QHash<QString,QString> display()=0;

};

#endif // PEOPLE_H
