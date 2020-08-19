#ifndef TRANSEACTION_DIA_H
#define TRANSEACTION_DIA_H

#include <QDialog>
#include"account.h"
namespace Ui {
class transeaction_dia;
}

class transeaction_dia : public QDialog
{
    Q_OBJECT

public:
    explicit transeaction_dia(QWidget *parent = nullptr);
    ~transeaction_dia();
    void setsystemaccount(account _selectaccount);
private:

    Ui::transeaction_dia *ui;
    account systemaccount;
};

#endif // TRANSEACTION_DIA_H
