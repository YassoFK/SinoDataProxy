/********************************************************************************
** Form generated from reading UI file 'ftpoptdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FTPOPTDLG_H
#define UI_FTPOPTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FtpOptDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *Label2;
    QPushButton *BtnKey;
    QComboBox *Addr;
    QLabel *Label1;
    QComboBox *Interval;
    QLabel *Label6;
    QLabel *LabelUser;
    QLineEdit *User;
    QLabel *Label3;
    QComboBox *Offset;
    QLabel *Label7;
    QLabel *LabelPasswd;
    QLineEdit *Passwd;
    QLabel *Label8;
    QComboBox *PathOffset;
    QLabel *Label9;
    QLabel *Label4;
    QLineEdit *RetryInterval;
    QLabel *Label5;
    QPushButton *BtnOk;
    QPushButton *BtnCancel;

    void setupUi(QWidget *FtpOptDialog)
    {
        if (FtpOptDialog->objectName().isEmpty())
            FtpOptDialog->setObjectName(QString::fromUtf8("FtpOptDialog"));
        FtpOptDialog->resize(451, 202);
        gridLayout = new QGridLayout(FtpOptDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Label2 = new QLabel(FtpOptDialog);
        Label2->setObjectName(QString::fromUtf8("Label2"));
        Label2->setEnabled(true);

        gridLayout->addWidget(Label2, 0, 0, 1, 3);

        BtnKey = new QPushButton(FtpOptDialog);
        BtnKey->setObjectName(QString::fromUtf8("BtnKey"));
        BtnKey->setEnabled(true);
        BtnKey->setFlat(true);

        gridLayout->addWidget(BtnKey, 0, 3, 1, 1);

        Addr = new QComboBox(FtpOptDialog);
        Addr->setObjectName(QString::fromUtf8("Addr"));
        Addr->setEnabled(true);
        Addr->setEditable(true);

        gridLayout->addWidget(Addr, 1, 0, 1, 6);

        Label1 = new QLabel(FtpOptDialog);
        Label1->setObjectName(QString::fromUtf8("Label1"));
        Label1->setEnabled(true);

        gridLayout->addWidget(Label1, 2, 0, 1, 1);

        Interval = new QComboBox(FtpOptDialog);
        Interval->addItem(QString());
        Interval->addItem(QString());
        Interval->addItem(QString());
        Interval->addItem(QString());
        Interval->addItem(QString());
        Interval->addItem(QString());
        Interval->addItem(QString());
        Interval->setObjectName(QString::fromUtf8("Interval"));
        Interval->setEnabled(true);
        Interval->setEditable(true);

        gridLayout->addWidget(Interval, 2, 1, 1, 1);

        Label6 = new QLabel(FtpOptDialog);
        Label6->setObjectName(QString::fromUtf8("Label6"));
        Label6->setEnabled(true);

        gridLayout->addWidget(Label6, 2, 2, 1, 1);

        LabelUser = new QLabel(FtpOptDialog);
        LabelUser->setObjectName(QString::fromUtf8("LabelUser"));
        LabelUser->setEnabled(true);

        gridLayout->addWidget(LabelUser, 2, 3, 1, 1);

        User = new QLineEdit(FtpOptDialog);
        User->setObjectName(QString::fromUtf8("User"));
        User->setEnabled(true);

        gridLayout->addWidget(User, 2, 4, 1, 2);

        Label3 = new QLabel(FtpOptDialog);
        Label3->setObjectName(QString::fromUtf8("Label3"));
        Label3->setEnabled(true);

        gridLayout->addWidget(Label3, 3, 0, 1, 1);

        Offset = new QComboBox(FtpOptDialog);
        Offset->addItem(QString());
        Offset->addItem(QString());
        Offset->addItem(QString());
        Offset->addItem(QString());
        Offset->addItem(QString());
        Offset->addItem(QString());
        Offset->addItem(QString());
        Offset->addItem(QString());
        Offset->addItem(QString());
        Offset->addItem(QString());
        Offset->addItem(QString());
        Offset->addItem(QString());
        Offset->setObjectName(QString::fromUtf8("Offset"));
        Offset->setEnabled(true);
        Offset->setEditable(true);

        gridLayout->addWidget(Offset, 3, 1, 1, 1);

        Label7 = new QLabel(FtpOptDialog);
        Label7->setObjectName(QString::fromUtf8("Label7"));
        Label7->setEnabled(true);

        gridLayout->addWidget(Label7, 3, 2, 1, 1);

        LabelPasswd = new QLabel(FtpOptDialog);
        LabelPasswd->setObjectName(QString::fromUtf8("LabelPasswd"));
        LabelPasswd->setEnabled(true);

        gridLayout->addWidget(LabelPasswd, 3, 3, 1, 1);

        Passwd = new QLineEdit(FtpOptDialog);
        Passwd->setObjectName(QString::fromUtf8("Passwd"));
        Passwd->setEnabled(true);

        gridLayout->addWidget(Passwd, 3, 4, 1, 2);

        Label8 = new QLabel(FtpOptDialog);
        Label8->setObjectName(QString::fromUtf8("Label8"));
        Label8->setEnabled(true);

        gridLayout->addWidget(Label8, 4, 0, 1, 1);

        PathOffset = new QComboBox(FtpOptDialog);
        PathOffset->addItem(QString());
        PathOffset->addItem(QString());
        PathOffset->addItem(QString());
        PathOffset->addItem(QString());
        PathOffset->addItem(QString());
        PathOffset->addItem(QString());
        PathOffset->addItem(QString());
        PathOffset->addItem(QString());
        PathOffset->addItem(QString());
        PathOffset->addItem(QString());
        PathOffset->addItem(QString());
        PathOffset->setObjectName(QString::fromUtf8("PathOffset"));
        PathOffset->setEnabled(true);
        PathOffset->setEditable(true);

        gridLayout->addWidget(PathOffset, 4, 1, 1, 1);

        Label9 = new QLabel(FtpOptDialog);
        Label9->setObjectName(QString::fromUtf8("Label9"));
        Label9->setEnabled(true);

        gridLayout->addWidget(Label9, 4, 2, 1, 1);

        Label4 = new QLabel(FtpOptDialog);
        Label4->setObjectName(QString::fromUtf8("Label4"));
        Label4->setEnabled(true);

        gridLayout->addWidget(Label4, 5, 0, 1, 1);

        RetryInterval = new QLineEdit(FtpOptDialog);
        RetryInterval->setObjectName(QString::fromUtf8("RetryInterval"));
        RetryInterval->setEnabled(true);

        gridLayout->addWidget(RetryInterval, 5, 1, 1, 1);

        Label5 = new QLabel(FtpOptDialog);
        Label5->setObjectName(QString::fromUtf8("Label5"));
        Label5->setEnabled(true);

        gridLayout->addWidget(Label5, 5, 2, 1, 1);

        BtnOk = new QPushButton(FtpOptDialog);
        BtnOk->setObjectName(QString::fromUtf8("BtnOk"));
        BtnOk->setEnabled(true);
        BtnOk->setAutoDefault(true);

        gridLayout->addWidget(BtnOk, 5, 3, 1, 2);

        BtnCancel = new QPushButton(FtpOptDialog);
        BtnCancel->setObjectName(QString::fromUtf8("BtnCancel"));
        BtnCancel->setEnabled(true);

        gridLayout->addWidget(BtnCancel, 5, 5, 1, 1);


        retranslateUi(FtpOptDialog);

        BtnOk->setDefault(true);


        QMetaObject::connectSlotsByName(FtpOptDialog);
    } // setupUi

    void retranslateUi(QWidget *FtpOptDialog)
    {
        FtpOptDialog->setWindowTitle(QCoreApplication::translate("FtpOptDialog", "FTP Options", nullptr));
#if QT_CONFIG(tooltip)
        FtpOptDialog->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label2->setText(QCoreApplication::translate("FtpOptDialog", "Download Address (address/file-path)", nullptr));
#if QT_CONFIG(tooltip)
        BtnKey->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnKey->setText(QCoreApplication::translate("FtpOptDialog", "?", nullptr));
#if QT_CONFIG(tooltip)
        Addr->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label1->setText(QCoreApplication::translate("FtpOptDialog", "Download Interval", nullptr));
        Interval->setItemText(0, QCoreApplication::translate("FtpOptDialog", "0", nullptr));
        Interval->setItemText(1, QCoreApplication::translate("FtpOptDialog", "1", nullptr));
        Interval->setItemText(2, QCoreApplication::translate("FtpOptDialog", "2", nullptr));
        Interval->setItemText(3, QCoreApplication::translate("FtpOptDialog", "3", nullptr));
        Interval->setItemText(4, QCoreApplication::translate("FtpOptDialog", "6", nullptr));
        Interval->setItemText(5, QCoreApplication::translate("FtpOptDialog", "12", nullptr));
        Interval->setItemText(6, QCoreApplication::translate("FtpOptDialog", "24", nullptr));

#if QT_CONFIG(tooltip)
        Interval->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label6->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label6->setText(QCoreApplication::translate("FtpOptDialog", "H", nullptr));
#if QT_CONFIG(tooltip)
        LabelUser->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LabelUser->setText(QCoreApplication::translate("FtpOptDialog", "User", nullptr));
#if QT_CONFIG(tooltip)
        User->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        User->setText(QCoreApplication::translate("FtpOptDialog", "anonymous", nullptr));
#if QT_CONFIG(tooltip)
        Label3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label3->setText(QCoreApplication::translate("FtpOptDialog", "Download Offset", nullptr));
        Offset->setItemText(0, QCoreApplication::translate("FtpOptDialog", "0", nullptr));
        Offset->setItemText(1, QCoreApplication::translate("FtpOptDialog", "1", nullptr));
        Offset->setItemText(2, QCoreApplication::translate("FtpOptDialog", "2", nullptr));
        Offset->setItemText(3, QCoreApplication::translate("FtpOptDialog", "3", nullptr));
        Offset->setItemText(4, QCoreApplication::translate("FtpOptDialog", "6", nullptr));
        Offset->setItemText(5, QCoreApplication::translate("FtpOptDialog", "9", nullptr));
        Offset->setItemText(6, QCoreApplication::translate("FtpOptDialog", "12", nullptr));
        Offset->setItemText(7, QCoreApplication::translate("FtpOptDialog", "15", nullptr));
        Offset->setItemText(8, QCoreApplication::translate("FtpOptDialog", "18", nullptr));
        Offset->setItemText(9, QCoreApplication::translate("FtpOptDialog", "21", nullptr));
        Offset->setItemText(10, QString());
        Offset->setItemText(11, QString());

#if QT_CONFIG(tooltip)
        Offset->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label7->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label7->setText(QCoreApplication::translate("FtpOptDialog", "H", nullptr));
#if QT_CONFIG(tooltip)
        LabelPasswd->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LabelPasswd->setText(QCoreApplication::translate("FtpOptDialog", "Password", nullptr));
#if QT_CONFIG(tooltip)
        Passwd->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Passwd->setText(QString());
#if QT_CONFIG(tooltip)
        Label8->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label8->setText(QCoreApplication::translate("FtpOptDialog", "Time Offset in Path", nullptr));
        PathOffset->setItemText(0, QCoreApplication::translate("FtpOptDialog", "0", nullptr));
        PathOffset->setItemText(1, QCoreApplication::translate("FtpOptDialog", "-1", nullptr));
        PathOffset->setItemText(2, QCoreApplication::translate("FtpOptDialog", "-2", nullptr));
        PathOffset->setItemText(3, QCoreApplication::translate("FtpOptDialog", "-3", nullptr));
        PathOffset->setItemText(4, QCoreApplication::translate("FtpOptDialog", "-6", nullptr));
        PathOffset->setItemText(5, QCoreApplication::translate("FtpOptDialog", "-9", nullptr));
        PathOffset->setItemText(6, QCoreApplication::translate("FtpOptDialog", "-12", nullptr));
        PathOffset->setItemText(7, QCoreApplication::translate("FtpOptDialog", "-15", nullptr));
        PathOffset->setItemText(8, QCoreApplication::translate("FtpOptDialog", "-18", nullptr));
        PathOffset->setItemText(9, QCoreApplication::translate("FtpOptDialog", "-21", nullptr));
        PathOffset->setItemText(10, QString());

#if QT_CONFIG(tooltip)
        PathOffset->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label9->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label9->setText(QCoreApplication::translate("FtpOptDialog", "H", nullptr));
#if QT_CONFIG(tooltip)
        Label4->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label4->setText(QCoreApplication::translate("FtpOptDialog", "Retry Interval", nullptr));
#if QT_CONFIG(tooltip)
        RetryInterval->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        RetryInterval->setText(QCoreApplication::translate("FtpOptDialog", "300", nullptr));
#if QT_CONFIG(tooltip)
        Label5->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label5->setText(QCoreApplication::translate("FtpOptDialog", "s", nullptr));
#if QT_CONFIG(tooltip)
        BtnOk->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnOk->setText(QCoreApplication::translate("FtpOptDialog", "&OK", nullptr));
#if QT_CONFIG(tooltip)
        BtnCancel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnCancel->setText(QCoreApplication::translate("FtpOptDialog", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FtpOptDialog: public Ui_FtpOptDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FTPOPTDLG_H
