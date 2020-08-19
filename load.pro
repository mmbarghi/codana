QT       += core gui

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
    admin.cpp \
    adminmenu.cpp \
    adminmenue.cpp \
    card.cpp \
    checkdia.cpp \
    datas.cpp \
    edit_profile_dia.cpp \
    longterm.cpp \
    main.cpp \
    mainwindow.cpp \
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
    usermenu.cpp

HEADERS += \
    account.h \
    accounts_manegment_win.h \
    add_account_dia.h \
    add_profile_dia.h \
    admin.h \
    adminmenu.h \
    adminmenue.h \
    card.h \
    checkdia.h \
    datas.h \
    edit_profile_dia.h \
    longterm.h \
    mainwindow.h \
    person.h \
    saving.h \
    session.h \
    shorttermlegal.h \
    shorttermpersonal.h \
    transaction.h \
    transeaction_dia.h \
    transfer_first_dia.h \
    transfer_sec_dia.h \
    user.h \
    user_logs_dia.h \
    usermenu.h

FORMS += \
    accounts_manegment_win.ui \
    add_account_dia.ui \
    add_profile_dia.ui \
    adminmenu.ui \
    adminmenue.ui \
    checkdia.ui \
    edit_profile_dia.ui \
    mainwindow.ui \
    transeaction_dia.ui \
    transfer_first_dia.ui \
    transfer_sec_dia.ui \
    user_logs_dia.ui \
    usermenu.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    pic.qrc

DISTFILES += \
    load.pro.user
