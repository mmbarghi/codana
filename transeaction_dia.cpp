#include "transeaction_dia.h"
#include "ui_transeaction_dia.h"
#include"transaction.h"
transeaction_dia::transeaction_dia(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::transeaction_dia)
{

    ui->setupUi(this);
    setWindowTitle("تراکنش");

}

transeaction_dia::~transeaction_dia()
{
    delete ui;
}

void transeaction_dia::setsystemaccount(account _selectaccount)
{
    systemaccount=_selectaccount;
    QVector<transaction> tmp=systemaccount.getTransaction();
    for(int i=0;i<tmp.size();i++)
    {
        ui->transactiontable->insertRow(i);
        QTableWidgetItem *from=new QTableWidgetItem;
        QTableWidgetItem *to=new QTableWidgetItem;
        QTableWidgetItem *balance=new QTableWidgetItem;
        QTableWidgetItem *resieved=new QTableWidgetItem;
        transaction tmptransaction=tmp[i];
        from->setText(tmptransaction.getFrom());
        to->setText(tmptransaction.getTo());
        balance->setText(tmptransaction.getAmountAsString());
        resieved->setText(tmptransaction.getreceivedAsString());
        //num->setText(_cat);
        //price->setText(_price);

        ui->transactiontable->setItem(i,0,from);
        ui->transactiontable->setItem(i,1,to);
        ui->transactiontable->setItem(i,2,balance);
        ui->transactiontable->setItem(i,3,resieved);

    }

}
