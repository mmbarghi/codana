/********************************************************************************
** Form generated from reading UI file 'usermenu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERMENU_H
#define UI_USERMENU_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_usermenu
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QLabel *label_clock;
    QGraphicsView *graphicsView_2;
    QLabel *welcomelbl;
    QGraphicsView *graphicsView_3;
    QPushButton *newbtn;
    QPushButton *accountspbn;
    QPushButton *editpbn;
    QPushButton *sessiopbn;
    QPushButton *exitpbn;
    QPushButton *infopbn;
    QMenuBar *menubar;

    void setupUi(QMainWindow *usermenu)
    {
        if (usermenu->objectName().isEmpty())
            usermenu->setObjectName(QString::fromUtf8("usermenu"));
        usermenu->resize(700, 500);
        centralwidget = new QWidget(usermenu);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 700, 500));
        graphicsView->setStyleSheet(QString::fromUtf8("background-image: url(:/pic/menu_back.jpg);"));
        label_clock = new QLabel(centralwidget);
        label_clock->setObjectName(QString::fromUtf8("label_clock"));
        label_clock->setGeometry(QRect(10, 60, 81, 51));
        QFont font;
        font.setPointSize(11);
        label_clock->setFont(font);
        label_clock->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        graphicsView_2 = new QGraphicsView(centralwidget);
        graphicsView_2->setObjectName(QString::fromUtf8("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(10, 10, 60, 60));
        graphicsView_2->setStyleSheet(QString::fromUtf8("background-image: url(:/pic/mini_logo.png);\n"
"border:none;\n"
""));
        welcomelbl = new QLabel(centralwidget);
        welcomelbl->setObjectName(QString::fromUtf8("welcomelbl"));
        welcomelbl->setGeometry(QRect(410, 30, 211, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("B Yekan"));
        font1.setPointSize(12);
        welcomelbl->setFont(font1);
        welcomelbl->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        graphicsView_3 = new QGraphicsView(centralwidget);
        graphicsView_3->setObjectName(QString::fromUtf8("graphicsView_3"));
        graphicsView_3->setGeometry(QRect(630, 20, 60, 60));
        graphicsView_3->setStyleSheet(QString::fromUtf8("background-image: url(:/pic/mini_profile.png);\n"
"border:none;\n"
""));
        newbtn = new QPushButton(centralwidget);
        newbtn->setObjectName(QString::fromUtf8("newbtn"));
        newbtn->setGeometry(QRect(520, 200, 130, 130));
        newbtn->setStyleSheet(QString::fromUtf8("background-color: rgb(14, 106, 255);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/pic/create_account_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        newbtn->setIcon(icon);
        newbtn->setIconSize(QSize(130, 130));
        newbtn->setFlat(false);
        accountspbn = new QPushButton(centralwidget);
        accountspbn->setObjectName(QString::fromUtf8("accountspbn"));
        accountspbn->setGeometry(QRect(370, 200, 130, 130));
        accountspbn->setStyleSheet(QString::fromUtf8("background-color: rgb(14, 106, 255);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/pic/manege_account_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        accountspbn->setIcon(icon1);
        accountspbn->setIconSize(QSize(130, 130));
        editpbn = new QPushButton(centralwidget);
        editpbn->setObjectName(QString::fromUtf8("editpbn"));
        editpbn->setGeometry(QRect(220, 200, 130, 130));
        editpbn->setStyleSheet(QString::fromUtf8("background-color: rgb(14, 106, 255);"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/pic/edit_profile_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        editpbn->setIcon(icon2);
        editpbn->setIconSize(QSize(130, 130));
        sessiopbn = new QPushButton(centralwidget);
        sessiopbn->setObjectName(QString::fromUtf8("sessiopbn"));
        sessiopbn->setGeometry(QRect(70, 200, 130, 130));
        sessiopbn->setStyleSheet(QString::fromUtf8("background-color: rgb(14, 106, 255);"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/pic/session_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        sessiopbn->setIcon(icon3);
        sessiopbn->setIconSize(QSize(130, 130));
        exitpbn = new QPushButton(centralwidget);
        exitpbn->setObjectName(QString::fromUtf8("exitpbn"));
        exitpbn->setGeometry(QRect(650, 430, 40, 40));
        exitpbn->setStyleSheet(QString::fromUtf8("background-image: url(:/pic/exit_icon);"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/pic/C:/Users/Data System PC/Desktop/exit_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon4.addFile(QString::fromUtf8(":/pic/C:/Users/Data System PC/Desktop/exit_icon.png"), QSize(), QIcon::Selected, QIcon::On);
        exitpbn->setIcon(icon4);
        exitpbn->setIconSize(QSize(40, 40));
        exitpbn->setFlat(true);
        infopbn = new QPushButton(centralwidget);
        infopbn->setObjectName(QString::fromUtf8("infopbn"));
        infopbn->setGeometry(QRect(600, 430, 40, 40));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/pic/info_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        infopbn->setIcon(icon5);
        infopbn->setIconSize(QSize(40, 40));
        infopbn->setFlat(true);
        usermenu->setCentralWidget(centralwidget);
        graphicsView->raise();
        label_clock->raise();
        graphicsView_2->raise();
        welcomelbl->raise();
        graphicsView_3->raise();
        accountspbn->raise();
        editpbn->raise();
        sessiopbn->raise();
        exitpbn->raise();
        infopbn->raise();
        newbtn->raise();
        menubar = new QMenuBar(usermenu);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 700, 20));
        usermenu->setMenuBar(menubar);

        retranslateUi(usermenu);

        newbtn->setDefault(false);


        QMetaObject::connectSlotsByName(usermenu);
    } // setupUi

    void retranslateUi(QMainWindow *usermenu)
    {
        usermenu->setWindowTitle(QApplication::translate("usermenu", "MainWindow", nullptr));
        label_clock->setText(QString());
        welcomelbl->setText(QString());
#ifndef QT_NO_TOOLTIP
        newbtn->setToolTip(QApplication::translate("usermenu", "\330\247\331\201\330\252\330\252\330\247\330\255 \330\255\330\263\330\247\330\250 \330\254\330\257\333\214\330\257", nullptr));
#endif // QT_NO_TOOLTIP
        newbtn->setText(QString());
#ifndef QT_NO_TOOLTIP
        accountspbn->setToolTip(QApplication::translate("usermenu", "\331\205\330\257\333\214\330\261\333\214\330\252 \330\255\330\263\330\247\330\250 \331\207\330\247", nullptr));
#endif // QT_NO_TOOLTIP
        accountspbn->setText(QString());
#ifndef QT_NO_TOOLTIP
        editpbn->setToolTip(QApplication::translate("usermenu", "\331\210\333\214\330\261\330\247\333\214\330\264 \331\276\330\261\331\210\331\201\330\247\333\214\331\204", nullptr));
#endif // QT_NO_TOOLTIP
        editpbn->setText(QString());
#ifndef QT_NO_TOOLTIP
        sessiopbn->setToolTip(QApplication::translate("usermenu", "\331\206\330\264\330\263\330\252 \331\207\330\247", nullptr));
#endif // QT_NO_TOOLTIP
        sessiopbn->setText(QString());
#ifndef QT_NO_TOOLTIP
        exitpbn->setToolTip(QApplication::translate("usermenu", "\330\256\330\261\331\210\330\254 \330\247\330\262 \330\263\333\214\330\263\330\252\331\205", nullptr));
#endif // QT_NO_TOOLTIP
        exitpbn->setText(QString());
#ifndef QT_NO_TOOLTIP
        infopbn->setToolTip(QApplication::translate("usermenu", "\330\257\330\261\330\250\330\247\330\261\331\207 \333\214 \331\205\330\247", nullptr));
#endif // QT_NO_TOOLTIP
        infopbn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class usermenu: public Ui_usermenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERMENU_H
