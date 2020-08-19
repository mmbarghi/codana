#include "add_profile_dia.h"
#include "ui_add_profile_dia.h"

add_profile_dia::add_profile_dia(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_profile_dia)
{
    ui->setupUi(this);
}

add_profile_dia::~add_profile_dia()
{
    delete ui;
}
