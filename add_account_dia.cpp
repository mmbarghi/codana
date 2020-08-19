#include "add_account_dia.h"
#include "ui_add_account_dia.h"
#include<QTableWidget>
add_account_dia::add_account_dia(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_account_dia)
{
    ui->setupUi(this);
    ui->alladminbox->hide();
    setWindowTitle("افزودن اکانت");
    setFixedSize(444,436);
}

add_account_dia::~add_account_dia()
{
    delete ui;
}

void add_account_dia::on_typecombo_currentIndexChanged(int index)
{
    if(index==2)
    {
        ui->alladminbox->show();
    }
    else
    {
        ui->alladminbox->hide();
    }
}

void add_account_dia::on_addbtn_clicked()
{
    ui->allusername->insertRow(allnew);
    QTableWidgetItem *username=new QTableWidgetItem;
    username->setText(ui->addled->text());
    addalluser.push_back(ui->addled->text());
    ui->allusername->setItem(allnew,0,username);
    ui->addled->clear();
    allnew++;
}


void add_account_dia::on_buttonBox_accepted()
{
    emit adding_signal(ui->spinBox->value(),ui->typecombo->currentIndex(),addalluser);
}
