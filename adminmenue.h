#ifndef ADMINMENUE_H
#define ADMINMENUE_H

#include <QMainWindow>

namespace Ui {
class adminmenue;
}

class adminmenue : public QMainWindow
{
    Q_OBJECT

public:
    explicit adminmenue(QWidget *parent = nullptr);
    ~adminmenue();

private:
    Ui::adminmenue *ui;
};

#endif // ADMINMENUE_H
