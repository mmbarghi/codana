#include "usermenu.h"
#include "ui_usermenu.h"
#include <QTimer>
#include"add_account_dia.h"
#include<QMessageBox>
#include"checkdia.h"
#include"accounts_manegment_win.h"
#include"edit_profile_dia.h"
#include"user_logs_dia.h"
usermenu::usermenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::usermenu)
{

    ui->setupUi(this);
    ui->setupUi(this);
    setWindowTitle("منو");
    setFixedSize(700,500);
    connect(ui->newbtn,SIGNAL(clicked()),this,SLOT(on_newbtn_clicked()));
    connect(ui->accountspbn,SIGNAL(clicked()),this,SLOT(on_accountspbn_clicked()));
    connect(ui->editpbn,SIGNAL(clicked()),this,SLOT(on_editpbn_clicked()));
    connect(ui->sessiopbn,SIGNAL(clicked()),this,SLOT(on_sessiopbn_clicked()));
    connect(ui->exitpbn,SIGNAL(clicked()),this,SLOT(on_exitpbn_clicked()));
    connect(ui->infopbn,SIGNAL(clicked()),this,SLOT(on_infopbn_clicked()));

    QTimer *t = new QTimer(this);
    t->setInterval(1000);
    connect(t, &QTimer::timeout, [&]() {
       QString time1 = QTime::currentTime().toString();
       ui->label_clock->setText(time1);
       ui->welcomelbl->setText(myuser.getname()+" عزیز خوش آمدید");
    } );
    t->start();


}

usermenu::~usermenu()
{

    delete ui;
}

void usermenu::setUser(user& _myuser)
{
    myuser=_myuser;
}

void usermenu::setadmin(admin& _myadmin)
{
    myadmin=_myadmin;
}

void usermenu::setlastpage(MainWindow *_lastpage)
{
    lastpage=_lastpage;
}

void usermenu::on_newbtn_clicked()
{
    add_account_dia* adddia=new add_account_dia;
    adddia->show();
    connect(adddia,SIGNAL(adding_signal(int,int,QVector<QString>)),this,SLOT(adding_slot(int,int,QVector<QString>)));
}

void usermenu::on_exitpbn_clicked()
{
   lastpage->show();
   lastpage->clearfields();
    myuser.setLogoutTime();
   this->close();
}

void usermenu::on_accountspbn_clicked()
{
    accounts_manegment_win* accManege=new accounts_manegment_win;
    accManege->show();
    accManege->setuser(myuser);
    accManege->setadmin(myadmin);
    accManege->setlastpage(this);
    this->hide();

}

void usermenu::adding_slot(int _balance, int _type,QVector<QString>  _addallusers)
{
    if(_type==2)
    {
        for (int q=0;q<_addallusers.size();q++) {
            if(!(datas::usernameexit(_addallusers[q])))
            {
                 _addallusers.erase(_addallusers.begin()+q);
            }
        }
    }

    if(_type==2)
    {
        qDebug()<<"now";
        _addallusers.push_back(myuser.getusername());

    }

    account* newaccount=new account(_type,_balance,_addallusers);
    if(_type!=2)
    {
        myuser.getaccounts().push_back(*newaccount);
    }
    myadmin.getdeactiveAccounts().insert(myuser,*newaccount);
    if(_type==2)
    {
        for (int q=0;q<_addallusers.size();q++) {
            user* tmp=datas::userPointerByUsername(_addallusers[q]);
            tmp->addAccount(*newaccount);
        }
    }


}

void usermenu::on_editpbn_clicked()
{
    edit_profile_dia* editpage=new edit_profile_dia;
    editpage->show();
    editpage->setuser(myuser);
    connect(editpage,SIGNAL(editing_signal(QString,QString,QString,QString,QString,QString,QDate)),this,SLOT(editing_slot(QString,QString,QString,QString,QString,QString,QDate)));
}

void usermenu::editing_slot(QString _name, QString _lastname, QString _username, QString _password, QString _email, QString _id, QDate _birth)
{
    myuser.SetEditedUser(_name,_lastname,_username,_password,_email,_id,_birth);

}

void usermenu::on_sessiopbn_clicked()
{
    user_logs_dia* logDia=new user_logs_dia(this);
    logDia->show();
    logDia->setsystemuser(myuser);
}


void usermenu::on_infopbn_clicked()
{
    QMessageBox::information(this,"درباره ما","کدانا \n محمدمهدی برقی\nمهرداد اشراقی \n امیرمهدی مختاری",QMessageBox::Ok,QMessageBox::Ok);
}
