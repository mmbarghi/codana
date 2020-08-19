#ifndef DATAS_H
#define DATAS_H

#include<QString>
#include<QWidget>
#include"admin.h"
#include"user.h"
#include"mainwindow.h"

#include <QVector>
#include "card.h"
#include <QDebug>
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>

using namespace std;
class datas
{
private:
    static QVector<user> users;
    static admin manager;
    static QDate lastUse;
    static int usernum;
public:
    datas();
    static int login(QString _username,QString _password,MainWindow* _page);
    static void getReady();
    static QVector<user>& getUsers() ;
    static void writeToFile();
    static QString getUsernameByAccountNumber(QString);
    static QDate getAccountDate(QString);
    static bool removeuser(int i);
    static bool adduser(QString _name, QString _lastname, QString _username, QString _password, QString _email, QString _id,QDate _birth);
    static account& findAccountByNum(QString _accountnum);
    static card* findCartByNum(QString _cardnum);
    static void rejectaccount(QString _username,QString _accountnum);
    static admin& getrefadmin();
    static user& getrefsystemuser();
    static QString getusernamebyi(int _i);
    static user& getuserbyi(int _i);
    static account& getAccountRefByUandI(int _usernum,int _accountnum);
    static account* AccountpointerByNum(QString _accountnum);
    static user* userPointerByUsername(QString _username);
    static bool usernameexit(QString _username);
    static QDate& getLastUse();

};

#endif // DATAS_H
