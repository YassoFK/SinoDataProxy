/********************************************************************************
** Form generated from reading UI file 'serioptdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIOPTDLG_H
#define UI_SERIOPTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SerialOptDialog
{
public:
    QGridLayout *gridLayout;
    QComboBox *Port;
    QLabel *Label3;
    QComboBox *BitRate;
    QLabel *Label1;
    QLabel *Label2;
    QComboBox *ByteSize;
    QLabel *Label4;
    QLabel *Label5;
    QLabel *Label8;
    QComboBox *FlowCtr;
    QComboBox *StopBits;
    QComboBox *Parity;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *BtnCmd;
    QPushButton *BtnOk;
    QPushButton *BtnCancel;

    void setupUi(QWidget *SerialOptDialog)
    {
        if (SerialOptDialog->objectName().isEmpty())
            SerialOptDialog->setObjectName(QString::fromUtf8("SerialOptDialog"));
        SerialOptDialog->resize(540, 156);
        gridLayout = new QGridLayout(SerialOptDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Port = new QComboBox(SerialOptDialog);
        Port->addItem(QString());
        Port->setObjectName(QString::fromUtf8("Port"));
        Port->setEnabled(true);

        gridLayout->addWidget(Port, 0, 1, 3, 1);

        Label3 = new QLabel(SerialOptDialog);
        Label3->setObjectName(QString::fromUtf8("Label3"));
        Label3->setEnabled(true);

        gridLayout->addWidget(Label3, 1, 0, 1, 1);

        BitRate = new QComboBox(SerialOptDialog);
        BitRate->addItem(QString());
        BitRate->addItem(QString());
        BitRate->addItem(QString());
        BitRate->addItem(QString());
        BitRate->addItem(QString());
        BitRate->addItem(QString());
        BitRate->addItem(QString());
        BitRate->addItem(QString());
        BitRate->addItem(QString());
        BitRate->addItem(QString());
        BitRate->addItem(QString());
        BitRate->setObjectName(QString::fromUtf8("BitRate"));
        BitRate->setEnabled(true);

        gridLayout->addWidget(BitRate, 3, 1, 3, 1);

        Label1 = new QLabel(SerialOptDialog);
        Label1->setObjectName(QString::fromUtf8("Label1"));
        Label1->setEnabled(true);

        gridLayout->addWidget(Label1, 4, 0, 1, 1);

        Label2 = new QLabel(SerialOptDialog);
        Label2->setObjectName(QString::fromUtf8("Label2"));
        Label2->setEnabled(true);

        gridLayout->addWidget(Label2, 6, 0, 1, 1);

        ByteSize = new QComboBox(SerialOptDialog);
        ByteSize->addItem(QString());
        ByteSize->addItem(QString());
        ByteSize->setObjectName(QString::fromUtf8("ByteSize"));
        ByteSize->setEnabled(true);

        gridLayout->addWidget(ByteSize, 6, 1, 1, 1);

        Label4 = new QLabel(SerialOptDialog);
        Label4->setObjectName(QString::fromUtf8("Label4"));
        Label4->setEnabled(true);

        gridLayout->addWidget(Label4, 1, 2, 1, 1);

        Label5 = new QLabel(SerialOptDialog);
        Label5->setObjectName(QString::fromUtf8("Label5"));
        Label5->setEnabled(true);

        gridLayout->addWidget(Label5, 4, 2, 1, 1);

        Label8 = new QLabel(SerialOptDialog);
        Label8->setObjectName(QString::fromUtf8("Label8"));
        Label8->setEnabled(true);

        gridLayout->addWidget(Label8, 6, 2, 1, 1);

        FlowCtr = new QComboBox(SerialOptDialog);
        FlowCtr->addItem(QString());
        FlowCtr->addItem(QString());
        FlowCtr->addItem(QString());
        FlowCtr->setObjectName(QString::fromUtf8("FlowCtr"));
        FlowCtr->setEnabled(true);

        gridLayout->addWidget(FlowCtr, 6, 3, 1, 1);

        StopBits = new QComboBox(SerialOptDialog);
        StopBits->addItem(QString());
        StopBits->addItem(QString());
        StopBits->setObjectName(QString::fromUtf8("StopBits"));
        StopBits->setEnabled(true);

        gridLayout->addWidget(StopBits, 4, 3, 1, 1);

        Parity = new QComboBox(SerialOptDialog);
        Parity->addItem(QString());
        Parity->addItem(QString());
        Parity->addItem(QString());
        Parity->setObjectName(QString::fromUtf8("Parity"));
        Parity->setEnabled(true);

        gridLayout->addWidget(Parity, 1, 3, 1, 1);

        widget = new QWidget(SerialOptDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        BtnCmd = new QPushButton(widget);
        BtnCmd->setObjectName(QString::fromUtf8("BtnCmd"));
        BtnCmd->setEnabled(true);

        horizontalLayout->addWidget(BtnCmd);

        BtnOk = new QPushButton(widget);
        BtnOk->setObjectName(QString::fromUtf8("BtnOk"));
        BtnOk->setEnabled(true);
        BtnOk->setAutoDefault(true);

        horizontalLayout->addWidget(BtnOk);

        BtnCancel = new QPushButton(widget);
        BtnCancel->setObjectName(QString::fromUtf8("BtnCancel"));
        BtnCancel->setEnabled(true);

        horizontalLayout->addWidget(BtnCancel);


        gridLayout->addWidget(widget, 7, 0, 1, 4);


        retranslateUi(SerialOptDialog);

        BtnOk->setDefault(true);


        QMetaObject::connectSlotsByName(SerialOptDialog);
    } // setupUi

    void retranslateUi(QWidget *SerialOptDialog)
    {
        SerialOptDialog->setWindowTitle(QCoreApplication::translate("SerialOptDialog", "Serial Options", nullptr));
#if QT_CONFIG(tooltip)
        SerialOptDialog->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Port->setItemText(0, QCoreApplication::translate("SerialOptDialog", "COM1", nullptr));

#if QT_CONFIG(tooltip)
        Port->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label3->setText(QCoreApplication::translate("SerialOptDialog", "Port", nullptr));
        BitRate->setItemText(0, QCoreApplication::translate("SerialOptDialog", "300", nullptr));
        BitRate->setItemText(1, QCoreApplication::translate("SerialOptDialog", "600", nullptr));
        BitRate->setItemText(2, QCoreApplication::translate("SerialOptDialog", "1200", nullptr));
        BitRate->setItemText(3, QCoreApplication::translate("SerialOptDialog", "2400", nullptr));
        BitRate->setItemText(4, QCoreApplication::translate("SerialOptDialog", "4800", nullptr));
        BitRate->setItemText(5, QCoreApplication::translate("SerialOptDialog", "9600", nullptr));
        BitRate->setItemText(6, QCoreApplication::translate("SerialOptDialog", "19200", nullptr));
        BitRate->setItemText(7, QCoreApplication::translate("SerialOptDialog", "38400", nullptr));
        BitRate->setItemText(8, QCoreApplication::translate("SerialOptDialog", "57600", nullptr));
        BitRate->setItemText(9, QCoreApplication::translate("SerialOptDialog", "115200", nullptr));
        BitRate->setItemText(10, QCoreApplication::translate("SerialOptDialog", "230400", nullptr));

#if QT_CONFIG(tooltip)
        BitRate->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label1->setText(QCoreApplication::translate("SerialOptDialog", "Bitrate (bps)", nullptr));
#if QT_CONFIG(tooltip)
        Label2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label2->setText(QCoreApplication::translate("SerialOptDialog", "Byte Size", nullptr));
        ByteSize->setItemText(0, QCoreApplication::translate("SerialOptDialog", "7 bits", nullptr));
        ByteSize->setItemText(1, QCoreApplication::translate("SerialOptDialog", "8 bits", nullptr));

#if QT_CONFIG(tooltip)
        ByteSize->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label4->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label4->setText(QCoreApplication::translate("SerialOptDialog", "Parity", nullptr));
#if QT_CONFIG(tooltip)
        Label5->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label5->setText(QCoreApplication::translate("SerialOptDialog", "Stop Bits", nullptr));
#if QT_CONFIG(tooltip)
        Label8->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label8->setText(QCoreApplication::translate("SerialOptDialog", "Flow Control", nullptr));
        FlowCtr->setItemText(0, QCoreApplication::translate("SerialOptDialog", "None", nullptr));
        FlowCtr->setItemText(1, QCoreApplication::translate("SerialOptDialog", "RTS/CTS", nullptr));
        FlowCtr->setItemText(2, QCoreApplication::translate("SerialOptDialog", "XON/XOFF", nullptr));

#if QT_CONFIG(tooltip)
        FlowCtr->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        StopBits->setItemText(0, QCoreApplication::translate("SerialOptDialog", "1 bit", nullptr));
        StopBits->setItemText(1, QCoreApplication::translate("SerialOptDialog", "2 bits", nullptr));

#if QT_CONFIG(tooltip)
        StopBits->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Parity->setItemText(0, QCoreApplication::translate("SerialOptDialog", "None", nullptr));
        Parity->setItemText(1, QCoreApplication::translate("SerialOptDialog", "Even", nullptr));
        Parity->setItemText(2, QCoreApplication::translate("SerialOptDialog", "Odd", nullptr));

#if QT_CONFIG(tooltip)
        Parity->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        BtnCmd->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnCmd->setText(QCoreApplication::translate("SerialOptDialog", "&Commands...", nullptr));
#if QT_CONFIG(tooltip)
        BtnOk->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnOk->setText(QCoreApplication::translate("SerialOptDialog", "&OK", nullptr));
#if QT_CONFIG(tooltip)
        BtnCancel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnCancel->setText(QCoreApplication::translate("SerialOptDialog", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SerialOptDialog: public Ui_SerialOptDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIOPTDLG_H
