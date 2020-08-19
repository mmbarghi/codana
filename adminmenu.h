#ifndef ADMINMENU_H
#define ADMINMENU_H

#include <QMainWindow>
#include"admin.h"
#include"datas.h"
namespace Ui {
class adminmenu;
}

class adminmenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit adminmenu(QWidget *parent = nullptr);
    ~adminmenu();
    void setadmin(admin& _myadmin);
    void setlastpage(MainWindow* _lastpage);
private slots:
    void on_user_manegementbtn_clicked();

    void on_accounts_manegmentbtn_clicked();

    void on_transactionsbtn_clicked();

    void on_disactivedaccountbtn_clicked();

    void on_disactivecardsbtn_clicked();

    void on_lockpbn_clicked();

private:
    Ui::adminmenu *ui;
    admin& myadmin =datas::getrefadmin();
    MainWindow* lastpage;
};

#endif // ADMINMENU_H
