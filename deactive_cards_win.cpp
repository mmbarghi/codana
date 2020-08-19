#include "deactive_cards_win.h"
#include "ui_deactive_cards_win.h"

deactive_cards_win::deactive_cards_win(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::deactive_cards_win)
{
    ui->setupUi(this);
    setWindowTitle("کارت های تایید نشده");

}

deactive_cards_win::~deactive_cards_win()
{
    delete ui;
}

void deactive_cards_win::setlastpage(adminmenu *_lastpage)
{
    lastpage=_lastpage;
}

void deactive_cards_win::setsystemadmin(admin &_systemadmin)
{
    for(int i=0;i<alldeactives.size();i++)
    {
        ui->cardstable->insertRow(i);
        QTableWidgetItem *type=new QTableWidgetItem;
        QTableWidgetItem *cardnum=new QTableWidgetItem;
        QTableWidgetItem *accountnum=new QTableWidgetItem;
        QMap<account, card>::iterator it=alldeactives.begin()+i;
        card displaycard=it.value();
        account tmpaccount=it.key();
        type->setText(tmpaccount.getTypeAsString());
        accountnum->setText(tmpaccount.getNum());
        cardnum->setText(displaycard.getNumber());
        ui->cardstable->setItem(i,2,type);
        ui->cardstable->setItem(i,0,cardnum);
        ui->cardstable->setItem(i,1,accountnum);

    }

}

void deactive_cards_win::on_cardstable_cellClicked(int row, int column)
{
    ui->acceptcardbtn->setEnabled(true);
    ui->rejectcardbtn->setEnabled(true);
    selectpair=alldeactives.begin()+row;
    selectaccount=datas::AccountpointerByNum(ui->cardstable->item(row,1)->text());
    selectCard=selectaccount->getCardInfo();
    selectrow=row;

}

void deactive_cards_win::on_acceptcardbtn_clicked()
{
    selectCard->unblock();
    if(selectaccount->getType()==2)
    {
        selectaccount->updateAllUsers();

    }
    alldeactives.erase(alldeactives.begin()+selectrow);
    deactive_cards_win* refpage=new deactive_cards_win;
    refpage->show();
    refpage->setlastpage(lastpage);
    refpage->setsystemadmin(systemadmin);
    this->close();
}

void deactive_cards_win::on_rejectcardbtn_clicked()
{
    selectaccount->deletecard();
    if(selectaccount->getType()==2)
    {
        selectaccount->updateAllUsers();

    }
    alldeactives.erase(alldeactives.begin()+selectrow);
    deactive_cards_win* refpage=new deactive_cards_win;
    refpage->show();
    refpage->setlastpage(lastpage);
    refpage->setsystemadmin(systemadmin);
    this->close();
}

void deactive_cards_win::on_backbtn_clicked()
{
    lastpage->show();
    this->close();
}
