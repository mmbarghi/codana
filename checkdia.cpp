#include "checkdia.h"
#include "ui_checkdia.h"

checkdia::checkdia(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::checkdia)
{
    ui->setupUi(this);
}

checkdia::~checkdia()
{
    delete ui;
}
