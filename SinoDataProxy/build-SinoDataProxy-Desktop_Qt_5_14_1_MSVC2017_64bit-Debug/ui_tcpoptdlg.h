/********************************************************************************
** Form generated from reading UI file 'tcpoptdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCPOPTDLG_H
#define UI_TCPOPTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TcpOptDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *LabelUser;
    QComboBox *MntPnt;
    QLabel *LabelMntPnt;
    QLabel *LabelStr;
    QLineEdit *User;
    QComboBox *Addr;
    QLabel *LabelAddr;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *BtnNtrip;
    QPushButton *BtnOk;
    QPushButton *BtnCancel;
    QLabel *LabelPasswd;
    QLabel *LabelPort;
    QLineEdit *Port;
    QLineEdit *Passwd;
    QLineEdit *Str;

    void setupUi(QWidget *TcpOptDialog)
    {
        if (TcpOptDialog->objectName().isEmpty())
            TcpOptDialog->setObjectName(QString::fromUtf8("TcpOptDialog"));
        TcpOptDialog->resize(438, 210);
        gridLayout = new QGridLayout(TcpOptDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        LabelUser = new QLabel(TcpOptDialog);
        LabelUser->setObjectName(QString::fromUtf8("LabelUser"));
        LabelUser->setEnabled(true);

        gridLayout->addWidget(LabelUser, 4, 3, 1, 1);

        MntPnt = new QComboBox(TcpOptDialog);
        MntPnt->setObjectName(QString::fromUtf8("MntPnt"));
        MntPnt->setEnabled(true);
        MntPnt->setEditable(true);

        gridLayout->addWidget(MntPnt, 5, 1, 1, 1);

        LabelMntPnt = new QLabel(TcpOptDialog);
        LabelMntPnt->setObjectName(QString::fromUtf8("LabelMntPnt"));
        LabelMntPnt->setEnabled(true);

        gridLayout->addWidget(LabelMntPnt, 4, 1, 1, 1);

        LabelStr = new QLabel(TcpOptDialog);
        LabelStr->setObjectName(QString::fromUtf8("LabelStr"));
        LabelStr->setEnabled(true);

        gridLayout->addWidget(LabelStr, 7, 1, 1, 1);

        User = new QLineEdit(TcpOptDialog);
        User->setObjectName(QString::fromUtf8("User"));
        User->setEnabled(true);

        gridLayout->addWidget(User, 5, 3, 1, 1);

        Addr = new QComboBox(TcpOptDialog);
        Addr->setObjectName(QString::fromUtf8("Addr"));
        Addr->setEnabled(true);
        Addr->setEditable(true);

        gridLayout->addWidget(Addr, 2, 1, 1, 3);

        LabelAddr = new QLabel(TcpOptDialog);
        LabelAddr->setObjectName(QString::fromUtf8("LabelAddr"));
        LabelAddr->setEnabled(true);

        gridLayout->addWidget(LabelAddr, 0, 1, 1, 3);

        widget = new QWidget(TcpOptDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        BtnNtrip = new QPushButton(widget);
        BtnNtrip->setObjectName(QString::fromUtf8("BtnNtrip"));
        BtnNtrip->setEnabled(true);

        horizontalLayout->addWidget(BtnNtrip);

        BtnOk = new QPushButton(widget);
        BtnOk->setObjectName(QString::fromUtf8("BtnOk"));
        BtnOk->setEnabled(true);
        BtnOk->setAutoDefault(true);

        horizontalLayout->addWidget(BtnOk);

        BtnCancel = new QPushButton(widget);
        BtnCancel->setObjectName(QString::fromUtf8("BtnCancel"));
        BtnCancel->setEnabled(true);

        horizontalLayout->addWidget(BtnCancel);


        gridLayout->addWidget(widget, 8, 1, 1, 4);

        LabelPasswd = new QLabel(TcpOptDialog);
        LabelPasswd->setObjectName(QString::fromUtf8("LabelPasswd"));
        LabelPasswd->setEnabled(true);

        gridLayout->addWidget(LabelPasswd, 4, 4, 1, 1);

        LabelPort = new QLabel(TcpOptDialog);
        LabelPort->setObjectName(QString::fromUtf8("LabelPort"));
        LabelPort->setEnabled(true);

        gridLayout->addWidget(LabelPort, 0, 4, 1, 1);

        Port = new QLineEdit(TcpOptDialog);
        Port->setObjectName(QString::fromUtf8("Port"));
        Port->setEnabled(true);

        gridLayout->addWidget(Port, 2, 4, 1, 1);

        Passwd = new QLineEdit(TcpOptDialog);
        Passwd->setObjectName(QString::fromUtf8("Passwd"));
        Passwd->setEnabled(true);
        Passwd->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(Passwd, 5, 4, 1, 1);

        Str = new QLineEdit(TcpOptDialog);
        Str->setObjectName(QString::fromUtf8("Str"));
        Str->setEnabled(true);

        gridLayout->addWidget(Str, 7, 3, 1, 2);


        retranslateUi(TcpOptDialog);

        BtnOk->setDefault(true);


        QMetaObject::connectSlotsByName(TcpOptDialog);
    } // setupUi

    void retranslateUi(QWidget *TcpOptDialog)
    {
        TcpOptDialog->setWindowTitle(QCoreApplication::translate("TcpOptDialog", "TCP Options", nullptr));
#if QT_CONFIG(tooltip)
        TcpOptDialog->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        LabelUser->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LabelUser->setText(QCoreApplication::translate("TcpOptDialog", "User-ID", nullptr));
#if QT_CONFIG(tooltip)
        MntPnt->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        LabelMntPnt->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LabelMntPnt->setText(QCoreApplication::translate("TcpOptDialog", "Mountpoint", nullptr));
#if QT_CONFIG(tooltip)
        LabelStr->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LabelStr->setText(QCoreApplication::translate("TcpOptDialog", "String", nullptr));
#if QT_CONFIG(tooltip)
        User->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        User->setText(QString());
#if QT_CONFIG(tooltip)
        Addr->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        LabelAddr->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LabelAddr->setText(QCoreApplication::translate("TcpOptDialog", "TCP Server Address", nullptr));
#if QT_CONFIG(tooltip)
        BtnNtrip->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnNtrip->setText(QCoreApplication::translate("TcpOptDialog", "&Ntrip...", nullptr));
#if QT_CONFIG(tooltip)
        BtnOk->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnOk->setText(QCoreApplication::translate("TcpOptDialog", "&OK", nullptr));
#if QT_CONFIG(tooltip)
        BtnCancel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnCancel->setText(QCoreApplication::translate("TcpOptDialog", "&Cancel", nullptr));
#if QT_CONFIG(tooltip)
        LabelPasswd->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LabelPasswd->setText(QCoreApplication::translate("TcpOptDialog", "Password", nullptr));
#if QT_CONFIG(tooltip)
        LabelPort->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LabelPort->setText(QCoreApplication::translate("TcpOptDialog", "Port", nullptr));
#if QT_CONFIG(tooltip)
        Port->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Port->setText(QString());
#if QT_CONFIG(tooltip)
        Passwd->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Passwd->setText(QString());
#if QT_CONFIG(tooltip)
        Str->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Str->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TcpOptDialog: public Ui_TcpOptDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCPOPTDLG_H
