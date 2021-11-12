QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets serialport

CONFIG += c++11
#static

#QMAKE_CFLAGS = -g
#QMAKE_LFLAGS +=  -g

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
INCLUDEPATH += ../appcmn_qt

LIBS += D:\Vmwareshared\code\SinoDataProxy\RTKLib.lib \
        "C:\Program Files (x86)\Windows Kits\10\Lib\10.0.19041.0\um\x64\WinMM.Lib" \
        "C:\Program Files (x86)\Windows Kits\10\Lib\10.0.19041.0\um\x64\WS2_32.Lib"

SOURCES += \
    connectionedit.cpp \
    convdlg.cpp \
    main.cpp \
    mainwindow.cpp \
    svrmain.cpp \
    svroptdlg.cpp\
    ../appcmn_qt/aboutdlg.cpp \
    ../appcmn_qt/tcpoptdlg.cpp \
    ../appcmn_qt/serioptdlg.cpp \
    ../appcmn_qt/cmdoptdlg.cpp \
    ../appcmn_qt/console.cpp \
    ../appcmn_qt/fileoptdlg.cpp \
    ../appcmn_qt/ftpoptdlg.cpp \
    ../appcmn_qt/refdlg.cpp \
    ../appcmn_qt/keydlg.cpp

HEADERS += \
    connectionedit.h \
    convdlg.h \
    mainwindow.h \
    svrmain.h \
    svroptdlg.h\
    ../appcmn_qt/tcpoptdlg.h \
    ../appcmn_qt/serioptdlg.h \
    ../appcmn_qt/aboutdlg.h \
    ../appcmn_qt/cmdoptdlg.h \
    ../appcmn_qt/console.h \
    ../appcmn_qt/fileoptdlg.h \
    ../appcmn_qt/ftpoptdlg.h \
    ../appcmn_qt/refdlg.h \
    ../appcmn_qt/keydlg.h

FORMS += \
    connectionedit.ui \
    convdlg.ui \
    mainwindow.ui \
    svrmain.ui \
    svroptdlg.ui\
    ../appcmn_qt/tcpoptdlg.ui \
    ../appcmn_qt/serioptdlg.ui \
    ../appcmn_qt/aboutdlg.ui \
    ../appcmn_qt/cmdoptdlg.ui \
    ../appcmn_qt/console.ui \
    ../appcmn_qt/fileoptdlg.ui \
    ../appcmn_qt/ftpoptdlg.ui \
    ../appcmn_qt/refdlg.ui \
    ../appcmn_qt/keydlg.ui

RESOURCES +=  \
    strsvr_qt.qrc

#DISTFILES += \
#    strsvr_qt.rc

#RC_FILE = strsvr_qt.rc

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    build-SinoDataProxy-Desktop-Release/databranch.ico \
    strsvr_Icon.ico




