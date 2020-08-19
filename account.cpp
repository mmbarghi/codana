#include "account.h"
#include "saving.h"
#include "card.h"
#include "transaction.h"
#include"datas.h"
#include <ostream>
#include <QDate>
#include <QString>
#include <QRandomGenerator>
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>

account::account()
{

}

account::account(int _typeOfAccount, QString _num, QDate _date, int _balance, int _status, QJsonArray _allUsres)
{
    this->balance = _balance;
    this->num = _num;
    this->typeOfAccount = _typeOfAccount;
    this->date = _date;
    this->status = _status;
    this->accCard=nullptr;
    for(int i = 0; i < _allUsres.size(); i++)
        this->allUsers.push_back(_allUsres[i].toString());
}
/*
account::account(int _typeOfAccount,int _balance)
{
    this->typeOfAccount = _typeOfAccount;
    this->balance = _balance;
    status=0;
    setDate();
    setNum();
}

void account::moneyTransfer(QString fr, QString to, int trans_amount)
{
    //TO DO: check existance of "fr" and "to" and also check balance of fr to reduce money from in files
    // TO DO: note that if typOfAccount = 3(longTerm) update typOfAccount to 1(shortTermPersonal)
    this->balance = balance - trans_amount;
    transaction temp(fr,to,trans_amount);
    transactions.append(temp);
    //TO DO: write transcation to file
    accCard=nullptr;
}*/

int account::transfer(QString to, int trans_amount)
{
    for (int i = 0; i < datas::getUsers().size(); i++)
    {
        for(int j = 0; j < datas::getUsers()[i].getAccounts().size(); j++)
        {
            if(datas::getUsers()[i].getAccounts()[j].getNum() == to && datas::getUsers()[i].getAccounts()[j].getBalance() < trans_amount)
            {
                //QMessageBox msgBox_balance;
                //msgBox_balance.setText("موجودی کافی نیست");
                //msgBox_balance.setInformativeText("لطفا حساب خود را شارژ نمایید، سپس مجددا تلاش کنید")
                //msgBox_balance.exec();
                return 0;
            }
            if(datas::getUsers()[i].getAccounts()[j].getNum() == to && datas::getUsers()[i].getAccounts()[j].getBalance() >= trans_amount)
            {
                this->balance = getBalance() - trans_amount;
                datas::getUsers()[i].getAccounts()[j].balance = datas::getUsers()[i].getAccounts()[j].getBalance() + trans_amount;
                if(this->typeOfAccount == 3)
                {
                    this->typeOfAccount = 1;
                }
                this->addTransaction(transaction(this->getNum(), to, trans_amount, 0, 0));
                datas::getUsers()[i].getAccounts()[j].addTransaction(transaction(this->getNum(), to, trans_amount, 0, 1));
                if(this->typeOfAccount==2)
                {
                      this->updateAllUsers();
                }
                if(datas::getUsers()[i].getAccounts()[j].getType()==2)
                {
                     datas::getUsers()[i].getAccounts()[j].updateAllUsers();
                }

                //QMessageBox msgBox_transaction;
                //msgBox_transaction.setText("تراکنش با موفقیت انجام شد");
                //msgBox_transaction.exec();
                //SENDING EMAIL!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
                return 1;
            }
        }
    }
    return 2;
}

int account::getBalance()
{
    return balance;
}
/*
QVector<transaction> account::getTransaction()
{
    //TO DO: read from file: read last 10 transactions
    QVector<transaction>::iterator ptr;
    for (ptr = transactions.begin(); ptr < transactions.end(); ptr++)
    {
        //TO DO: print last 10 transactions
    }
    return transactions; //////not complit
}
*/

void account::setStatus(int _status)
{
    this->status = _status;
    if(this->typeOfAccount==2)
    {
          this->updateAllUsers();
    }
}

void account::setNum()
{
    std::uniform_int_distribution<qlonglong> AccNumDistribution(10000000000000, 99999999999999);
    qlonglong value = AccNumDistribution(*QRandomGenerator::global());
    QString _num = QString::number(value);
    this->num=_num;

}

void account::setDate()
{
    QDate _date = QDate::currentDate();
    this->date=_date;

}

QString account::getTypeAsString()
{
    if(typeOfAccount==0)
    {
        return "حساب سپرده قرض الحسنه پس انداز";
    }
    else if(typeOfAccount==1)
    {
        return "حساب سپرده سرمایه گذاری کوتاه مدت";

    }
    else if(typeOfAccount==2)
    {
        return "حساب سپرده سرمایه گذاری حقوقی";

    }
    else if(typeOfAccount == 3)
    {
        return "حساب سپرده گذاری بلند مدت";

    }
    else
        return "";
}

QString account::getBalanceAsString()
{
    QString stringBalance = QString::number(balance);
    return stringBalance;
}

QString account::getStatusAsString()
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

