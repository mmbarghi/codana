#include "deactive_accounts_win.h"
#include "ui_deactive_accounts_win.h"
#include"user.h"
#include<QMap>
#include"datas.h"
deactive_accounts_win::deactive_accounts_win(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::deactive_accounts_win)
{
    ui->setupUi(this);
    setWindowTitle("حساب های غیر فعال");

}

deactive_accounts_win::~deactive_accounts_win()
{
    delete ui;
}

void deactive_accounts_win::setlastpage(adminmenu *_lastpage)
{
    lastpage=_lastpage;
}

void deactive_accounts_win::setsystemadmin(admin &_systemadmin)
{
    //systemadmin=_systemadmin;
    //alldeactives=systemadmin.getdeactiveAccounts();
    for(int i=0;i<alldeactives.size();i++)
    {
        ui->accountstable->insertRow(i);
        QTableWidgetItem *type=new QTableWidgetItem;
        QTableWidgetItem *balance=new QTableWidgetItem;
        QTableWidgetItem *use=new QTableWidgetItem;
        QTableWidgetItem *num=new QTableWidgetItem;
        QMultiMap<user,account>::iterator it=alldeactives.begin()+i;
        user displayuser=it.key();
        account tmpaccount=it.value();
        type->setText(tmpaccount.getTypeAsString());
        balance->setText(tmpaccount.getBalanceAsString());
        num->setText(tmpaccount.getNum());
        use->setText(displayuser.getcomplitname());
        ui->accountstable->setItem(i,2,type);
        ui->accountstable->setItem(i,3,num);
        ui->accountstable->setItem(i,1,balance);
        ui->accountstable->setItem(i,0,use);

    }

}

void deactive_accounts_win::on_accountstable_cellClicked(int row, int column)
{
    QMultiMap<user,account>::iterator selectpair=alldeactives.begin()+row;
    //it=alldeactives.begin()+row;
    selectuser=datas::userPointerByUsername(selectpair.key().getUsername());
    selectaccount=selectuser->getAccountPointerByAccountNumber(ui->accountstable->item(row,3)->text());
    ui->acceptaccountbtn->setEnabled(true);
    ui->rejectaccountbtn->setEnabled(true);
    selectrow=row;
}

void deactive_accounts_win::on_acceptaccountbtn_clicked()
{
    //account& refofselected=datas::findAccountByNum( selectaccount.value().getNum());
    selectpair=alldeactives.begin()+selectrow;

    selectaccount->unblock();
    alldeactives.erase(selectpair);
    deactive_accounts_win *refpage=new deactive_accounts_win();
    refpage->show();
    refpage->setlastpage(lastpage);
    refpage->setsystemadmin(systemadmin);
    this->close();
}

void deactive_accounts_win::on_backbtn_clicked()
{
    this->close();
    lastpage->show();
}

void deactive_accounts_win::on_rejectaccountbtn_clicked()
{

    selectpair=alldeactives.begin()+selectrow;

    datas::rejectaccount(selectuser->getusername(),ui->accountstable->item(selectrow,3)->text());
    alldeactives.erase(selectpair);
    deactive_accounts_win *refpage=new deactive_accounts_win();
    refpage->show();
    refpage->setlastpage(lastpage);
    refpage->setsystemadmin(systemadmin);
    this->close();
}
