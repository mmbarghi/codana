#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QGraphicsView>
#include"admin.h"
#include"user.h"
//#include"datas.h"
//#include"adminmenu.h"
//#include"usermenu.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void fadeitem(QGraphicsView* obj,int du,int start,int end);
    void setAdmin(admin& _admin);
    void setUser(user& _user);
    void clearfields();
private slots:
    void on_loginpbn_clicked();


private:
    Ui::MainWindow *ui;
    user myuser;
    admin myadmin;
    //datas alldata;
    bool flag=1;
};
#endif // MAINWINDOW_H
