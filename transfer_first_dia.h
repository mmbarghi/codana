#ifndef TRANSFER_FIRST_DIA_H
#define TRANSFER_FIRST_DIA_H

#include <QDialog>
#include"account.h"
#include"user.h"
namespace Ui {
class transfer_first_dia;
}

class transfer_first_dia : public QDialog
{
    Q_OBJECT

public:
    explicit transfer_first_dia(QWidget *parent = nullptr);
    ~transfer_first_dia();
    void setfromaccount(account _from);
    void setsystemuser(user _systemuser);
signals:
    void transfer_signal(QString to, int trans_amount);
private slots:
    //void on_pushButton_clicked();

    void on_buttonBox_accepted();

private:
    Ui::transfer_first_dia *ui;
    account fromaccount;
    user systemuser;

};

#endif // TRANSFER_FIRST_DIA_H
