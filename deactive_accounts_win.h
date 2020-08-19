#ifndef DEACTIVE_ACCOUNTS_WIN_H
#define DEACTIVE_ACCOUNTS_WIN_H

#include <QDialog>
#include<adminmenu.h>
#include"datas.h"
namespace Ui {
class deactive_accounts_win;
}

class deactive_accounts_win : public QDialog
{
    Q_OBJECT

public:
    explicit deactive_accounts_win(QWidget *parent = nullptr);
    ~deactive_accounts_win();
    void setlastpage(adminmenu* _lastpage);
    void setsystemadmin(admin& _systemadmin);
private slots:
    void on_accountstable_cellClicked(int row, int column);

    void on_acceptaccountbtn_clicked();

    void on_backbtn_clicked();

    void on_rejectaccountbtn_clicked();

private:
    Ui::deactive_accounts_win *ui;
    adminmenu* lastpage;
    admin& systemadmin=datas::getrefadmin();
    QMultiMap<user, account>& alldeactives=systemadmin.getdeactiveAccounts();
    //account refofselected;
    user* selectuser;
    //QMultiMap<user,account>::iterator it;
    int selectrow=0;
    account* selectaccount;
    QMultiMap<user,account>::iterator selectpair;


};

#endif // DEACTIVE_ACCOUNTS_WIN_H
