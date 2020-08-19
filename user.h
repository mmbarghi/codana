#ifndef USER_H
#define USER_H

#include <iostream>
#include "person.h"
#include <QVector>
#include"account.h"
#include <QJsonArray>
class user: public person
{
    QVector<account> accounts;
public:
    user();
    user(QString _name, QString _lastName, QString _id, QString _username, QString _password, QString _email, QDate _birthDate): person(_name, _lastName, _id, _username, _password, _email, _birthDate){};
    QVector<account>& getaccounts();
    void addAccount(account&);
    QVector<account>& getAccounts();
    bool operator<(const user& u2) const;
    account* getAccountPointerByAccountNumber(QString _accountnum);
    account* getAccountPointerByI(int _i);
};
#endif // USER_H
