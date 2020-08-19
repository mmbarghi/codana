/********************************************************************************
** Form generated from reading UI file 'add_profile_dia.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_PROFILE_DIA_H
#define UI_ADD_PROFILE_DIA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_add_profile_dia
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *add_profile_dia)
    {
        if (add_profile_dia->objectName().isEmpty())
            add_profile_dia->setObjectName(QString::fromUtf8("add_profile_dia"));
        add_profile_dia->resize(400, 300);
        buttonBox = new QDialogButtonBox(add_profile_dia);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(add_profile_dia);
        QObject::connect(buttonBox, SIGNAL(accepted()), add_profile_dia, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), add_profile_dia, SLOT(reject()));

        QMetaObject::connectSlotsByName(add_profile_dia);
    } // setupUi

    void retranslateUi(QDialog *add_profile_dia)
    {
        add_profile_dia->setWindowTitle(QApplication::translate("add_profile_dia", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_profile_dia: public Ui_add_profile_dia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_PROFILE_DIA_H
