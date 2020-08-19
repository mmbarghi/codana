#ifndef ADD_PROFILE_DIA_H
#define ADD_PROFILE_DIA_H

#include <QDialog>

namespace Ui {
class add_profile_dia;
}

class add_profile_dia : public QDialog
{
    Q_OBJECT

public:
    explicit add_profile_dia(QWidget *parent = nullptr);
    ~add_profile_dia();

private:
    Ui::add_profile_dia *ui;
};

#endif // ADD_PROFILE_DIA_H
