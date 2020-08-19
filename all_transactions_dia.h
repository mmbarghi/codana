#ifndef ALL_TRANSACTIONS_DIA_H
#define ALL_TRANSACTIONS_DIA_H

#include <QDialog>
#include"datas.h"
namespace Ui {
class all_transactions_dia;
}

class all_transactions_dia : public QDialog
{
    Q_OBJECT

public:
    explicit all_transactions_dia(QWidget *parent = nullptr);
    ~all_transactions_dia();

private:
    Ui::all_transactions_dia *ui;
    QVector<user> users=datas::getUsers();
    int transationscount=0;
};

#endif // ALL_TRANSACTIONS_DIA_H
