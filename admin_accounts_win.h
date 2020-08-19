#ifndef ADMIN_ACCOUNTS_WIN_H
#define ADMIN_ACCOUNTS_WIN_H
#include"datas.h"
#include <QDialog>
#include"adminmenu.h"
namespace Ui {
class admin_accounts_win;
}

class admin_accounts_win : public QDialog
{
    Q_OBJECT

public:
    explicit admin_accounts_win(QWidget *parent = nullptr);
    ~admin_accounts_win();
    void setlastpage(adminmenu* _lastpage);
private slots:
    void on_accountstable_cellClicked(int row, int column);

    void on_unblockaccountbtn_clicked();

    void on_blockaccountbtn_clicked();

    void on_cardstable_cellClicked(int row, int column);

    void on_unblockcardbtn_clicked();

    void on_backbtn_clicked();

    void on_blockcardbtn_clicked();

private:
    Ui::admin_accounts_win *ui;
    QVector<user> users=datas::getUsers();
    int accountcount=0;
    int cardcount=0;
    card* workcard;
    adminmenu* lastpage;
    int usersrowselect;
    account* workaccount;
};

#endif // ADMIN_ACCOUNTS_WIN_H
