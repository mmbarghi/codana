#include "datas.h"
#include"adminmenu.h"
#include"usermenu.h"
QVector<user> datas::users;
admin datas::manager;
int datas::usernum;
QDate datas::lastUse;

datas::datas()
{

}

void datas::getReady()
{
    //Get the Date of Last Use of the Program
    char xor_key = 'T';
    QFile f1("../bank/lastUse.json");
    f1.open(QIODevice::ReadOnly);
    if(f1.size() == 0) {
        f1.close();
        QJsonObject json1;
        json1["lastUse"] = QDate::currentDate().toString("yyyy-MM-dd");
        QJsonDocument d1(json1);
        QByteArray b1 = d1.toJson();
        for(int i = 0; i < b1.size(); i++)
            b1[i] = b1[i] ^ xor_key;
        QFile f1("../bank/lastUse.json");
        f1.open(QIODevice::WriteOnly);
        f1.write(b1);
        f1.close();
    }

    QFile f2("../bank/lastUse.json");
    f2.open(QIODevice::ReadOnly);
    QByteArray b1 = f2.readAll();
    for(int i = 0; i < b1.size(); i++)
        b1[i] = b1[i] ^ xor_key;
    QJsonDocument d1 = QJsonDocument::fromJson(b1);
    QJsonObject o1 = d1.object();
    QString _lastUseS = o1["lastUse"].toString();
    QDate _lastUse = QDate::fromString(_lastUseS, "yyyy-MM-dd");
    lastUse = _lastUse;
    f2.close();
    manager = admin("ادمین سامانه", "admin", "5120046785", "admin", "admin", "admin@gmail.com", QDate(1990, 1, 1));
    QFile f("../bank/data.json");
        f.open(QIODevice::ReadOnly);
        if(f.size() == 0) {
            f.close();
            return;
        }
        QByteArray b = f.readAll();
        //Decrypt Data
//        for(int i = 0; i < b.size(); i++)
//            b[i] = b[i] ^ xor_key;
        QJsonDocument d = QJsonDocument::fromJson(b);
        QJsonObject o = d.object();
        foreach(const QString& key, o.keys()) {
            //userInfo
            QJsonValue value = o.value(key);
            QJsonObject u = value.toObject()["user"].toObject();
            QString _name = u["name"].toString();
            QString _lastName = u["lastName"].toString();
            QString _ID = u["ID"].toString();
            QString _username = u["username"].toString();
            QString _password = u["password"].toString();
            QString _email = u["email"].toString();
            QString _birthDateS = u["birthDate"].toString();
            QDate _birthDate = QDate::fromString(_birthDateS,"yyyy-MM-dd");
            QJsonArray _logs = u["logs"].toArray();
            user temp(_name, _lastName, _ID, _username, _password, _email, _birthDate);
            temp.setLogs(_logs);
            QJsonArray a = value.toObject()["accounts"].toArray();
            for(int i = 0; i < a.size(); i++) {
                //accountInfo
                QJsonObject n = a[i].toObject();
                int _typeOfAccount = n["typeOfAccount"].toInt();
                QString _num = n["num"].toString();
                QString _dateS = n["date"].toString();
                QDate _date = QDate::fromString(_dateS, "yyyy-MM-dd");
                int _balance = n["balance"].toInt();
                int _status = n["status"].toInt();
                QJsonArray _allUsers = n["allUsers"].toArray();
                account _account(_typeOfAccount, _num, _date, _balance, _status, _allUsers);
                //cardInfo
                QJsonObject _ca = n["accCard"].toObject();
                if(_ca.size() != 0) {
                    int _cardStatus = _ca["status"].toInt();
                    QString _cardPassword = _ca["password"].toString();
                    QString _cardDate = _ca["date"].toString();
                    QDate _realCardDate = QDate::fromString(_cardDate,"yyyy-MM-dd");
                    QString _cvv2 = _ca["cvv2"].toString();
                    QString _number = _ca["number"].toString();
                    card _card(_number, _cardPassword, _cvv2, _realCardDate, _cardStatus);
                    _account.setCardInfo(_card);
                }
                else
                    _account.noCard();
                //transactionsInfo
                QJsonArray tr = n["transactions"].toArray();
                for(int j = 0; j < tr.size(); j++) {
                    QJsonObject transaction1 = tr[j].toObject();
                    QString _from = transaction1["from"].toString();
                    QString _to = transaction1["to"].toString();
                    int _amount = transaction1["amount"].toInt();
                    bool _isWithCard = transaction1["isWithCard"].toBool();
                    bool _isReceived = transaction1["isReceived"].toBool();
                    transaction _transaction(_from, _to, _amount, _isWithCard, _isReceived);
                    _account.addTransaction(_transaction);
                }
                _account.profitability();
                temp.addAccount(_account);

                if(_account.getStatus() == 0)
                    manager.addDeactiveAccount(temp, _account);
                if(_account.getCardInfo() != nullptr && _account.getCardInfo()->getStatus() == 0)
                    manager.addDeactiveCard(_account, *(_account.getCardInfo()));
            }
            users.push_back(temp);
        }
        f.close();
}

