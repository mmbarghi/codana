#include "card.h"
#include <QDate>
#include <QString>
#include <QRandomGenerator>
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QDebug>

card::card()
{
    QString _number;
    QString _password;
    QString _cvv2;
    QDate _date;
    std::uniform_int_distribution<qlonglong> CardDistribution(100000000000, 999999999999);
    qlonglong value = CardDistribution(*QRandomGenerator::global());
    QString s = QString::number(value);
    _number.append(s);
    this->number=_number;
    _password=getPassword();
    this->password=_password;
    std::uniform_int_distribution<int> CVV2Distribution(1000, 9999);
    int cval = CVV2Distribution(*QRandomGenerator::global());
    _cvv2 = QString::number(cval);
    this->cvv2=_cvv2;
    _date = QDate::currentDate().addYears(1);
    this->date=_date;
    this->status = 0;
}

card::card(QString _number, QString _password, QString _cvv2, QDate _date, int _status)
{
    this->number = _number;
    this->password = _password;
    this->cvv2 = _cvv2;
    this->date = _date;
    this->status = _status;
}

/*void card::passwordCreator()
{
    std::uniform_int_distribution<int> PassDistribution(100000, 999999);
    int pasval = PassDistribution(*QRandomGenerator::global());
    QString _password = QString::number(pasval);
    this->password=_password;
}
*/

QString card::generatePassword()
{
    std::uniform_int_distribution<int> PassDistribution(100000, 999999);
    int pasval = PassDistribution(*QRandomGenerator::global());
    QString _password = QString::number(pasval);
    this->password=_password;
    return password;
}

QString card::getNumber() const
{
    return number;
}

QString card::getPassword() const
{
    return password;
}

QString card::getCvv2() const
{
    return cvv2;
}

QDate card::getDate() const
{
    return date;
}

int card::getStatus() const
{
    return status;
}

QString card::getDateString() const
{
    return date.toString("yyyy-MM-dd");
}

QString card::getStatusAsString()
{
    if(status==0)
    {
        return "تایید نشده";
    }
    else if(status==1)
    {
        return "تایید شده";
    }
    else if(status==2)
    {
        return "مسدود شده";
    }
    else
    {
        return "";
    }
}

void card::block()
{
    status=2;
}

void card::unblock()
{
    qDebug()<<"lllll";
    status=1;
}

void card::setPassword(QString new_password)
{
    this->password = new_password;
}

QString card::getMonth() const
{
    QString monthNum = QString::number(date.month());
    return monthNum;
}

QString card::getYear() const
{
    QString yearNum = QString::number(date.year());
    return yearNum;
}

