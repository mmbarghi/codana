#ifndef TRANSFER_SEC_DIA_H
#define TRANSFER_SEC_DIA_H

#include <QDialog>
#include"account.h"
#include"transfer_first_dia.h"
namespace Ui {
class transfer_sec_dia;
}

class transfer_sec_dia : public QDialog
{
    Q_OBJECT

public:
    explicit transfer_sec_dia(QWidget *parent = nullptr);
    ~transfer_sec_dia();
    void setpropertise(QString _toname,int _price,account _fromaccount,QString _toaccount,transfer_first_dia* _lastpage);
private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::transfer_sec_dia *ui;
    QString toname;
    int price;
    account fromaccount;
    QString toaccount;
    transfer_first_dia* lastpage;

};

#endif // TRANSFER_SEC_DIA_H
