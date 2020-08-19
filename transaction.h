#ifndef TRANSACTION_H
#define TRANSACTION_H
#include <QVector>
#include <QString>

class transaction
{
public:
    transaction();
    transaction(QString _from, QString _to, int _amount);
    transaction(QString _from, QString _to, int _amount, bool _isWithCard, bool _isReceived);
    QString getFrom() const;
    QString getTo() const;
    QString getAmountAsString();
    bool getIsReceived() const;
    bool getIsWithCard() const;
    QString getreceivedAsString();
    QString getIsWithCardAsString();
    int getAmount() const;

private:

    QString from;
    QString to;
    int amount;
    bool isWithCard;
    bool isReceived;
};

#endif // TRANSACTION_H
