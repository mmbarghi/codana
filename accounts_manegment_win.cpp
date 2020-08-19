#include "accounts_manegment_win.h"
#include "ui_accounts_manegment_win.h"
#include"transfer_first_dia.h"
#include"transeaction_dia.h"
#include"pass_dia.h"
#include<QMessageBox>
accounts_manegment_win::accounts_manegment_win(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::accounts_manegment_win)
{
    ui->setupUi(this);
    setWindowTitle("مدیریت حساب ها");
    setFixedSize(838,679);

    //lastpage->show();

}

accounts_manegment_win::~accounts_manegment_win()
{
    delete ui;
}

void accounts_manegment_win::setuser(user& _systemuser)
{
    //systemsUser=_systemuser;
    QVector<account> tmp=systemsUser.getaccounts();
    for(int i=0;i<systemsUser.getaccounts().size();i++)
    {
        ui->accountstable->insertRow(i);
        QTableWidgetItem *type=new QTableWidgetItem;
        QTableWidgetItem *balance=new QTableWidgetItem;
        QTableWidgetItem *num=new QTableWidgetItem;
        QTableWidgetItem *status=new QTableWidgetItem;
        account tmpaccount=tmp[i];
        type->setText(tmpaccount.getTypeAsString());
        balance->setText(tmpaccount.getBalanceAsString());
        num->setText(tmpaccount.getNum());
        status->setText(tmpaccount.getStatusAsString());
        ui->accountstable->setItem(i,0,type);
        ui->accountstable->setItem(i,1,balance);
        ui->accountstable->setItem(i,2,num);
        ui->accountstable->setItem(i,3,status);

    }
}

void accounts_manegment_win::setadmin(admin& _systemadmin)
{

}

void accounts_manegment_win::setlastpage(usermenu*(_menu))
{
    lastpage=_menu;
}

void accounts_manegment_win::on_accountstable_cellClicked(int row, int column)
{
    selectAccount=systemsUser.getAccountPointerByI(row);
    //selectAccount=systemsUser.getaccounts()[row];
    ui->accounttype->setText(ui->accountstable->item(row,0)->text());
    ui->accountbalance->setText(ui->accountstable->item(row,1)->text());
    ui->accountnum->setText(ui->accountstable->item(row,2)->text());
    ui->statusprinter->setText(ui->accountstable->item(row,3)->text());
    if(selectAccount->getCardInfo()==nullptr)
    {
        ui->statusprinter_2->setText("کارت صادر نشده است");

    }
    else
    {

        ui->statusprinter_2->setText(selectAccount->getCardInfo()->getStatusAsString());
        if(selectAccount->getCardInfo()->getStatus()==1)
        {
            ui->cardnumprinter->setText(selectAccount->getCardInfo()->getNumber());
            ui->cvv2printer->setText(selectAccount->getCardInfo()->getCvv2());
            ui->monthprinter->setText(selectAccount->getCardInfo()->getMonth());
            ui->yearprinter->setText(selectAccount->getCardInfo()->getYear());
        }

    }

    if(selectAccount->getStatus()==1)
    {
        ui->transferbtn->setEnabled(true);
        ui->transactionbtn->setEnabled(true);
        ui->passgeneratorbtn->setEnabled(true);
        if(!(selectAccount->hasCard())&&(selectAccount->getType()!=3))
        {
           ui->cardbtn->setEnabled(true);
        }

    }
}

void accounts_manegment_win::on_backbtn_clicked()
{
    this->close();
    lastpage->show();
}

void accounts_manegment_win::on_transferbtn_clicked()
{
    transfer_first_dia* starttransfer=new transfer_first_dia(this);
    starttransfer->show();
    starttransfer->setsystemuser(systemsUser);
    starttransfer->setfromaccount(*selectAccount);
    connect(starttransfer,SIGNAL(transfer_signal(QString, int)),this,SLOT(transfer_slot(QString,int)));
}

void accounts_manegment_win::on_transactionbtn_clicked()
{
    transeaction_dia* transactiondia=new transeaction_dia;
    transactiondia->show();
    transactiondia->setsystemaccount(*selectAccount);
}

void accounts_manegment_win::on_cardbtn_clicked()
{
    selectAccount->getCard();
    accounts_manegment_win* refpage=new accounts_manegment_win;
    //QMap<account, card> &tmp=systemAdmin.getdeactiveCards();
    //tmp.insert(*selectAccount,*selectAccount->getCardInfo());
    refpage->show();
    refpage->setuser(systemsUser);
    refpage->setlastpage(lastpage);
    this->close();
}

void accounts_manegment_win::on_passgeneratorbtn_clicked()
{
    pass_dia* passpage=new pass_dia(this);
    passpage->show();
    passpage->setsystemaccount(selectAccount);
}


void accounts_manegment_win::transfer_slot(QString to, int trans_amount)
{
    account& tmp=systemsUser.getaccounts()[selectrow];
    int st=tmp.transfer(to,trans_amount);
    if(st==2)
    {
        QMessageBox::information(this,"شماره حساب اشتباه","شماره حساب مقصد اشتباه هست",QMessageBox::Ok,QMessageBox::Ok);
    }
    else if (st==1)
    {
        QMessageBox::information(this,"موفقیت آمیز","انتقال وجه موفقیت آمیز بود",QMessageBox::Ok,QMessageBox::Ok);
    }
    else if (st==0)
    {
        QMessageBox::information(this,"موجودی ناکافی","موجودی حساب شما کافی نمی باشد",QMessageBox::Ok,QMessageBox::Ok);
    }

    accounts_manegment_win* refpage=new accounts_manegment_win;
    //systemAdmin.getdeactiveCards().insert(*selectAccount,*selectAccount->getCardInfo());
    refpage->show();
    refpage->setuser(systemsUser);
    refpage->setlastpage(lastpage);
    this->close();
}
