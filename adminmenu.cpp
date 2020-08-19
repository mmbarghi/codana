#include "adminmenu.h"
#include "ui_adminmenu.h"
#include"user_manegment_win.h"
#include"admin_accounts_win.h"
#include"all_transactions_dia.h"
#include"deactive_accounts_win.h"
#include"deactive_cards_win.h"
adminmenu::adminmenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::adminmenu)
{
    ui->setupUi(this);
    ui->welcomeprint->setText(myadmin.getname()+" عزیز خوش آمدید");
    setWindowTitle("منو مدیریت");
    setFixedSize(700,500);

}

adminmenu::~adminmenu()
{
    delete ui;
    qDebug()<<"admin menu disteractor!!";

}

void adminmenu::setadmin(admin& _myadmin)
{
    myadmin=_myadmin;

}

void adminmenu::setlastpage(MainWindow *_lastpage)
{
    lastpage=_lastpage;

}

void adminmenu::on_user_manegementbtn_clicked()
{
    user_manegment_win* usermanager=new user_manegment_win;
    usermanager->show();
    usermanager->setlastpage(this);
    this->hide();
}

void adminmenu::on_accounts_manegmentbtn_clicked()
{
    admin_accounts_win* accountspage=new admin_accounts_win;
    accountspage->show();
    accountspage->setlastpage(this);
    this->hide();
}

void adminmenu::on_transactionsbtn_clicked()
{
    all_transactions_dia* alltransaction=new all_transactions_dia;
    alltransaction->show();

}

void adminmenu::on_disactivedaccountbtn_clicked()
{
    deactive_accounts_win* deactiveaccount=new deactive_accounts_win;
    deactiveaccount->show();
    deactiveaccount->setlastpage(this);
    deactiveaccount->setsystemadmin(myadmin);
    this->hide();

}

void adminmenu::on_disactivecardsbtn_clicked()
{
    deactive_cards_win* deactivecards=new deactive_cards_win;
    deactivecards->show();
    deactivecards->setlastpage(this);
    deactivecards->setsystemadmin(myadmin);
    this->hide();
}

void adminmenu::on_lockpbn_clicked()
{
    lastpage->show();
    lastpage->clearfields();
    this->close();


}
