#ifndef CARD_H
#define CARD_H

#include <QDate>
#include <QString>

class card
{
public:
    card();
    card(QString _number, QString _password, QString _cvv2, QDate _date, int _status);
    //void passwordCreator();
    QString generatePassword();
    QString getNumber() const;
    QString getPassword() const;
    QString getCvv2() const;
    QDate getDate() const;
    void setStatus(int);
    int getStatus() const;
    QString getDateString() const;
    QString getStatusAsString();
    void block();
    void unblock();
    void setPassword(QString);
    QString getMonth() const;
    QString getYear() const;
private:
    int status;
    QString password;
    QString cvv2;
    QString number;
    QDate date;
};

#endif // CARD_H
