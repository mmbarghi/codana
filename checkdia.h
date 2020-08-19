#ifndef CHECKDIA_H
#define CHECKDIA_H

#include <QDialog>

namespace Ui {
class checkdia;
}

class checkdia : public QDialog
{
    Q_OBJECT

public:
    explicit checkdia(QWidget *parent = nullptr);
    ~checkdia();

private:
    Ui::checkdia *ui;
};

#endif // CHECKDIA_H
