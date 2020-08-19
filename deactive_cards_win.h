#ifndef DEACTIVE_CARDS_WIN_H
#define DEACTIVE_CARDS_WIN_H

#include <QDialog>
#include"admin.h"
#include"adminmenu.h"
#include"datas.h"
namespace Ui {
class deactive_cards_win;
}

class deactive_cards_win : public QDialog
{
    Q_OBJECT

public:
    explicit deactive_cards_win(QWidget *parent = nullptr);
    ~deactive_cards_win();
    void setlastpage(adminmenu* _lastpage);
    void setsystemadmin(admin& _systemadmin);
private slots:
    void on_cardstable_cellClicked(int row, int column);

    void on_acceptcardbtn_clicked();

    void on_rejectcardbtn_clicked();

    void on_backbtn_clicked();

private:
    Ui::deactive_cards_win *ui;
    admin& systemadmin=datas::getrefadmin();
    adminmenu *lastpage;
    QMap<account, card>& alldeactives=systemadmin.getdeactiveCards();

    card* selectCard;
    account* selectaccount;
    int selectrow;
    QMap<account, card>::iterator selectpair;
};

#endif // DEACTIVE_CARDS_WIN_H
