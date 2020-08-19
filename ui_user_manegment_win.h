/********************************************************************************
** Form generated from reading UI file 'user_manegment_win.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_MANEGMENT_WIN_H
#define UI_USER_MANEGMENT_WIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_user_manegment_win
{
public:
    QPushButton *pushButton;
    QLabel *label_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_7;
    QLabel *nameprinter;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *lastnameprinter;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *idprinter;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *birthprinter;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_3;
    QLabel *usernameprinter;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_2;
    QLabel *passwordprinter;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout;
    QLabel *emailprinter;
    QLabel *label_11;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QTableWidget *logstable;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_8;
    QTableWidget *accountstable;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *deleteuser;
    QPushButton *adduser;
    QVBoxLayout *verticalLayout_5;
    QLabel *label;
    QTableWidget *userstable;

    void setupUi(QDialog *user_manegment_win)
    {
        if (user_manegment_win->objectName().isEmpty())
            user_manegment_win->setObjectName(QString::fromUtf8("user_manegment_win"));
        user_manegment_win->resize(722, 669);
        pushButton = new QPushButton(user_manegment_win);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(630, 640, 80, 21));
        label_2 = new QLabel(user_manegment_win);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(660, 20, 51, 20));
        layoutWidget = new QWidget(user_manegment_win);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(450, 50, 260, 583));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        nameprinter = new QLabel(layoutWidget);
        nameprinter->setObjectName(QString::fromUtf8("nameprinter"));

        horizontalLayout_7->addWidget(nameprinter);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_7->addWidget(label_4);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        lastnameprinter = new QLabel(layoutWidget);
        lastnameprinter->setObjectName(QString::fromUtf8("lastnameprinter"));

        horizontalLayout_6->addWidget(lastnameprinter);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_6->addWidget(label_5);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        idprinter = new QLabel(layoutWidget);
        idprinter->setObjectName(QString::fromUtf8("idprinter"));

        horizontalLayout_5->addWidget(idprinter);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_5->addWidget(label_6);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        birthprinter = new QLabel(layoutWidget);
        birthprinter->setObjectName(QString::fromUtf8("birthprinter"));

        horizontalLayout_4->addWidget(birthprinter);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_4->addWidget(label_7);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        usernameprinter = new QLabel(layoutWidget);
        usernameprinter->setObjectName(QString::fromUtf8("usernameprinter"));

        horizontalLayout_3->addWidget(usernameprinter);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_3->addWidget(label_9);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        passwordprinter = new QLabel(layoutWidget);
        passwordprinter->setObjectName(QString::fromUtf8("passwordprinter"));

        horizontalLayout_2->addWidget(passwordprinter);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_2->addWidget(label_10);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        emailprinter = new QLabel(layoutWidget);
        emailprinter->setObjectName(QString::fromUtf8("emailprinter"));

        horizontalLayout->addWidget(emailprinter);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout->addWidget(label_11);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        logstable = new QTableWidget(layoutWidget);
        if (logstable->columnCount() < 2)
            logstable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        logstable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        logstable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        logstable->setObjectName(QString::fromUtf8("logstable"));
        logstable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        logstable->setAlternatingRowColors(true);
        logstable->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_2->addWidget(logstable);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_3->addWidget(label_8);

        accountstable = new QTableWidget(layoutWidget);
        if (accountstable->columnCount() < 4)
            accountstable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        accountstable->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        accountstable->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        accountstable->setHorizontalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        accountstable->setHorizontalHeaderItem(3, __qtablewidgetitem5);
        accountstable->setObjectName(QString::fromUtf8("accountstable"));
        accountstable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        accountstable->setAlternatingRowColors(false);
        accountstable->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_3->addWidget(accountstable);


        verticalLayout_4->addLayout(verticalLayout_3);

        layoutWidget1 = new QWidget(user_manegment_win);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 20, 421, 611));
        verticalLayout_6 = new QVBoxLayout(layoutWidget1);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        deleteuser = new QPushButton(layoutWidget1);
        deleteuser->setObjectName(QString::fromUtf8("deleteuser"));
        deleteuser->setEnabled(false);

        horizontalLayout_8->addWidget(deleteuser);

        adduser = new QPushButton(layoutWidget1);
        adduser->setObjectName(QString::fromUtf8("adduser"));

        horizontalLayout_8->addWidget(adduser);


        verticalLayout_6->addLayout(horizontalLayout_8);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_5->addWidget(label);

        userstable = new QTableWidget(layoutWidget1);
        if (userstable->columnCount() < 4)
            userstable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        userstable->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        userstable->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        userstable->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        userstable->setHorizontalHeaderItem(3, __qtablewidgetitem9);
        userstable->setObjectName(QString::fromUtf8("userstable"));
        userstable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        userstable->setAlternatingRowColors(true);
        userstable->setSelectionBehavior(QAbstractItemView::SelectRows);
        userstable->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        userstable->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_5->addWidget(userstable);


        verticalLayout_6->addLayout(verticalLayout_5);


        retranslateUi(user_manegment_win);

        QMetaObject::connectSlotsByName(user_manegment_win);
    } // setupUi

    void retranslateUi(QDialog *user_manegment_win)
    {
        user_manegment_win->setWindowTitle(QApplication::translate("user_manegment_win", "Dialog", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QApplication::translate("user_manegment_win", "\330\250\330\247\330\262\332\257\330\264\330\252 \330\250\331\207 \331\205\331\206\331\210 \331\205\330\257\333\214\330\261\333\214\330\252", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QApplication::translate("user_manegment_win", "\330\250\330\247\330\262\332\257\330\264\330\252", nullptr));
        label_2->setText(QApplication::translate("user_manegment_win", "\331\205\330\264\330\256\330\265\330\247\330\252:", nullptr));
        nameprinter->setText(QString());
        label_4->setText(QApplication::translate("user_manegment_win", "\331\206\330\247\331\205:", nullptr));
        lastnameprinter->setText(QString());
        label_5->setText(QApplication::translate("user_manegment_win", "\331\206\330\247\331\205 \330\256\330\247\331\206\331\210\330\247\330\257\332\257\333\214:", nullptr));
        idprinter->setText(QString());
        label_6->setText(QApplication::translate("user_manegment_win", "\332\251\330\257\331\205\331\204\333\214:", nullptr));
        birthprinter->setText(QString());
        label_7->setText(QApplication::translate("user_manegment_win", "\330\252\330\247\330\261\333\214\330\256 \330\252\331\210\331\204\330\257:", nullptr));
        usernameprinter->setText(QString());
        label_9->setText(QApplication::translate("user_manegment_win", "\331\206\330\247\331\205 \332\251\330\247\330\261\330\250\330\261\333\214:", nullptr));
        passwordprinter->setText(QString());
        label_10->setText(QApplication::translate("user_manegment_win", "\330\261\331\205\330\262 \330\271\330\250\331\210\330\261:", nullptr));
        emailprinter->setText(QString());
        label_11->setText(QApplication::translate("user_manegment_win", "\330\247\333\214\331\205\333\214\331\204:", nullptr));
        label_3->setText(QApplication::translate("user_manegment_win", "\330\252\330\247\330\261\333\214\330\256\332\206\331\207 \331\210\330\261\331\210\330\257 \331\210 \330\256\330\261\331\210\330\254:", nullptr));
        QTableWidgetItem *___qtablewidgetitem = logstable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("user_manegment_win", "\331\210\330\261\331\210\330\257", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = logstable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("user_manegment_win", "\330\256\330\261\331\210\330\254", nullptr));
#ifndef QT_NO_WHATSTHIS
        logstable->setWhatsThis(QApplication::translate("user_manegment_win", "\330\263\330\247\330\271\330\252 \331\210 \330\252\330\247\330\261\333\214\330\256 \331\210\330\261\331\210\330\257 \331\210 \330\256\330\261\331\210\330\254 \332\251\330\247\330\261\330\250\330\261 \330\247\331\206\330\252\330\256\330\247\330\250 \330\264\330\257\331\207 \330\257\330\261 \330\247\333\214\331\206\330\254\330\247 \331\206\331\205\330\247\333\214\330\264 \330\257\330\247\330\257\331\207 \331\205\333\214 \330\264\331\210\330\257", nullptr));
#endif // QT_NO_WHATSTHIS
        label_8->setText(QApplication::translate("user_manegment_win", "\330\255\330\263\330\247\330\250 \331\207\330\247\333\214 \332\251\330\247\330\261\330\250\330\261:", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = accountstable->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("user_manegment_win", "\330\264\331\205\330\247\330\261\331\207 \330\255\330\263\330\247\330\250", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = accountstable->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("user_manegment_win", "\331\210\330\266\330\271\333\214\330\252", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = accountstable->horizontalHeaderItem(2);
        ___qtablewidgetitem4->setText(QApplication::translate("user_manegment_win", "\331\206\331\210\330\271 \330\255\330\263\330\247\330\250", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = accountstable->horizontalHeaderItem(3);
        ___qtablewidgetitem5->setText(QApplication::translate("user_manegment_win", "\331\205\331\210\330\254\331\210\330\257\333\214", nullptr));
#ifndef QT_NO_WHATSTHIS
        accountstable->setWhatsThis(QApplication::translate("user_manegment_win", "\330\252\331\205\330\247\331\205\333\214 \330\255\330\263\330\247\330\250 \331\207\330\247\333\214 \332\251\330\247\330\261\330\250\330\261 \330\257\330\261 \330\247\333\214\331\206\330\254\330\247 \331\206\331\205\330\247\333\214\330\264 \330\257\330\247\330\257\331\207 \331\205\333\214 \330\264\331\210\330\257", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        deleteuser->setToolTip(QApplication::translate("user_manegment_win", "\330\255\330\260\331\201 \332\251\330\247\330\261\330\250\330\261 \330\247\331\206\330\252\330\256\330\247\330\250 \330\264\330\257\331\207 \330\247\330\262 \330\263\333\214\330\263\330\252\331\205", nullptr));
#endif // QT_NO_TOOLTIP
        deleteuser->setText(QApplication::translate("user_manegment_win", "\330\255\330\260\331\201 \332\251\330\247\330\261\330\250\330\261", nullptr));
#ifndef QT_NO_TOOLTIP
        adduser->setToolTip(QApplication::translate("user_manegment_win", "\330\247\331\201\330\262\331\210\330\257\331\206 \332\251\330\247\330\261\330\250\330\261 \330\254\330\257\333\214\330\257 \330\250\331\207 \330\263\333\214\330\263\330\252\331\205", nullptr));
#endif // QT_NO_TOOLTIP
        adduser->setText(QApplication::translate("user_manegment_win", "\330\247\331\201\330\262\331\210\330\257\331\206 \332\251\330\247\330\261\330\250\330\261", nullptr));
        label->setText(QApplication::translate("user_manegment_win", "\332\251\330\247\330\261\330\250\330\261\330\247\331\206:", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = userstable->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("user_manegment_win", "\331\206\330\247\331\205", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = userstable->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("user_manegment_win", "\331\206\330\247\331\205 \330\256\330\247\331\206\331\210\330\247\330\257\332\257\333\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = userstable->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QApplication::translate("user_manegment_win", "\331\206\330\247\331\205 \332\251\330\247\330\261\330\250\330\261\333\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = userstable->horizontalHeaderItem(3);
        ___qtablewidgetitem9->setText(QApplication::translate("user_manegment_win", "\332\251\330\257\331\205\331\204\333\214", nullptr));
#ifndef QT_NO_WHATSTHIS
        userstable->setWhatsThis(QApplication::translate("user_manegment_win", "\330\252\331\205\330\247\331\205 \332\251\330\247\330\261\330\250\330\261\330\247\331\206 \330\250\330\247\331\206\332\251 \330\257\330\261 \330\247\333\214\331\206\330\254\330\247 \331\206\331\205\330\247\333\214\330\264 \330\257\330\247\330\257\331\207 \331\205\333\214 \330\264\331\210\331\206\330\257", nullptr));
#endif // QT_NO_WHATSTHIS
    } // retranslateUi

};

namespace Ui {
    class user_manegment_win: public Ui_user_manegment_win {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_MANEGMENT_WIN_H
