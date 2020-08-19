#ifndef USER_LOGS_DIA_H
#define USER_LOGS_DIA_H

#include <QDialog>
#include"user.h"
namespace Ui {
class user_logs_dia;
}

class user_logs_dia : public QDialog
{
    Q_OBJECT

public:
    explicit user_logs_dia(QWidget *parent = nullptr);
    ~user_logs_dia();
    void setsystemuser(user _systemuser);
private:
    Ui::user_logs_dia *ui;
    user systemuser;
};

#endif // USER_LOGS_DIA_H
