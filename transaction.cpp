#include "transaction.h"

#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>
#include <QJsonArray>
transaction::transaction()
{

}

transaction::transaction(QString _from, QString _to, int _amount)
{
    this->from = _from;
    this->to = _to;
    this->amount = _amount;
}

transaction::transaction(QString _from, QString _to, int _amount, bool _isWithCard, bool _isReceived)
{
    this->from = _from;
    this->to = _to;
    this->amount = _amount;
    this->isWithCard= _isWithCard;
    this->isReceived = _isReceived;
}

QString transaction::getFrom() const
{
    return from;
}

QString transaction::getTo() const
{
    return to;
}

QString transaction::getAmountAsString()
{
    QString stringamount=QString::number(amount);
    return stringamount;
}

bool transaction::getIsReceived() const
{
    return isReceived;
}

bool transaction::getIsWithCard() const
{
    return isWithCard;
}

QString transaction::getreceivedAsString()
{
    if(isReceived==0)
    {
        return "برداشت شده";
    }
    else
    {
        return "واریز شده";
    }
}

QString transaction::getIsWithCardAsString()
{
    if(isWithCard==1)
    {
        return "کارت";
    }
    else
    {
        return "حساب";
    }
}

int transaction::getAmount() const
{
    return amount;
}

