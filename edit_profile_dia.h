#ifndef EDIT_PROFILE_DIA_H
#define EDIT_PROFILE_DIA_H

#include <QDialog>
#include"user.h"
namespace Ui {
class edit_profile_dia;
}

class edit_profile_dia : public QDialog
{
    Q_OBJECT

public:
    explicit edit_profile_dia(QWidget *parent = nullptr);
    ~edit_profile_dia();
    void setuser(user& _systemuser);
signals:
    void editing_signal(QString _name,QString _lastname,QString _username,QString _password,QString _email,QString _id,QDate _birth);
private slots:
    void on_buttonBox_accepted();

private:
    Ui::edit_profile_dia *ui;
    user systemuser;
};

#endif // EDIT_PROFILE_DIA_H
