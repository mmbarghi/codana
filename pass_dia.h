#ifndef PASS_DIA_H
#define PASS_DIA_H

#include <QDialog>
#include"account.h"
#include<QTimer>
namespace Ui {
class pass_dia;
}

class pass_dia : public QDialog
{
    Q_OBJECT

public:
    explicit pass_dia(QWidget *parent = nullptr);
    ~pass_dia();
    void setsystemaccount(account* _account);

private:
    Ui::pass_dia *ui;
    account* systemaccount;
    QTimer *t;
private slots:
    void timer_slot();
};

#endif // PASS_DIA_H
