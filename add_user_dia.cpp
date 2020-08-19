#include "add_user_dia.h"
#include "ui_add_user_dia.h"

add_user_dia::add_user_dia(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_user_dia)
{
    ui->setupUi(this);
    ui->idled->setValidator(new QIntValidator(1000000000,9999999999, this));

    setWindowTitle("افزودن کاربر");
    setFixedSize(400,300);
}

add_user_dia::~add_user_dia()
{
    delete ui;
}

void add_user_dia::on_buttonBox_accepted()
{
    emit adduser_signal(ui->nameled->text(),ui->lastnameled->text(),ui->usernameled->text(),ui->passwordled->text(),ui->emailled->text(),ui->idled->text(),ui->dateled->date());

}
