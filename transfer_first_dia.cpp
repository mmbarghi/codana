#include "transfer_first_dia.h"
#include "ui_transfer_first_dia.h"
#include<QMessageBox>
#include"transfer_sec_dia.h"
transfer_first_dia::transfer_first_dia(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::transfer_first_dia)
{
    ui->setupUi(this);
}

transfer_first_dia::~transfer_first_dia()
{
    delete ui;
}

void transfer_first_dia::setfromaccount(account _from)
{
    fromaccount=_from;
    ui->fromled->setText(fromaccount.getNum());
}

void transfer_first_dia::setsystemuser(user _systemuser)
{
    systemuser=_systemuser;
}
/*
void transfer_first_dia::on_pushButton_clicked()
{
    // tabe baresi merdad , daryaft nam + barsi vojod hesab maghsad
    QString toaccountname="برقی";
    if(toaccountname=="eror")
    {
        QMessageBox::critical(this,"شماره حساب مقصد","شماره حساب مقصد یافت نشد ",QMessageBox::Ok,QMessageBox::Ok);

    }
    transfer_sec_dia *secendtransfer=new transfer_sec_dia;
    secendtransfer->show();
    secendtransfer->setpropertise(toaccountname,ui->priceled->value(),fromaccount,ui->toaccountled->text(),this);
    this->hide();

}
*/


void transfer_first_dia::on_buttonBox_accepted()
{
    emit transfer_signal(ui->toaccountled->text(),ui->priceled->value());
}
