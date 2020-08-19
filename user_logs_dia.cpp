#include "user_logs_dia.h"
#include "ui_user_logs_dia.h"
#include"session.h"
user_logs_dia::user_logs_dia(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::user_logs_dia)
{
    ui->setupUi(this);
    setWindowTitle("نشست ها");

}

user_logs_dia::~user_logs_dia()
{
    delete ui;
}

void user_logs_dia::setsystemuser(user _systemuser)
{
    systemuser=_systemuser;
    QVector<session> logs=systemuser.getlogs();
    for(int i=0;i<logs.size();i++)
    {
        session tmp=logs[i];
        ui->logstable->insertRow(i);
        QTableWidgetItem *login=new QTableWidgetItem;
        QTableWidgetItem *logout=new QTableWidgetItem;

        login->setText(tmp.getLoginString());
        logout->setText(tmp.getLooutString());
        //num->setText(_cat);
        //price->setText(_price);

        ui->logstable->setItem(i,0,login);
        ui->logstable->setItem(i,1,logout);

    }
}
