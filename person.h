#ifndef PERSON_H
#define PERSON_H

#include <QObject>
#include <QDate>
#include "session.h"
#include <QVector>
#include <QJsonArray>
#include <QJsonObject>

class person
{
    QString name;
    QString lastName;
    QString id;
    QString username;
    QString password;
    QString email;
    QDate birthDate;
    QVector<session> logs;
public:
    person();
    person(QString, QString, QString, QString, QString, QString, QDate);
    void setLogs(QJsonArray);
    QString getname();
    QString getlastname();
    QString getusername();
    QString getpassword();
    QString getemail();
    QString getid();
    QDate getbirth();
    void SetEditedUser(QString _name, QString _lastname, QString _username, QString _password,QString _email,QString _id,QDate _birth);
    QVector<session>& getlogs();
    void addLogAndSetLogin();
    void setLogoutTime();
    QString getName() const;
    QString getLastName() const;
    QString getId() const;
    QString getUsername() const;
    QString getPassword() const;
    QString getEmail() const;
    QDate getBirthDate() const;
    QString getDateString() const;
    QVector<session>& getLogs() ;
    QString getcomplitname();
};

#endif // PERSON_H
