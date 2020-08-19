#include "pass_dia.h"
#include "ui_pass_dia.h"

pass_dia::pass_dia(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pass_dia)
{
    ui->setupUi(this);
    setWindowTitle("رمز پویا");
    setFixedSize(400,300);

    t=new QTimer(this);
    t->setInterval(1000);
    connect(t,SIGNAL(timeout()),this,SLOT(timer_slot()));
    t->start();


}

pass_dia::~pass_dia()
{
    delete ui;
    QString _pass=systemaccount->generatePassword();

}

void pass_dia::setsystemaccount(account* _account)
{
    systemaccount=_account;
    QString _pass=systemaccount->generatePassword();
    ui->passprinter->setText(_pass);
}

void pass_dia::timer_slot()
{
    if(ui->timer->value()==120)
    {
        ui->timer->reset();
        QString _pass=systemaccount->generatePassword();
        ui->passprinter->setText(_pass);
    }
    ui->timer->setValue(ui->timer->value()+1);
}
