/********************************************************************************
** Form generated from reading UI file 'add_user_dia.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_USER_DIA_H
#define UI_ADD_USER_DIA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_add_user_dia
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *nameled;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lastnameled;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *idled;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QDateEdit *dateled;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *emailled;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *usernameled;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *passwordled;
    QLabel *label_7;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *add_user_dia)
    {
        if (add_user_dia->objectName().isEmpty())
            add_user_dia->setObjectName(QString::fromUtf8("add_user_dia"));
        add_user_dia->resize(400, 300);
        verticalLayout = new QVBoxLayout(add_user_dia);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        nameled = new QLineEdit(add_user_dia);
        nameled->setObjectName(QString::fromUtf8("nameled"));

        horizontalLayout->addWidget(nameled);

        label = new QLabel(add_user_dia);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lastnameled = new QLineEdit(add_user_dia);
        lastnameled->setObjectName(QString::fromUtf8("lastnameled"));

        horizontalLayout_2->addWidget(lastnameled);

        label_2 = new QLabel(add_user_dia);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        idled = new QLineEdit(add_user_dia);
        idled->setObjectName(QString::fromUtf8("idled"));

        horizontalLayout_3->addWidget(idled);

        label_3 = new QLabel(add_user_dia);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        dateled = new QDateEdit(add_user_dia);
        dateled->setObjectName(QString::fromUtf8("dateled"));
        dateled->setCalendarPopup(true);

        horizontalLayout_4->addWidget(dateled);

        label_4 = new QLabel(add_user_dia);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        emailled = new QLineEdit(add_user_dia);
        emailled->setObjectName(QString::fromUtf8("emailled"));

        horizontalLayout_5->addWidget(emailled);

        label_5 = new QLabel(add_user_dia);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        usernameled = new QLineEdit(add_user_dia);
        usernameled->setObjectName(QString::fromUtf8("usernameled"));

        horizontalLayout_6->addWidget(usernameled);

        label_6 = new QLabel(add_user_dia);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        passwordled = new QLineEdit(add_user_dia);
        passwordled->setObjectName(QString::fromUtf8("passwordled"));
        passwordled->setEchoMode(QLineEdit::Password);

        horizontalLayout_7->addWidget(passwordled);

        label_7 = new QLabel(add_user_dia);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_7->addWidget(label_7);


        verticalLayout->addLayout(horizontalLayout_7);

        buttonBox = new QDialogButtonBox(add_user_dia);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(add_user_dia);
        QObject::connect(buttonBox, SIGNAL(accepted()), add_user_dia, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), add_user_dia, SLOT(reject()));

        QMetaObject::connectSlotsByName(add_user_dia);
    } // setupUi

    void retranslateUi(QDialog *add_user_dia)
    {
        add_user_dia->setWindowTitle(QApplication::translate("add_user_dia", "Dialog", nullptr));
        label->setText(QApplication::translate("add_user_dia", "\331\206\330\247\331\205:", nullptr));
        label_2->setText(QApplication::translate("add_user_dia", "\331\206\330\247\331\205 \330\256\330\247\331\206\331\210\330\247\330\257\332\257\333\214:", nullptr));
        label_3->setText(QApplication::translate("add_user_dia", "\332\251\330\257\331\205\331\204\333\214:", nullptr));
        dateled->setDisplayFormat(QApplication::translate("add_user_dia", "yyyy/MM/dd", nullptr));
        label_4->setText(QApplication::translate("add_user_dia", "\330\252\330\247\330\261\333\214\330\256 \330\252\331\210\331\204\330\257:", nullptr));
        label_5->setText(QApplication::translate("add_user_dia", "\330\247\333\214\331\205\333\214\331\204:", nullptr));
        label_6->setText(QApplication::translate("add_user_dia", "\331\206\330\247\331\205 \332\251\330\247\330\261\330\250\330\261\333\214:", nullptr));
        label_7->setText(QApplication::translate("add_user_dia", "\330\261\331\205\330\262 \330\271\330\250\331\210\330\261:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_user_dia: public Ui_add_user_dia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_USER_DIA_H
