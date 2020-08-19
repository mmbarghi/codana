#include "person.h"

person::person()
{

}
person::person(QString _name, QString _lastName, QString _id, QString _username, QString _password, QString _email, QDate _birthDate)
{
    this->name = _name;
    this->lastName = _lastName;
    this->id = _id;
    this->username = _username;
    this->password = _password;
    this->email = _email;
    this->birthDate = _birthDate;
}

void person::setLogs(QJsonArray _logs)
{
    for(int i = 0; i < _logs.size(); i++) {
        QString loginS =  _logs[i].toObject()["login"].toString();
        QDateTime _login = QDateTime::fromString(loginS,"yyyy-MM-dd hh:mm");
        QString logoutS =  _logs[i].toObject()["logout"].toString();
        QDateTime _logout = QDateTime::fromString(loginS,"yyyy-MM-dd hh:mm");
        session a(_login, _logout);
        logs.push_back(session(_login, _logout));
    }
}

QString person::getname()
{
    return name;

}

QString person::getlastname()
{
    return lastName;

}

QString person::getusername()
{
    return username;
}

QString person::getpassword()
{
    return password;
}

QString person::getemail()
{
    return email;
}

QString person::getid()
{
    return id;
}

QDate person::getbirth()
{
    return birthDate;
}

void person::SetEditedUser(QString _name, QString _lastname, QString _username, QString _password, QString _email, QString _id, QDate _birth)
{
    this->name=_name;
    this->lastName=_lastname;
    this->username=_username;
    this->password=_password;
    this->id=_id;
    this->birthDate=_birth;
    this->email=_email;
}

QVector<session> &person::getlogs()
{
    return logs;
}

QString person::getUsername() const
{
    return username;
}

void person::addLogAndSetLogin()
{
    logs.push_back(session(QDateTime::currentDateTime(), QDateTime()));
}

void person::setLogoutTime()
{
    this->logs[logs.size() - 1].setLogout();
}

QString person::getName() const
{
    return name;
}

QString person::getLastName() const
{
    return lastName;
}

QString person::getId() const
{
    return id;
}

QString person::getPassword() const
{
    return password;
}

QString person::getEmail() const
{
    return email;
}

QDate person::getBirthDate() const
{
    return birthDate;
}

QString person::getDateString() const
{
    return birthDate.toString("yyyy-MM-dd");
}

QVector<session>& person::getLogs()
{
    return logs;
}

QString person::getcomplitname()
{
    return name + " " + lastName;
}
