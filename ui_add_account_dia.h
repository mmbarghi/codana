/********************************************************************************
** Form generated from reading UI file 'add_account_dia.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_ACCOUNT_DIA_H
#define UI_ADD_ACCOUNT_DIA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add_account_dia
{
public:
    QDialogButtonBox *buttonBox;
    QGroupBox *alladminbox;
    QLabel *label_3;
    QTableWidget *allusername;
    QLineEdit *addled;
    QPushButton *addbtn;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QSpinBox *spinBox;
    QLabel *label;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QComboBox *typecombo;
    QLabel *label_2;

    void setupUi(QDialog *add_account_dia)
    {
        if (add_account_dia->objectName().isEmpty())
            add_account_dia->setObjectName(QString::fromUtf8("add_account_dia"));
        add_account_dia->resize(444, 436);
        buttonBox = new QDialogButtonBox(add_account_dia);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(270, 410, 166, 21));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        alladminbox = new QGroupBox(add_account_dia);
        alladminbox->setObjectName(QString::fromUtf8("alladminbox"));
        alladminbox->setGeometry(QRect(10, 110, 426, 291));
        label_3 = new QLabel(alladminbox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(240, 10, 181, 20));
        allusername = new QTableWidget(alladminbox);
        if (allusername->columnCount() < 1)
            allusername->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        allusername->setHorizontalHeaderItem(0, __qtablewidgetitem);
        allusername->setObjectName(QString::fromUtf8("allusername"));
        allusername->setGeometry(QRect(20, 80, 391, 201));
        allusername->setAlternatingRowColors(true);
        allusername->horizontalHeader()->setStretchLastSection(true);
        addled = new QLineEdit(alladminbox);
        addled->setObjectName(QString::fromUtf8("addled"));
        addled->setGeometry(QRect(110, 50, 301, 21));
        addbtn = new QPushButton(alladminbox);
        addbtn->setObjectName(QString::fromUtf8("addbtn"));
        addbtn->setGeometry(QRect(20, 50, 80, 21));
        layoutWidget = new QWidget(add_account_dia);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(9, 9, 421, 72));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        spinBox = new QSpinBox(layoutWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMaximum(999999999);
        spinBox->setValue(0);

        horizontalLayout->addWidget(spinBox);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        layoutWidget1 = new QWidget(add_account_dia);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 80, 421, 24));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        typecombo = new QComboBox(layoutWidget1);
        typecombo->addItem(QString());
        typecombo->addItem(QString());
        typecombo->addItem(QString());
        typecombo->addItem(QString());
        typecombo->setObjectName(QString::fromUtf8("typecombo"));

        horizontalLayout_2->addWidget(typecombo);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);


        retranslateUi(add_account_dia);
        QObject::connect(buttonBox, SIGNAL(accepted()), add_account_dia, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), add_account_dia, SLOT(reject()));

        QMetaObject::connectSlotsByName(add_account_dia);
    } // setupUi

    void retranslateUi(QDialog *add_account_dia)
    {
        add_account_dia->setWindowTitle(QApplication::translate("add_account_dia", "Dialog", nullptr));
        alladminbox->setTitle(QString());
        label_3->setText(QApplication::translate("add_account_dia", "\331\206\330\247\331\205 \332\251\330\247\330\261\330\250\330\261\333\214 \330\263\330\247\333\214\330\261 \330\265\330\247\330\255\330\250\333\214\331\206 \330\255\330\263\330\247\330\250:", nullptr));
        QTableWidgetItem *___qtablewidgetitem = allusername->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("add_account_dia", "Usernames", nullptr));
        addbtn->setText(QApplication::translate("add_account_dia", "&\330\247\331\201\330\262\331\210\330\257\331\206", nullptr));
        spinBox->setSuffix(QString());
        label->setText(QApplication::translate("add_account_dia", "\331\205\331\210\330\254\331\210\330\257\333\214 \330\247\331\210\331\204\333\214\331\207:", nullptr));
        typecombo->setItemText(0, QApplication::translate("add_account_dia", "\330\255\330\263\330\247\330\250 \330\263\331\276\330\261\330\257\331\207 \331\202\330\261\330\266 \330\247\331\204\330\255\330\263\331\206\331\207 \331\276\330\263 \330\247\331\206\330\257\330\247\330\262", nullptr));
        typecombo->setItemText(1, QApplication::translate("add_account_dia", "\330\255\330\263\330\247\330\250 \330\263\331\276\330\261\330\257\331\207 \330\263\330\261\331\205\330\247\333\214\331\207 \332\257\330\260\330\247\330\261\333\214 \332\251\331\210\330\252\330\247\331\207 \331\205\330\257\330\252", nullptr));
        typecombo->setItemText(2, QApplication::translate("add_account_dia", "\330\255\330\263\330\247\330\250 \330\263\331\276\330\261\330\257\331\207 \330\263\330\261\331\205\330\247\333\214\331\207 \332\257\330\260\330\247\330\261\333\214 \330\255\331\202\331\210\331\202\333\214", nullptr));
        typecombo->setItemText(3, QApplication::translate("add_account_dia", "\330\255\330\263\330\247\330\250 \330\263\331\276\330\261\330\257\331\207 \332\257\330\260\330\247\330\261\333\214 \330\250\331\204\331\206\330\257 \331\205\330\257\330\252", nullptr));

        label_2->setText(QApplication::translate("add_account_dia", "\331\206\331\210\330\271 \330\255\330\263\330\247\330\250:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_account_dia: public Ui_add_account_dia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_ACCOUNT_DIA_H
