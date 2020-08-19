#include "session.h"

session::session()
{

}

session::session(QDateTime _login, QDateTime _logout)
{
    login = _login;
    logout = _logout;
}

QString session::getLoginString() const
{
    QString loginString = login.toString("yyyy-MM-dd hh:mm");
    return loginString;
}
void session::setLogout()
{
    this->logout = QDateTime::currentDateTime();
}

QString session::getLooutString() const
{
    QString looutString = logout.toString("yyyy-MM-dd hh:mm");
    return looutString;
}
