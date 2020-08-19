#ifndef SESSION_H
#define SESSION_H

#include <QDateTime>

class session
{
    QDateTime login;
    QDateTime logout;
    public:
    session();
    session(QDateTime, QDateTime);
    void setLogout();
    QString getLoginString() const;
    QString getLooutString() const;
};

#endif // SESSION_H
