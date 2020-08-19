#include "mainwindow.h"
#include"ui_mainwindow.h"
#include<QGraphicsOpacityEffect>
#include<QPropertyAnimation>
#include<QMessageBox>
#include"datas.h"
using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("ورود");
    setFixedSize(701,481);

    fadeitem(ui->logo,800,0,1);
    fadeitem(ui->codana,1200,0,1);
    fadeitem(ui->bank,1600,0,1);
    ui->nousername->hide();
    ui->nopassword->hide();
    datas::getReady();
    qDebug()<< "salam";

}

MainWindow::~MainWindow()
{
    qDebug()<< "khodafez";
    datas::writeToFile();
    delete ui;
}

void MainWindow::fadeitem(QGraphicsView* obj,int du,int start,int end)
{
    QGraphicsOpacityEffect *eff = new QGraphicsOpacityEffect(this);

    obj->setGraphicsEffect(eff);
    QPropertyAnimation *a = new QPropertyAnimation(eff,"opacity");
    a->setDuration(du);
    a->setStartValue(start);
    a->setEndValue(end);
    a->setEasingCurve(QEasingCurve::InBack);
    a->start(QPropertyAnimation::DeleteWhenStopped);
}

void MainWindow::setAdmin(admin& _admin)
{
    myadmin=_admin;
}

void MainWindow::setUser(user& _user)
{
    myuser=_user;

}

void MainWindow::clearfields()
{
    ui->passwordled->clear();
    ui->usernameled->clear();

}


void MainWindow::on_loginpbn_clicked()
{
    ui->nousername->hide();
    ui->nopassword->hide();
    if(ui->usernameled->text()=="")
    {
        ui->nousername->show();
    }
    else if(ui->passwordled->text()=="")
    {
        ui->nopassword->show();
    }

    else
    {
        int status=datas::login(ui->usernameled->text(),ui->passwordled->text(),this);
        if(!status)
        {
            QMessageBox::information(this,"خطا در ورود","نام کاربری یا رمز عبور اشتباه می باشد",QMessageBox::Ok,QMessageBox::Ok);

        }
        else if(status==1)
        {
            this->hide();


        }
        else if(status==2)
        {

            this->hide();

        }
    }

}

