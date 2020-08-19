#include "transfer_sec_dia.h"
#include "ui_transfer_sec_dia.h"
#include<QValidator>
#include<QMessageBox>
transfer_sec_dia::transfer_sec_dia(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::transfer_sec_dia)
{
    ui->setupUi(this);
    QValidator *validator = new QIntValidator(1000, 9999, this);
    ui->cvv2led->setValidator(validator);
}

transfer_sec_dia::~transfer_sec_dia()
{
    delete ui;
}

void transfer_sec_dia::setpropertise(QString _toname, int _price, account _fromaccount, QString _toaccount,transfer_first_dia* _lastpage)
{
    toname=_toname;
    price=_price;
    fromaccount=_fromaccount;
    toaccount=_toaccount;
    lastpage=_lastpage;
    ui->toaccountnameprint->setText(toname);
    QString stringOfPrice=QString::number(price);
    ui->priceprinter->setText(stringOfPrice);
}

void transfer_sec_dia::on_pushButton_2_clicked()
{
    int status=fromaccount.transfer(toaccount,price);
    if(status==0)
    {
        QMessageBox::information(nullptr,"موفقیت","انتقال وجه موفقیت آمیز بود",QMessageBox::Ok,QMessageBox::Ok);
    }
    lastpage->close();
    this->close();

}

void transfer_sec_dia::on_pushButton_clicked()
{
    lastpage->show();
    this->close();
}
