QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    add_waiter.cpp \
    admin_information.cpp \
    admin_management.cpp \
    admin_page.cpp \
    main.cpp \
    mainwindow.cpp \
    order.cpp \
    people.cpp \
    remove_waiter.cpp \
    table.cpp \
    waiter_information.cpp \
    waiter_page.cpp

HEADERS += \
    add_waiter.h \
    admin_information.h \
    admin_management.h \
    admin_page.h \
    databaseheader.h \
    mainwindow.h \
    order.h \
    people.h \
    remove_waiter.h \
    table.h \
    waiter_information.h \
    waiter_page.h \
    waiter_page.h

FORMS += \
    add_waiter.ui \
    admin_management.ui \
    admin_page.ui \
    mainwindow.ui \
    order.ui \
    remove_waiter.ui \
    table.ui \
    waiter_page.ui

TRANSLATIONS += \
    ShineCafe_en_US.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
