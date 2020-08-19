#include "admin_accounts_win.h"
#include "ui_admin_accounts_win.h"

admin_accounts_win::admin_accounts_win(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::admin_accounts_win)
{
    ui->setupUi(this);
    setWindowTitle("مدیریت حساب ها");
    setFixedSize(850,560);
    for(int i=0;i<users.size();i++)
    {
        QVector<account>useraccounts=users[i].getaccounts();
        for(int j=0;j<useraccounts.size();j++)
        {
            ui->accountstable->insertRow(accountcount);
            QTableWidgetItem *num=new QTableWidgetItem;
            QTableWidgetItem *status=new QTableWidgetItem;
            QTableWidgetItem *type=new QTableWidgetItem;
            QTableWidgetItem *balance=new QTableWidgetItem;
            QTableWidgetItem *use=new QTableWidgetItem;
            account tmp=useraccounts[j];
            num->setText(tmp.getNum());
            status->setText(tmp.getStatusAsString());
            type->setText(tmp.getTypeAsString());
            balance->setText(tmp.getBalanceAsString());
            use->setText(users[i].getname());
            ui->accountstable->setItem(accountcount,0,num);
            ui->accountstable->setItem(accountcount,3,status);
            ui->accountstable->setItem(accountcount,1,type);
            ui->accountstable->setItem(accountcount,2,balance);
            ui->accountstable->setItem(accountcount,4,use);
            card *accountcard=tmp.getaccountcard();
            accountcount++;
            if(accountcard!=nullptr)
            {
                ui->cardstable->insertRow(cardcount);
                QTableWidgetItem *num=new QTableWidgetItem;
                QTableWidgetItem *cvv2=new QTableWidgetItem;
                QTableWidgetItem *status=new QTableWidgetItem;
                QTableWidgetItem *exp=new QTableWidgetItem;
                QTableWidgetItem *use=new QTableWidgetItem;

                num->setText(accountcard->getNumber());
                status->setText(accountcard->getStatusAsString());
                exp->setText(accountcard->getDateString());
                cvv2->setText(accountcard->getCvv2());
                use->setText(users[i].getname());
                ui->cardstable->setItem(cardcount,0,num);
                ui->cardstable->setItem(cardcount,2,status);
                ui->cardstable->setItem(cardcount,1,cvv2);
                ui->cardstable->setItem(cardcount,3,exp);
                ui->cardstable->setItem(cardcount,4,use);
                cardcount++;
            }
        }
    }

}

admin_accounts_win::~admin_accounts_win()
{
    delete ui;
}

void admin_accounts_win::setlastpage(adminmenu *_lastpage)
{
    lastpage=_lastpage;
}

void admin_accounts_win::on_accountstable_cellClicked(int row, int column)
{
    ui->unblockaccountbtn->setEnabled(false);
    ui->blockaccountbtn->setEnabled(false);
    workaccount=datas::AccountpointerByNum(ui->accountstable->item(row,0)->text());
    usersrowselect=row;
    if(workaccount->getStatus()==2||workaccount->getStatus()==0)
    {
        ui->unblockaccountbtn->setEnabled(true);

    }
    else
    {
        ui->blockaccountbtn->setEnabled(true);
    }
}

void admin_accounts_win::on_unblockaccountbtn_clicked()
{
    workaccount->unblock();
    admin_accounts_win *refpage=new admin_accounts_win;
    refpage->show();
    refpage->setlastpage(lastpage);
    this->close();
}

void admin_accounts_win::on_blockaccountbtn_clicked()
{
    workaccount->block();
    admin_accounts_win *refpage=new admin_accounts_win;
    refpage->show();
    refpage->setlastpage(lastpage);
    this->close();
}

void admin_accounts_win::on_cardstable_cellClicked(int row, int column)
{
    ui->unblockcardbtn->setEnabled(false);
    ui->blockcardbtn->setEnabled(false);
    workcard=datas::findCartByNum(ui->cardstable->item(row,0)->text());
    if(workcard->getStatus()==2||workcard->getStatus()==0)
    {
        ui->unblockcardbtn->setEnabled(true);

    }
    else
    {
        ui->blockcardbtn->setEnabled(true);
    }
}

void admin_accounts_win::on_unblockcardbtn_clicked()
{
    workcard->unblock();
    admin_accounts_win *refpage=new admin_accounts_win;
    refpage->show();
    refpage->setlastpage(lastpage);
    this->close();
}

void admin_accounts_win::on_backbtn_clicked()
{
    this->hide();
    lastpage->show();
}

void admin_accounts_win::on_blockcardbtn_clicked()
{
    workcard->block();
    admin_accounts_win *refpage=new admin_accounts_win;
    refpage->show();
    refpage->setlastpage(lastpage);
    this->close();
}
