#include "all_transactions_dia.h"
#include "ui_all_transactions_dia.h"

all_transactions_dia::all_transactions_dia(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::all_transactions_dia)
{
    ui->setupUi(this);
    setWindowTitle("تراکنش ها");

    for(int i=0;i<users.size();i++)
    {
        QVector<account> accounts=users[i].getAccounts();
        for(int j=0;j<accounts.size();j++)
        {
            QVector<transaction> transactions=accounts[j].getTransaction();
            for(int u=0;u<transactions.size();u++)
            {
                ui->transactiontable->insertRow(transationscount);
                QTableWidgetItem *from=new QTableWidgetItem;
                QTableWidgetItem *to=new QTableWidgetItem;
                QTableWidgetItem *balance=new QTableWidgetItem;
                QTableWidgetItem *iswithcard=new QTableWidgetItem;
                transaction tmptransaction=transactions[u];
                from->setText(tmptransaction.getFrom());
                to->setText(tmptransaction.getTo());
                balance->setText(tmptransaction.getAmountAsString());
                iswithcard->setText(tmptransaction.getIsWithCardAsString());
                //num->setText(_cat);
                //price->setText(_price);

                ui->transactiontable->setItem(transationscount,0,from);
                ui->transactiontable->setItem(transationscount,1,to);
                ui->transactiontable->setItem(transationscount,2,balance);
                ui->transactiontable->setItem(transationscount,3,iswithcard);


            }
        }
    }
}

all_transactions_dia::~all_transactions_dia()
{
    delete ui;
}
