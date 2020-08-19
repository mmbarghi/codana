#ifndef USERMENU_H
#define USERMENU_H
#include"user.h"
#include <QMainWindow>
#include"admin.h"
#include"mainwindow.h"
#include"datas.h"
//#include"datas.h"
namespace Ui {
class usermenu;

}

class usermenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit usermenu(QWidget *parent = nullptr);
    ~usermenu();
    void setUser(user& _myuser);
    void setadmin(admin& _myadmin);
    void setlastpage(MainWindow* _lastpage);
private slots:

    void on_newbtn_clicked();

    void on_exitpbn_clicked();

    void on_accountspbn_clicked();
    void adding_slot(int _balance,int _type,QVector<QString> _addallusers);
    void on_editpbn_clicked();
    void editing_slot(QString _name,QString _lastname,QString _username,QString _password,QString _email,QString _id,QDate _birth);
    void on_sessiopbn_clicked();

    void on_infopbn_clicked();

private:
    Ui::usermenu *ui;
    user& myuser=datas::getrefsystemuser();
    admin& myadmin=datas::getrefadmin();//=datas::getrefadmin();
    MainWindow* lastpage;
};

#endif // USERMENU_H
