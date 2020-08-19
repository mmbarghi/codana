#include "user.h"

user::user()
{
    
}

QVector<account> &user::getaccounts()
{
    return accounts;
    
}

void user::addAccount(account& _account)
{
    accounts.push_back(_account);
}

QVector<account>& user::getAccounts()
{
    return accounts;
}

bool user::operator<(const user &u2) const
{
    return this->getId() < u2.getId();
}

account *user::getAccountPointerByAccountNumber(QString _accountnum)
{
    for(int c=0;c<accounts.size();c++)
    {
        if(accounts[c].getNum()==_accountnum)
        {
            return &accounts[c];
        }
    }
}

account *user::getAccountPointerByI(int _i)
{
    return &accounts[_i];
}

