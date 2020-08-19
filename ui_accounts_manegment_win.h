/********************************************************************************
** Form generated from reading UI file 'accounts_manegment_win.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTS_MANEGMENT_WIN_H
#define UI_ACCOUNTS_MANEGMENT_WIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_accounts_manegment_win
{
public:
    QWidget *centralwidget;
    QTableWidget *accountstable;
    QPushButton *transferbtn;
    QPushButton *transactionbtn;
    QPushButton *cardbtn;
    QPushButton *passgeneratorbtn;
    QPushButton *backbtn;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *accounttype;
    QLabel *label;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *accountnum;
    QLabel *label_3;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *accountbalance;
    QLabel *label_2;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *statusprinter;
    QLabel *label_4;
    QLabel *label_5;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *statusprinter_2;
    QLabel *label_6;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *cardnumprinter;
    QLabel *label_7;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *cvv2printer;
    QLabel *label_8;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayout_8;
    QLabel *yearprinter;
    QLabel *label_10;
    QLabel *monthprinter;
    QLabel *label_9;

    void setupUi(QMainWindow *accounts_manegment_win)
    {
        if (accounts_manegment_win->objectName().isEmpty())
            accounts_manegment_win->setObjectName(QString::fromUtf8("accounts_manegment_win"));
        accounts_manegment_win->resize(838, 679);
        centralwidget = new QWidget(accounts_manegment_win);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        accountstable = new QTableWidget(centralwidget);
        if (accountstable->columnCount() < 4)
            accountstable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        accountstable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        accountstable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        accountstable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        accountstable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        accountstable->setObjectName(QString::fromUtf8("accountstable"));
        accountstable->setGeometry(QRect(30, 20, 431, 621));
        accountstable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        accountstable->setSelectionBehavior(QAbstractItemView::SelectRows);
        accountstable->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        accountstable->horizontalHeader()->setStretchLastSection(true);
        transferbtn = new QPushButton(centralwidget);
        transferbtn->setObjectName(QString::fromUtf8("transferbtn"));
        transferbtn->setEnabled(false);
        transferbtn->setGeometry(QRect(680, 310, 140, 140));
        transactionbtn = new QPushButton(centralwidget);
        transactionbtn->setObjectName(QString::fromUtf8("transactionbtn"));
        transactionbtn->setEnabled(false);
        transactionbtn->setGeometry(QRect(520, 310, 140, 140));
        cardbtn = new QPushButton(centralwidget);
        cardbtn->setObjectName(QString::fromUtf8("cardbtn"));
        cardbtn->setEnabled(false);
        cardbtn->setGeometry(QRect(680, 460, 140, 140));
        passgeneratorbtn = new QPushButton(centralwidget);
        passgeneratorbtn->setObjectName(QString::fromUtf8("passgeneratorbtn"));
        passgeneratorbtn->setEnabled(false);
        passgeneratorbtn->setGeometry(QRect(520, 460, 140, 140));
        backbtn = new QPushButton(centralwidget);
        backbtn->setObjectName(QString::fromUtf8("backbtn"));
        backbtn->setGeometry(QRect(770, 630, 61, 20));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(520, 50, 311, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        accounttype = new QLabel(layoutWidget);
        accounttype->setObjectName(QString::fromUtf8("accounttype"));

        horizontalLayout->addWidget(accounttype);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(600, 90, 231, 41));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        accountnum = new QLabel(layoutWidget1);
        accountnum->setObjectName(QString::fromUtf8("accountnum"));

        horizontalLayout_2->addWidget(accountnum);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(678, 130, 151, 41));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        accountbalance = new QLabel(layoutWidget2);
        accountbalance->setObjectName(QString::fromUtf8("accountbalance"));

        horizontalLayout_3->addWidget(accountbalance);

        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        layoutWidget3 = new QWidget(centralwidget);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(480, 130, 161, 41));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        statusprinter = new QLabel(layoutWidget3);
        statusprinter->setObjectName(QString::fromUtf8("statusprinter"));

        horizontalLayout_4->addWidget(statusprinter);

        label_4 = new QLabel(layoutWidget3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(746, 170, 81, 20));
        layoutWidget4 = new QWidget(centralwidget);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(600, 190, 221, 31));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        statusprinter_2 = new QLabel(layoutWidget4);
        statusprinter_2->setObjectName(QString::fromUtf8("statusprinter_2"));

        horizontalLayout_5->addWidget(statusprinter_2);

        label_6 = new QLabel(layoutWidget4);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_5->addWidget(label_6);

        layoutWidget5 = new QWidget(centralwidget);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(600, 220, 221, 31));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        cardnumprinter = new QLabel(layoutWidget5);
        cardnumprinter->setObjectName(QString::fromUtf8("cardnumprinter"));

        horizontalLayout_6->addWidget(cardnumprinter);

        label_7 = new QLabel(layoutWidget5);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_6->addWidget(label_7);

        layoutWidget6 = new QWidget(centralwidget);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(710, 250, 111, 31));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        cvv2printer = new QLabel(layoutWidget6);
        cvv2printer->setObjectName(QString::fromUtf8("cvv2printer"));

        horizontalLayout_7->addWidget(cvv2printer);

        label_8 = new QLabel(layoutWidget6);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_7->addWidget(label_8);

        layoutWidget7 = new QWidget(centralwidget);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(540, 250, 171, 41));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget7);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        yearprinter = new QLabel(layoutWidget7);
        yearprinter->setObjectName(QString::fromUtf8("yearprinter"));

        horizontalLayout_8->addWidget(yearprinter);

        label_10 = new QLabel(layoutWidget7);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_8->addWidget(label_10);

        monthprinter = new QLabel(layoutWidget7);
        monthprinter->setObjectName(QString::fromUtf8("monthprinter"));

        horizontalLayout_8->addWidget(monthprinter);

        label_9 = new QLabel(layoutWidget7);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_8->addWidget(label_9);

        accounts_manegment_win->setCentralWidget(centralwidget);

        retranslateUi(accounts_manegment_win);

        QMetaObject::connectSlotsByName(accounts_manegment_win);
    } // setupUi

    void retranslateUi(QMainWindow *accounts_manegment_win)
    {
        accounts_manegment_win->setWindowTitle(QApplication::translate("accounts_manegment_win", "MainWindow", nullptr));
        QTableWidgetItem *___qtablewidgetitem = accountstable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("accounts_manegment_win", "\331\206\331\210\330\271 \330\255\330\263\330\247\330\250", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = accountstable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("accounts_manegment_win", "\331\205\331\210\330\254\331\210\330\257\333\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = accountstable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("accounts_manegment_win", "\330\264\331\205\330\247\330\261\331\207 \330\255\330\263\330\247\330\250", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = accountstable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("accounts_manegment_win", "\331\210\330\266\330\271\333\214\330\252", nullptr));
#ifndef QT_NO_WHATSTHIS
        accountstable->setWhatsThis(QApplication::translate("accounts_manegment_win", "\331\206\331\205\330\247\333\214\330\264 \330\252\331\205\330\247\331\205\333\214 \330\255\330\263\330\247\330\250 \331\207\330\247", nullptr));
#endif // QT_NO_WHATSTHIS
        transferbtn->setText(QApplication::translate("accounts_manegment_win", "\330\247\331\206\330\252\331\202\330\247\331\204 \331\210\330\254\331\207", nullptr));
        transactionbtn->setText(QApplication::translate("accounts_manegment_win", "\331\205\330\264\330\247\331\207\330\257\331\207 \332\257\330\261\330\257\330\264 \331\207\330\247\333\214 \330\255\330\263\330\247\330\250", nullptr));
        cardbtn->setText(QApplication::translate("accounts_manegment_win", "\330\257\330\261\330\256\331\210\330\247\330\263\330\252 \332\251\330\247\330\261\330\252", nullptr));
        passgeneratorbtn->setText(QApplication::translate("accounts_manegment_win", "\330\257\330\261 \330\256\331\210\330\247\330\263\330\252 \330\261\331\205\330\262\333\214 \331\276\331\210\333\214\330\247 ", nullptr));
        backbtn->setText(QApplication::translate("accounts_manegment_win", "\330\250\330\247\330\262\332\257\330\264\330\252", nullptr));
        accounttype->setText(QString());
        label->setText(QApplication::translate("accounts_manegment_win", "\331\206\331\210\330\271 \330\255\330\263\330\247\330\250:", nullptr));
        accountnum->setText(QString());
        label_3->setText(QApplication::translate("accounts_manegment_win", "\330\264\331\205\330\247\330\261\331\207 \330\255\330\263\330\247\330\250:", nullptr));
        accountbalance->setText(QString());
        label_2->setText(QApplication::translate("accounts_manegment_win", "\331\205\331\210\330\254\331\210\330\257\333\214 \330\255\330\263\330\247\330\250:", nullptr));
        statusprinter->setText(QString());
        label_4->setText(QApplication::translate("accounts_manegment_win", "\331\210\330\266\330\271\333\214\330\252:", nullptr));
        label_5->setText(QApplication::translate("accounts_manegment_win", "\331\205\330\264\330\256\330\265\330\247\330\252 \332\251\330\247\330\261\330\252:", nullptr));
        statusprinter_2->setText(QString());
        label_6->setText(QApplication::translate("accounts_manegment_win", "\331\210\330\266\330\271\333\214\330\252:", nullptr));
        cardnumprinter->setText(QString());
        label_7->setText(QApplication::translate("accounts_manegment_win", "\330\264\331\205\330\247\330\261\331\207 \332\251\330\247\330\261\330\252:", nullptr));
        cvv2printer->setText(QString());
        label_8->setText(QApplication::translate("accounts_manegment_win", ": cvv2", nullptr));
        yearprinter->setText(QString());
        label_10->setText(QApplication::translate("accounts_manegment_win", "/", nullptr));
        monthprinter->setText(QString());
        label_9->setText(QApplication::translate("accounts_manegment_win", "\330\252\330\247\330\261\333\214\330\256 \330\247\331\206\331\202\330\266\330\247:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class accounts_manegment_win: public Ui_accounts_manegment_win {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTS_MANEGMENT_WIN_H
