#ifndef ADD_USER_DIA_H
#define ADD_USER_DIA_H

#include <QDialog>
#include<QDate>
namespace Ui {
class add_user_dia;
}

class add_user_dia : public QDialog
{
    Q_OBJECT

public:
    explicit add_user_dia(QWidget *parent = nullptr);
    ~add_user_dia();
signals:
    void adduser_signal(QString _name,QString _lastname,QString _username,QString _password,QString _email,QString _id,QDate _bir);

private:
    Ui::add_user_dia *ui;
private slots:
    void on_buttonBox_accepted();
};

#endif // ADD_USER_DIA_H