bool account::hasCard()
{
    if(accCard==nullptr)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int account::getStatus()
{
    return status;
}

int account::getType()
{
    return typeOfAccount;
}
/*
int account::transfer(QString _toAccount, int _value, QString _password, QString _cvv2, QString _month, QString _year)
{
    return 0;
}
*/
QVector<transaction> &account::gettransaction()
{
    return transactions;
}

void account::getCard()
{
    this->setCardInfo(card());
    if(this->typeOfAccount==2)
    {
          this->updateAllUsers();
    }
}

QString account::generatePassword()
{
    std::uniform_int_distribution<int> PassDistribution(100000, 999999);
    int pasval = PassDistribution(*QRandomGenerator::global());
    QString _password = QString::number(pasval);
    setPsswordInAccount(_password);
    if(this->typeOfAccount==2)
    {
          this->updateAllUsers();
    }
    datas::writeToFile();
    return _password;
}

void account::setPsswordInAccount(QString new_generated_password)
{
    this->accCard->setPassword(new_generated_password);
    if(this->typeOfAccount==2)
    {
          this->updateAllUsers();
    }
}

/*QString account::generatePassword()
{
    return "125689";
}*/






account::account(int _typeOfAccount, int _balance,QVector<QString> _allusers)
{
    this->typeOfAccount = _typeOfAccount;
    this->balance = _balance;
    setDate();
    setNum();
    status=0;
    allUsers=_allusers;
    accCard=nullptr;
}
/*
void account::moneyTransfer(QString to, int trans_amount)
{
    //TO DO: check existance of "fr" and "to" and also check balance of fr to reduce money from in files
    // TO DO: note that if typOfAccount = 3(longTerm) update typOfAccount to 1(shortTermPersonal)
    //this->balance = balance - trans_amount;
    //transaction temp(fr, to, trans_amount, withCard, receive);
    //transactions.append(temp);
    //TO DO: write transcation to file

}
*/
int account::getTypeOfAccount() const
{
    return typeOfAccount;
}

QString account::getNum() const
{
    return num;
}

QString account::getDateString() const
{
    return date.toString("yyyy-MM-dd");
}


int account::getStatus() const
{
    return status;
}

QVector<QString> account::getAllUsers() const
{
    return allUsers;
}

card account::getAccCard() const
{
    return *(accCard);
}

QVector<transaction> account::getTransaction()
{
    return transactions;
}

bool account::operator<(const account &a2) const
{
    return this->num < a2.num;
}

void account::setCardInfo(card _card)
{
    this->accCard = new card(_card.getNumber(), _card.getPassword(), _card.getCvv2(), _card.getDate(), _card.getStatus());
    if(this->typeOfAccount==2)
    {
          this->updateAllUsers();
    }
}

void account::addTransaction(transaction _transaction)
{
    this->transactions.push_back(_transaction);
    if(this->typeOfAccount==2)
    {
          this->updateAllUsers();
    }
}
QDate account::getDate() const
{
    return date;
}

card *account::getaccountcard()
{
    return accCard;
}

void account::block()
{
    status=2;
    if(this->typeOfAccount==2)
    {
          this->updateAllUsers();
    }
}

void account::unblock()
{
    status=1;
    if(this->typeOfAccount==2)
    {
          this->updateAllUsers();
    }
}

/*void account::profitability()
{
    if(this->typeOfAccount == 1)
    {
        //QDate dlast = getLastLog();
        QDate d1 = getDate();
        QDate d2 = QDate::currentDate();
        int duration = d1.daysTo(d2);
        int dur_last = dlast.daysTo(d2);
        int md = dur_last / 30;
        if(duration == 30)
        {
            int profit = balance * (0.05);
            this->balance = balance + profit;
        }
        else if(duration > 30)
        {
            //int profit = balance * (1.05  pwd(md));
            this->balance = balance + profit;
        }
    }
    if(this->typeOfAccount == 3)
    {
        QDate dlast = getLastLog();
        QDate d1 = getDate();
        QDate d2 = QDate::currentDate();
        int duration = d1.daysTo(d2);
        int dur_last = dlast.daysTo(d2);
        int md = dur_last / 90;
        if(duration == 90)
        {
            int profit = balance * (0.15);
            this->balance = balance + profit;
        }
        else if(duration > 90)
        {
            int profit = balance * (0.15 * md);
            this->balance = balance + profit;
        }
    }
}
*/
void account::deletecard()
{
    delete accCard;
    accCard=nullptr;
    if(this->typeOfAccount==2)
    {
          this->updateAllUsers();
    }
}
void account::profitability()
{
    if(this->typeOfAccount == 1)
        {
            //QDate d1 = getDate();
            QDate d1 = QDate::currentDate();
            QDate& d2 = datas::getLastUse();
            int duration = d2.daysTo(d1);
            int md = duration / 30;
            //int duration = d2.daysTo(d3);
            if(duration >= 30)
            {
                this->balance = balance * (pow(1.05,md));
            }
            else if(duration < 30)
            {
                return;
            }
        }
        if(this->typeOfAccount == 3)
        {
            //QDate d1 = getDate();
            QDate d1 = QDate::currentDate();
            QDate d2 = datas::getLastUse();
            qDebug()<< d2;
            int duration = d2.daysTo(d1);
            int md = duration / 90;
            //int duration = d2.daysTo(d3);
            if(duration >= 90)
            {
                this->balance = balance * (pow(1.15,md));
            }
            else if(duration < 90)
            {
                return;
            }
        }
        if(this->typeOfAccount==2)
        {
              this->updateAllUsers();
        }
}

void account::updateAllUsers()
{
    for (int i = 0; i < datas::getUsers().size(); i++)
    {
        for(int j = 0; j < datas::getUsers()[i].getUsername().size(); j++)
        {
            if(this->allUsers[j] == datas::getUsers()[i].getUsername())
            {
                user& tmpuser=datas::getUsers()[i];
               for(int u=0;u<tmpuser.getaccounts().size();u++)
               {
                   if(this->num == tmpuser.getaccounts()[u].getNum())
                   {
                       account& ref=datas::getAccountRefByUandI(i,u);
                       ref=*this;
                   }
               }

            }
        }
    }
}

void account::noCard()
{
    this->accCard = nullptr;
    if(this->typeOfAccount==2)
    {
          this->updateAllUsers();
    }
}

card *account::getCardInfo() const
{
    return accCard;
}
