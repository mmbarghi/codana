#ifndef ADD_ACCOUNT_DIA_H
#define ADD_ACCOUNT_DIA_H

#include <QDialog>

namespace Ui {
class add_account_dia;
}

class add_account_dia : public QDialog
{
    Q_OBJECT

public:
    explicit add_account_dia(QWidget *parent = nullptr);
    ~add_account_dia();
signals:
    void adding_signal(int _balance,int _type,QVector<QString> _addalluser);
private slots:

    void on_typecombo_currentIndexChanged(int index);

    void on_addbtn_clicked();

    void on_buttonBox_accepted();

private:
    Ui::add_account_dia *ui;
    int allnew=0;
    QVector<QString> addalluser;
};

#endif // ADD_ACCOUNT_DIA_H
