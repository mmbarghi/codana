#ifndef ADMIN_H
#define ADMIN_H

#include "person.h"
#include"user.h"
#include"account.h"
#include<QVector>
class admin: public person
{
public:
    admin();
    admin(QString _name, QString _lastName, QString _id, QString _username, QString _password, QString _email, QDate _birthDate): person(_name, _lastName, _id, _username, _password, _email, _birthDate){};

    QMultiMap<user,account>& getdeactiveAccounts();
    QMap<account, card>& getdeactiveCards();
    void addDeactiveAccount(user, account&);
    void addDeactiveCard(account, card&);

private:
    QMultiMap<user, account> deactiveAccounts;
    QMap<account, card> deactiveCards;
};

#endif // ADMIN_H