int datas::login(QString _username, QString _password, MainWindow *_page)
{
    if(_username=="admin"&&_password=="admin")
    {
        manager.addLogAndSetLogin();
        adminmenu* adminpage=new adminmenu;
        adminpage->show();
        adminpage->setlastpage(_page);

        //manager.setpersonproperty("علی", "admin", "5120046785", "admin", "admin", "admin@gmail.com", QDate(1990, 1, 1));//bayad bardashteshe
        return 2;

    }
    else
    {
        for(int y=0;y<users.size();y++)
        {
            if(users[y].getusername()==_username&&users[y].getpassword()==_password)
            {
                users[y].addLogAndSetLogin();
                usernum=y;
                usermenu* userpage=new usermenu;
                userpage->show();
                userpage->setlastpage(_page);

                return 1;
            }
        }
    }
    return 0;
}

QVector<user> &datas::getUsers()
{
    return users;
}

void datas::writeToFile()
{
    QJsonObject json;
    QJsonObject user;
    for(int i = 0; i < users.size(); i++) {
        user["name"] = users[i].getName();
        user["lastName"] = users[i].getLastName();
        user["ID"] = users[i].getId();
        user["username"] = users[i].getUsername();
        user["password"] = users[i].getPassword();
        user["email"] = users[i].getEmail();
        QString birthDateString = users[i].getBirthDate().toString("yyyy-MM-dd");
        user["birthDate"] = birthDateString;
        QJsonObject log;
        QJsonArray logs;
        for(int j = 0; j < users[i].getLogs().size(); j++) {
            log["login"] = users[i].getLogs()[j].getLoginString();
            log["logout"] = users[i].getLogs()[j].getLooutString();
            logs.append(QJsonValue(log));
        }
        user["logs"] = logs;
        QJsonArray accounts;
        QJsonObject account;
        for(int j = 0; j < users[i].getAccounts().size(); j++) {
            account["typeOfAccount"] = users[i].getAccounts()[j].getTypeOfAccount();
            account["num"] = users[i].getAccounts()[j].getNum();
            account["date"] = users[i].getAccounts()[j].getDateString();
            account["balance"] = users[i].getAccounts()[j].getBalance();
            account["status"] = users[i].getAccounts()[j].getStatus();
            QJsonArray _allUsers;
            for(int k = 0; k < users[i].getAccounts()[j].getAllUsers().size(); k++)
                _allUsers.append(QJsonValue(users[i].getAccounts()[j].getAllUsers()[k]));
            account["allUsers"] = _allUsers;
            QJsonObject card;
            if(users[i].getAccounts()[j].getCardInfo() != nullptr) {
                QJsonObject card;
                card["password"] = users[i].getAccounts()[j].getAccCard().getPassword();
                card["date"] = users[i].getAccounts()[j].getAccCard().getDateString();
                card["cvv2"] = users[i].getAccounts()[j].getAccCard().getCvv2();
                card["number"] = users[i].getAccounts()[j].getAccCard().getNumber();
                card["status"] = users[i].getAccounts()[j].getAccCard().getStatus();
                account["accCard"] = card;
            }
            QJsonArray _transactions;
            if(users[i].getAccounts()[j].getTransaction().size() != 0) {
                for(int k = 0; k < users[i].getAccounts()[j].getTransaction().size(); k++) {
                    QJsonObject tr;
                    tr["amount"] = users[i].getAccounts()[j].getTransaction()[k].getAmount();
                    tr["from"] = users[i].getAccounts()[j].getTransaction()[k].getFrom();
                    tr["to"] = users[i].getAccounts()[j].getTransaction()[k].getTo();
                    tr["isReceived"] = users[i].getAccounts()[j].getTransaction()[k].getIsReceived();
                    tr["isWithCard"] = users[i].getAccounts()[j].getTransaction()[k].getIsWithCard();
                    _transactions.append(QJsonValue(tr));
                }
                account["transactions"] = _transactions;
            }
            accounts.append(QJsonValue(account));
        }
        QJsonObject result;
        result["user"] = user;
        result["accounts"] = accounts;
        json[users[i].getUsername()] = result;
    }
    QJsonDocument d(json);
    QByteArray b = d.toJson();
    //Encrypt Data
    char xor_key = 'T';
//    for(int i = 0; i < b.size(); i++)
//        b[i] = b[i] ^ xor_key;
    QFile f("../bank/data.json");
    f.open(QIODevice::WriteOnly);
    f.write(b);
    f.close();

    //Write Last Use of Program
    QJsonObject json1;
    json1["lastUse"] = QDate::currentDate().toString("yyyy-MM-dd");
    QJsonDocument d1(json1);
    QByteArray b1 = d1.toJson();
    for(int i = 0; i < b1.size(); i++)
        b1[i] = b1[i] ^ xor_key;
    QFile f1("../bank/lastUse.json");
    f1.open(QIODevice::WriteOnly);
    f1.write(b1);
    f1.close();
}

