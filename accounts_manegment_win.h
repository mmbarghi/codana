#ifndef ACCOUNTS_MANEGMENT_WIN_H
#define ACCOUNTS_MANEGMENT_WIN_H

#include <QMainWindow>
#include"user.h"
#include"admin.h"
#include"usermenu.h"
namespace Ui {
class accounts_manegment_win;
}

class accounts_manegment_win : public QMainWindow
{
    Q_OBJECT

public:
    explicit accounts_manegment_win(QWidget *parent = nullptr);
    ~accounts_manegment_win();
    void setuser(user& _systemuser);
    void setadmin(admin& _systemadmin);
    void setlastpage(usermenu* _menu);

private slots:
    void on_accountstable_cellClicked(int row, int column);

    void on_backbtn_clicked();

    void on_transferbtn_clicked();

    void on_transactionbtn_clicked();

    void on_cardbtn_clicked();

    void on_passgeneratorbtn_clicked();
    void transfer_slot(QString to, int trans_amount);
private:
    Ui::accounts_manegment_win *ui;
    user& systemsUser=datas::getrefsystemuser();
    admin& systemAdmin=datas::getrefadmin();
    usermenu* lastpage;
    account* selectAccount;
    int selectrow=0;
};

#endif // ACCOUNTS_MANEGMENT_WIN_H
