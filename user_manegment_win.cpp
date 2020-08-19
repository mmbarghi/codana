#include "user_manegment_win.h"
#include "ui_user_manegment_win.h"
#include<QtDebug>
#include<QMessageBox>
#include"add_user_dia.h"
user_manegment_win::user_manegment_win(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::user_manegment_win)
{
    ui->setupUi(this);
    setWindowTitle("مدیریت کاربران");
    setFixedSize(722,669);
    for(int i=0;i<users.size();i++)
    {
        ui->userstable->insertRow(i);
        QTableWidgetItem *name=new QTableWidgetItem;
        QTableWidgetItem *lastname=new QTableWidgetItem;
        QTableWidgetItem *username=new QTableWidgetItem;
        QTableWidgetItem *id=new QTableWidgetItem;
        user tmpuser=users[i];
        name->setText(tmpuser.getname());
        lastname->setText(tmpuser.getlastname());
        username->setText(tmpuser.getusername());
        id->setText(tmpuser.getid());
        //num->setText(_cat);
        //price->setText(_price);

        ui->userstable->setItem(i,0,name);
        ui->userstable->setItem(i,1,lastname);
        ui->userstable->setItem(i,2,username);
        ui->userstable->setItem(i,3,id);

    }
}

user_manegment_win::~user_manegment_win()
{
    //lastpage->show();
    qDebug()<<"user manegment disteractor!!";

    delete ui;

}

void user_manegment_win::setlastpage(adminmenu *_menupage)
{
    lastpage=_menupage;
}

void user_manegment_win::on_pushButton_clicked()
{
    this->close();
    lastpage->show();
}

void user_manegment_win::on_userstable_cellClicked(int row, int column)
{
    selectuser=users[row];
    usernum=row;
    ui->logstable->setRowCount(0);
    ui->accountstable->setRowCount(0);

    ui->deleteuser->setEnabled(true);
    ui->nameprinter->setText(selectuser.getname());
    ui->lastnameprinter->setText(selectuser.getlastname());
    ui->idprinter->setText(selectuser.getid());
    ui->usernameprinter->setText(selectuser.getusername());
    ui->emailprinter->setText(selectuser.getemail());
    ui->passwordprinter->setText(selectuser.getpassword());
    ui->birthprinter->setText(selectuser.getDateString());
    QVector<account>& useraccounts=selectuser.getaccounts();
    for(int i=0;i<useraccounts.size();i++)
    {
        ui->accountstable->insertRow(i);
        QTableWidgetItem *num=new QTableWidgetItem;
        QTableWidgetItem *status=new QTableWidgetItem;
        QTableWidgetItem *type=new QTableWidgetItem;
        QTableWidgetItem *balance=new QTableWidgetItem;
        account tmp=useraccounts[i];
        num->setText(tmp.getNum());
        status->setText(tmp.getStatusAsString());
        type->setText(tmp.getTypeAsString());
        balance->setText(tmp.getBalanceAsString());
        //num->setText(_cat);
        //price->setText(_price);

        ui->accountstable->setItem(i,0,num);
        ui->accountstable->setItem(i,1,status);
        ui->accountstable->setItem(i,2,type);
        ui->accountstable->setItem(i,3,balance);

    }
    QVector<session> usersessions=selectuser.getlogs();
    for(int i=0;i<usersessions.size();i++)
    {
        ui->logstable->insertRow(i);
        QTableWidgetItem *login=new QTableWidgetItem;
        QTableWidgetItem *logout=new QTableWidgetItem;
        session tmp=usersessions[i];
        login->setText(tmp.getLoginString());
        logout->setText(tmp.getLooutString());
        ui->logstable->setItem(i,0,login);
        ui->logstable->setItem(i,1,logout);

    }


}

void user_manegment_win::on_deleteuser_clicked()
{
    int check=datas::removeuser(usernum);
    if(check)
    {
        QMessageBox::information(nullptr,"حذف کاربر","حذف کاربر موفقیت آمیز بود",QMessageBox::Ok,QMessageBox::Ok);
        ui->userstable->setRowCount(0);
        this->close();
        user_manegment_win* refreshpage=new user_manegment_win;
        refreshpage->show();
        refreshpage->setlastpage(lastpage);

    }


}

void user_manegment_win::on_adduser_clicked()
{
    add_user_dia* adduser=new add_user_dia;
    adduser->show();
    connect(adduser,SIGNAL(adduser_signal(QString,QString,QString,QString ,QString,QString,QDate)),this,SLOT(adduser_slot(QString, QString, QString, QString, QString, QString,QDate)));
}

void user_manegment_win::adduser_slot(QString _name, QString _lastname, QString _username, QString _password, QString _email, QString _id,QDate _birth)
{
    bool checkadding=datas::adduser(_name,_lastname,_username,_password,_email,_id,_birth);
    if(checkadding)
    {
        QMessageBox::information(nullptr,"افزودن کاربر","کاربر با موفقیت افزوده شد",QMessageBox::Ok,QMessageBox::Ok);
    }
    this->close();
    user_manegment_win* refreshpage=new user_manegment_win;
    refreshpage->show();
    refreshpage->setlastpage(lastpage);

}
