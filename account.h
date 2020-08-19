#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "card.h"
#include "transaction.h"
#include <QDate>
#include <QString>
#include <QRandomGenerator>
#include <QDebug>

class account
{
public:
    account();
    account(int _typeOfAccount, int _balance,QVector<QString> _allusers);
    account(int _typeOfAccount, QString _num, QDate _date, int _balance, int _status,  QJsonArray _allUsers);

    //void moneyTransfer(QString fr, QString to, int trans_amount);
    int getBalance();
    QVector<transaction> getTransaction();
    void setCardInfo(card);
    void setStatus(int);
    void setNum();
    void setDate();
    QString getTypeAsString();
    QString getBalanceAsString();
    QString getStatusAsString();
    bool hasCard();
    int getStatus();
    int getType();
    //int transfer(QString _toAccount,int _value,QString _password,QString _cvv2,QString _month,QString _year);
    QVector <transaction> & gettransaction();
    void getCard();
    QString generatePassword();
    //void moneyTransfer(QString to, int trans_amount);
    int getTypeOfAccount() const;
    QString getNum() const;
    QString getDateString() const;
    int transfer(QString to, int trans_amount);
    int getStatus() const;
    QVector<QString> getAllUsers() const;
    card getAccCard() const;
    bool operator<(const account& a2) const;
    void addTransaction(transaction);
    QDate getDate() const;
    card* getaccountcard();
    void block();
    void unblock();
    void deletecard();
    void profitability();
    void updateAllUsers();
    void noCard();
    void setPsswordInAccount(QString);
    card* getCardInfo() const;


private:
    int typeOfAccount;
    QString num;
    QDate date;
    int balance;
    int status;
    QVector<QString> allUsers;
    card *accCard;
    QVector<transaction> transactions;
};

#endif // ACCOUNT_H