QString datas::getUsernameByAccountNumber(QString _accountNum)
{
    for(int i = 0; i < users.size(); i++) {
        QVector<account> accounts = users[i].getAccounts();
        for(int j = 0; j < accounts.size(); j++)
            if(accounts[j].getNum() == _accountNum)
                return users[i].getUsername();
    }
    return "";
}

QDate datas::getAccountDate(QString _accountNumber)
{
    for(int i = 0; i < users.size(); i++) {
        QVector<account> accounts = users[i].getAccounts();
        for(int j = 0; j < accounts.size(); j++)
            if(accounts[j].getNum() == _accountNumber)
                return accounts[j].getDate();
    }
    return QDate();
}

bool datas::removeuser(int i)
{
    users.erase(users.begin()+i);
    return 1;
}

bool datas::adduser(QString _name, QString _lastname, QString _username, QString _password, QString _email, QString _id,QDate _birth)
{
    user *newuser = new user(_name,_lastname,_id,_username,_password,_email,_birth);
    users.push_back(*newuser);
    return 1;
}

account& datas::findAccountByNum(QString _accountnum)
{
    for(int i=0;i<users.size();i++) {
        QVector<account> allacounts=users[i].getAccounts();
        for(int j=0;j<allacounts.size();j++)
            if(allacounts[j].getNum()==_accountnum)
                return allacounts[j];
    }
}

card* datas::findCartByNum(QString _cardnum)
{
    for(int i = 0; i < users.size(); i++) {
        QVector<account> allacounts=users[i].getAccounts();
        for(int j = 0; j < allacounts.size(); j++)
            if(allacounts[j].getaccountcard()->getNumber()==_cardnum)
                return allacounts[j].getaccountcard();
    }
    return nullptr;
}

void datas::rejectaccount(QString _username, QString _accountnum) {
    for(int i = 0; i < users.size(); i++)
        if(users[i].getusername()==_username) {
            QVector<account>& allaccount=users[i].getaccounts();
            for(int j = 0; j < allaccount.size(); j++)
                if(allaccount[j].getNum()==_accountnum)
                    allaccount.erase(allaccount.begin()+j);
        }
}

admin &datas::getrefadmin()
{
    return manager;

}

user& datas::getrefsystemuser()
{
    return users[usernum];

}

QString datas::getusernamebyi(int _i)
{
    return users[_i].getusername();

}

user &datas::getuserbyi(int _i)
{
    return users[_i];
}

account &datas::getAccountRefByUandI(int _usernum, int _accountnum)
{
    return users[_usernum].getAccounts()[_accountnum];
}

account *datas::AccountpointerByNum(QString _accountnum)
{
    for(int i=0;i<users.size();i++) {
        QVector<account>& allacounts=users[i].getAccounts();
        for(int j=0;j<allacounts.size();j++)
            if(allacounts[j].getNum()==_accountnum)
                return &allacounts[j];
    }
}

user *datas::userPointerByUsername(QString _username)
{
    for(int i=0;i<users.size();i++)
    {
        if(users[i].getusername()==_username)
        {
            return &users[i];
        }
    }
}

bool datas::usernameexit(QString _username)
{
    for(int w=0;w<users.size();w++)
    {
        if(users[w].getusername()==_username)
        {
            return true;
        }
    }
    return false;
}

QDate& datas::getLastUse()
{
    return lastUse;
}

