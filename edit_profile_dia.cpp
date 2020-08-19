#include "edit_profile_dia.h"
#include "ui_edit_profile_dia.h"

edit_profile_dia::edit_profile_dia(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::edit_profile_dia)
{
    ui->setupUi(this);
    setWindowTitle("نشست ها");
    setFixedSize(423,397);

}

edit_profile_dia::~edit_profile_dia()
{
    delete ui;
}

void edit_profile_dia::setuser(user& _systemuser)
{
    systemuser=_systemuser;
    ui->nameled->setText(systemuser.getname());
    ui->lastnameled->setText(systemuser.getlastname());
    ui->usernameled->setText(systemuser.getusername());
    ui->passled->setText(systemuser.getpassword());
    ui->emailled->setText(systemuser.getemail());
    ui->idled->setText(systemuser.getid());

}

void edit_profile_dia::on_buttonBox_accepted()
{
    emit editing_signal(ui->nameled->text(),ui->lastnameled->text(),ui->usernameled->text(),ui->passled->text(),ui->emailled->text(),ui->idled->text(),ui->dateled->date());

}
