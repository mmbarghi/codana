QT       += core gui
QT += network
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    account.cpp \
    accounts_manegment_win.cpp \
    add_account_dia.cpp \
    add_profile_dia.cpp \
    add_user_dia.cpp \
    admin.cpp \
    admin_accounts_win.cpp \
    adminmenu.cpp \
    adminmenue.cpp \
    all_transactions_dia.cpp \
    card.cpp \
    checkdia.cpp \
    datas.cpp \
    deactive_accounts_win.cpp \
    deactive_cards_win.cpp \
    edit_profile_dia.cpp \
    longterm.cpp \
    main.cpp \
    mainwindow.cpp \
    pass_dia.cpp \
    person.cpp \
    saving.cpp \
    session.cpp \
    shorttermlegal.cpp \
    shorttermpersonal.cpp \
    transaction.cpp \
    transeaction_dia.cpp \
    transfer_first_dia.cpp \
    transfer_sec_dia.cpp \
    user.cpp \
    user_logs_dia.cpp \
    user_manegment_win.cpp \
    usermenu.cpp

HEADERS += \
    account.h \
    accounts_manegment_win.h \
    add_account_dia.h \
    add_profile_dia.h \
    add_user_dia.h \
    admin.h \
    admin_accounts_win.h \
    adminmenu.h \
    adminmenue.h \
    all_transactions_dia.h \
    card.h \
    checkdia.h \
    datas.h \
    deactive_accounts_win.h \
    deactive_cards_win.h \
    edit_profile_dia.h \
    longterm.h \
    mainwindow.h \
    pass_dia.h \
    person.h \
    saving.h \
    session.h \
    shorttermlegal.h \
    shorttermpersonal.h \
    transaction.h \
    transeaction_dia.h \
    transfer_first_dia.h \
    transfer_sec_dia.h \
    ui_accounts_manegment_win.h \
    ui_add_account_dia.h \
    ui_add_profile_dia.h \
    ui_add_user_dia.h \
    ui_admin_accounts_win.h \
    ui_adminmenu.h \
    ui_adminmenue.h \
    ui_all_transactions_dia.h \
    ui_checkdia.h \
    ui_deactive_accounts_win.h \
    ui_deactive_cards_win.h \
    ui_edit_profile_dia.h \
    ui_mainwindow.h \
    ui_pass_dia.h \
    ui_transeaction_dia.h \
    ui_transfer_first_dia.h \
    ui_transfer_sec_dia.h \
    ui_user_logs_dia.h \
    ui_user_manegment_win.h \
    ui_usermenu.h \
    user.h \
    user_logs_dia.h \
    user_manegment_win.h \
    usermenu.h

FORMS += \
    accounts_manegment_win.ui \
    add_account_dia.ui \
    add_profile_dia.ui \
    add_user_dia.ui \
    admin_accounts_win.ui \
    adminmenu.ui \
    adminmenue.ui \
    all_transactions_dia.ui \
    checkdia.ui \
    deactive_accounts_win.ui \
    deactive_cards_win.ui \
    edit_profile_dia.ui \
    mainwindow.ui \
    pass_dia.ui \
    transeaction_dia.ui \
    transfer_first_dia.ui \
    transfer_sec_dia.ui \
    user_logs_dia.ui \
    user_manegment_win.ui \
    usermenu.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    back_login.jpg \
    bank.pro.user \
    bank.pro.user.0954a9b \
    create_account_icon.png \
    data.json \
    edit_profile_icon.png \
    exit_icon.png \
    info_icon.png \
    lastUse.json \
    load.pro.user \
    login_bank.png \
    login_codana.png \
    login_logo.png \
    manege_account_icon.png \
    menu_back.jpg \
    mini_logo.png \
    mini_profile.png \
    profile90.png \
    sample.json \
    sample2.json \
    session_icon.png

SUBDIRS += \
    load.pro \
    load.pro \
    load.pro

RESOURCES += \
    pic.qrc \
    pic.qrc \
    pic.qrc
