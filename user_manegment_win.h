#ifndef USER_MANEGMENT_WIN_H
#define USER_MANEGMENT_WIN_H

#include <QDialog>
#include"adminmenu.h"
#include"datas.h"
namespace Ui {
class user_manegment_win;
}

class user_manegment_win : public QDialog
{
    Q_OBJECT

public:
    explicit user_manegment_win(QWidget *parent = nullptr);
    ~user_manegment_win();
    void setlastpage(adminmenu* _menupage);
private slots:
    void on_pushButton_clicked();

    void on_userstable_cellClicked(int row, int column);


    void on_deleteuser_clicked();

    void on_adduser_clicked();
    void adduser_slot(QString _name,QString _lastname,QString _username,QString _password,QString _email,QString _id,QDate _birth);

private:
    Ui::user_manegment_win *ui;
    adminmenu* lastpage;
    user selectuser;
    int usernum=0;
    QVector<user>& users=datas::getUsers();
};

#endif // USER_MANEGMENT_WIN_H
