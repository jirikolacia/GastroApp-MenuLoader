QT       += core gui
QT       += sql
QT       += svg
QT       += multimedia


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dlg_newmeal.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    dlg_newmeal.h \
    mainwindow.h

FORMS += \
    dlg_newmeal.ui \
    mainwindow.ui

TRANSLATIONS += \
    GastroApp_cs_CZ.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
