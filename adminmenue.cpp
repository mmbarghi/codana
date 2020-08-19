#include "adminmenue.h"
#include "ui_adminmenue.h"

adminmenue::adminmenue(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::adminmenue)
{
    ui->setupUi(this);
}

adminmenue::~adminmenue()
{
    delete ui;
}
