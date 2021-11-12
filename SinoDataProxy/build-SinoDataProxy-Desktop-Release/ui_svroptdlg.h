/********************************************************************************
** Form generated from reading UI file 'svroptdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SVROPTDLG_H
#define UI_SVROPTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SvrOptDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *Label1;
    QLineEdit *SvrBuffSize;
    QLabel *Label6;
    QLineEdit *AvePeriodRate;
    QLabel *Label2;
    QLineEdit *SvrCycle;
    QLabel *Label9;
    QLineEdit *FileSwapMarginE;
    QLabel *Label3;
    QLineEdit *DataTimeout;
    QLabel *Label7;
    QComboBox *TraceLevelS;
    QLabel *Label5;
    QLineEdit *ConnectInterval;
    QCheckBox *NmeaReqT;
    QLineEdit *NmeaCycle;
    QCheckBox *StaInfoSel;
    QLineEdit *StationId;
    QLabel *Label8;
    QLineEdit *AntPos1;
    QLineEdit *AntPos2;
    QLineEdit *AntPos3;
    QPushButton *BtnPos;
    QLabel *Label11;
    QLineEdit *AntOff1;
    QLineEdit *AntOff2;
    QLineEdit *AntOff3;
    QLabel *Label12;
    QLineEdit *AntInfo;
    QLabel *Label13;
    QLineEdit *RcvInfo;
    QLabel *Label4;
    QLineEdit *LocalDir;
    QPushButton *BtnLocalDir;
    QLabel *Label10;
    QLineEdit *ProxyAddr;
    QPushButton *BtnOk;
    QPushButton *BtnCancel;

    void setupUi(QWidget *SvrOptDialog)
    {
        if (SvrOptDialog->objectName().isEmpty())
            SvrOptDialog->setObjectName(QString::fromUtf8("SvrOptDialog"));
        SvrOptDialog->resize(636, 324);
        gridLayout = new QGridLayout(SvrOptDialog);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Label1 = new QLabel(SvrOptDialog);
        Label1->setObjectName(QString::fromUtf8("Label1"));
        Label1->setEnabled(true);

        gridLayout->addWidget(Label1, 0, 0, 1, 1);

        SvrBuffSize = new QLineEdit(SvrOptDialog);
        SvrBuffSize->setObjectName(QString::fromUtf8("SvrBuffSize"));
        SvrBuffSize->setEnabled(true);

        gridLayout->addWidget(SvrBuffSize, 0, 2, 1, 1);

        Label6 = new QLabel(SvrOptDialog);
        Label6->setObjectName(QString::fromUtf8("Label6"));
        Label6->setEnabled(true);

        gridLayout->addWidget(Label6, 0, 3, 1, 3);

        AvePeriodRate = new QLineEdit(SvrOptDialog);
        AvePeriodRate->setObjectName(QString::fromUtf8("AvePeriodRate"));
        AvePeriodRate->setEnabled(true);

        gridLayout->addWidget(AvePeriodRate, 0, 6, 1, 2);

        Label2 = new QLabel(SvrOptDialog);
        Label2->setObjectName(QString::fromUtf8("Label2"));
        Label2->setEnabled(true);

        gridLayout->addWidget(Label2, 1, 0, 1, 1);

        SvrCycle = new QLineEdit(SvrOptDialog);
        SvrCycle->setObjectName(QString::fromUtf8("SvrCycle"));
        SvrCycle->setEnabled(true);

        gridLayout->addWidget(SvrCycle, 1, 2, 1, 1);

        Label9 = new QLabel(SvrOptDialog);
        Label9->setObjectName(QString::fromUtf8("Label9"));
        Label9->setEnabled(true);

        gridLayout->addWidget(Label9, 1, 3, 1, 3);

        FileSwapMarginE = new QLineEdit(SvrOptDialog);
        FileSwapMarginE->setObjectName(QString::fromUtf8("FileSwapMarginE"));
        FileSwapMarginE->setEnabled(true);

        gridLayout->addWidget(FileSwapMarginE, 1, 6, 1, 2);

        Label3 = new QLabel(SvrOptDialog);
        Label3->setObjectName(QString::fromUtf8("Label3"));
        Label3->setEnabled(true);

        gridLayout->addWidget(Label3, 2, 0, 1, 2);

        DataTimeout = new QLineEdit(SvrOptDialog);
        DataTimeout->setObjectName(QString::fromUtf8("DataTimeout"));
        DataTimeout->setEnabled(true);

        gridLayout->addWidget(DataTimeout, 2, 2, 1, 1);

        Label7 = new QLabel(SvrOptDialog);
        Label7->setObjectName(QString::fromUtf8("Label7"));
        Label7->setEnabled(true);

        gridLayout->addWidget(Label7, 2, 3, 1, 3);

        TraceLevelS = new QComboBox(SvrOptDialog);
        TraceLevelS->addItem(QString());
        TraceLevelS->addItem(QString());
        TraceLevelS->addItem(QString());
        TraceLevelS->addItem(QString());
        TraceLevelS->addItem(QString());
        TraceLevelS->addItem(QString());
        TraceLevelS->setObjectName(QString::fromUtf8("TraceLevelS"));
        TraceLevelS->setEnabled(true);

        gridLayout->addWidget(TraceLevelS, 2, 6, 1, 2);

        Label5 = new QLabel(SvrOptDialog);
        Label5->setObjectName(QString::fromUtf8("Label5"));
        Label5->setEnabled(true);

        gridLayout->addWidget(Label5, 3, 0, 1, 2);

        ConnectInterval = new QLineEdit(SvrOptDialog);
        ConnectInterval->setObjectName(QString::fromUtf8("ConnectInterval"));
        ConnectInterval->setEnabled(true);

        gridLayout->addWidget(ConnectInterval, 3, 2, 1, 1);

        NmeaReqT = new QCheckBox(SvrOptDialog);
        NmeaReqT->setObjectName(QString::fromUtf8("NmeaReqT"));
        NmeaReqT->setChecked(false);

        gridLayout->addWidget(NmeaReqT, 3, 3, 1, 3);

        NmeaCycle = new QLineEdit(SvrOptDialog);
        NmeaCycle->setObjectName(QString::fromUtf8("NmeaCycle"));
        NmeaCycle->setEnabled(true);

        gridLayout->addWidget(NmeaCycle, 3, 6, 1, 2);

        StaInfoSel = new QCheckBox(SvrOptDialog);
        StaInfoSel->setObjectName(QString::fromUtf8("StaInfoSel"));
        StaInfoSel->setChecked(false);

        gridLayout->addWidget(StaInfoSel, 4, 0, 1, 1);

        StationId = new QLineEdit(SvrOptDialog);
        StationId->setObjectName(QString::fromUtf8("StationId"));
        StationId->setEnabled(true);

        gridLayout->addWidget(StationId, 4, 2, 1, 1);

        Label8 = new QLabel(SvrOptDialog);
        Label8->setObjectName(QString::fromUtf8("Label8"));
        Label8->setEnabled(true);

        gridLayout->addWidget(Label8, 5, 0, 1, 1);

        AntPos1 = new QLineEdit(SvrOptDialog);
        AntPos1->setObjectName(QString::fromUtf8("AntPos1"));
        AntPos1->setEnabled(true);

        gridLayout->addWidget(AntPos1, 5, 1, 1, 2);

        AntPos2 = new QLineEdit(SvrOptDialog);
        AntPos2->setObjectName(QString::fromUtf8("AntPos2"));
        AntPos2->setEnabled(true);

        gridLayout->addWidget(AntPos2, 5, 3, 1, 2);

        AntPos3 = new QLineEdit(SvrOptDialog);
        AntPos3->setObjectName(QString::fromUtf8("AntPos3"));
        AntPos3->setEnabled(true);

        gridLayout->addWidget(AntPos3, 5, 5, 1, 2);

        BtnPos = new QPushButton(SvrOptDialog);
        BtnPos->setObjectName(QString::fromUtf8("BtnPos"));
        BtnPos->setEnabled(true);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        BtnPos->setPalette(palette);
        BtnPos->setFlat(false);

        gridLayout->addWidget(BtnPos, 5, 7, 1, 1);

        Label11 = new QLabel(SvrOptDialog);
        Label11->setObjectName(QString::fromUtf8("Label11"));
        Label11->setEnabled(true);

        gridLayout->addWidget(Label11, 6, 0, 1, 1);

        AntOff1 = new QLineEdit(SvrOptDialog);
        AntOff1->setObjectName(QString::fromUtf8("AntOff1"));
        AntOff1->setEnabled(true);

        gridLayout->addWidget(AntOff1, 6, 1, 1, 2);

        AntOff2 = new QLineEdit(SvrOptDialog);
        AntOff2->setObjectName(QString::fromUtf8("AntOff2"));
        AntOff2->setEnabled(true);

        gridLayout->addWidget(AntOff2, 6, 3, 1, 2);

        AntOff3 = new QLineEdit(SvrOptDialog);
        AntOff3->setObjectName(QString::fromUtf8("AntOff3"));
        AntOff3->setEnabled(true);

        gridLayout->addWidget(AntOff3, 6, 5, 1, 3);

        Label12 = new QLabel(SvrOptDialog);
        Label12->setObjectName(QString::fromUtf8("Label12"));
        Label12->setEnabled(true);

        gridLayout->addWidget(Label12, 7, 0, 1, 1);

        AntInfo = new QLineEdit(SvrOptDialog);
        AntInfo->setObjectName(QString::fromUtf8("AntInfo"));
        AntInfo->setEnabled(true);

        gridLayout->addWidget(AntInfo, 7, 1, 1, 7);

        Label13 = new QLabel(SvrOptDialog);
        Label13->setObjectName(QString::fromUtf8("Label13"));
        Label13->setEnabled(true);

        gridLayout->addWidget(Label13, 8, 0, 1, 1);

        RcvInfo = new QLineEdit(SvrOptDialog);
        RcvInfo->setObjectName(QString::fromUtf8("RcvInfo"));
        RcvInfo->setEnabled(true);

        gridLayout->addWidget(RcvInfo, 8, 1, 1, 7);

        Label4 = new QLabel(SvrOptDialog);
        Label4->setObjectName(QString::fromUtf8("Label4"));
        Label4->setEnabled(true);

        gridLayout->addWidget(Label4, 9, 0, 1, 1);

        LocalDir = new QLineEdit(SvrOptDialog);
        LocalDir->setObjectName(QString::fromUtf8("LocalDir"));
        LocalDir->setEnabled(true);

        gridLayout->addWidget(LocalDir, 9, 1, 1, 6);

        BtnLocalDir = new QPushButton(SvrOptDialog);
        BtnLocalDir->setObjectName(QString::fromUtf8("BtnLocalDir"));
        BtnLocalDir->setEnabled(true);
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        BtnLocalDir->setPalette(palette1);
        BtnLocalDir->setFlat(false);

        gridLayout->addWidget(BtnLocalDir, 9, 7, 1, 1);

        Label10 = new QLabel(SvrOptDialog);
        Label10->setObjectName(QString::fromUtf8("Label10"));
        Label10->setEnabled(true);

        gridLayout->addWidget(Label10, 10, 0, 1, 1);

        ProxyAddr = new QLineEdit(SvrOptDialog);
        ProxyAddr->setObjectName(QString::fromUtf8("ProxyAddr"));
        ProxyAddr->setEnabled(true);

        gridLayout->addWidget(ProxyAddr, 10, 1, 1, 7);

        BtnOk = new QPushButton(SvrOptDialog);
        BtnOk->setObjectName(QString::fromUtf8("BtnOk"));
        BtnOk->setEnabled(true);
        BtnOk->setFlat(false);

        gridLayout->addWidget(BtnOk, 11, 2, 1, 2);

        BtnCancel = new QPushButton(SvrOptDialog);
        BtnCancel->setObjectName(QString::fromUtf8("BtnCancel"));
        BtnCancel->setEnabled(true);
        BtnCancel->setFlat(false);

        gridLayout->addWidget(BtnCancel, 11, 4, 1, 4);


        retranslateUi(SvrOptDialog);

        QMetaObject::connectSlotsByName(SvrOptDialog);
    } // setupUi

    void retranslateUi(QWidget *SvrOptDialog)
    {
        SvrOptDialog->setWindowTitle(QCoreApplication::translate("SvrOptDialog", "Options", nullptr));
#if QT_CONFIG(tooltip)
        SvrOptDialog->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label1->setText(QCoreApplication::translate("SvrOptDialog", "Buffer Size (bytes)", nullptr));
#if QT_CONFIG(tooltip)
        SvrBuffSize->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        SvrBuffSize->setText(QCoreApplication::translate("SvrOptDialog", "16384", nullptr));
#if QT_CONFIG(tooltip)
        Label6->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label6->setText(QCoreApplication::translate("SvrOptDialog", "Period of Rate (ms)", nullptr));
#if QT_CONFIG(tooltip)
        AvePeriodRate->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        AvePeriodRate->setText(QCoreApplication::translate("SvrOptDialog", "1000", nullptr));
#if QT_CONFIG(tooltip)
        Label2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label2->setText(QCoreApplication::translate("SvrOptDialog", "Server Cycle  (ms)", nullptr));
#if QT_CONFIG(tooltip)
        SvrCycle->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        SvrCycle->setText(QCoreApplication::translate("SvrOptDialog", "100", nullptr));
#if QT_CONFIG(tooltip)
        Label9->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label9->setText(QCoreApplication::translate("SvrOptDialog", "File Swap Margin (s)", nullptr));
#if QT_CONFIG(tooltip)
        FileSwapMarginE->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        FileSwapMarginE->setText(QCoreApplication::translate("SvrOptDialog", "30", nullptr));
#if QT_CONFIG(tooltip)
        Label3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label3->setText(QCoreApplication::translate("SvrOptDialog", "Inactive Timeout (ms)", nullptr));
#if QT_CONFIG(tooltip)
        DataTimeout->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        DataTimeout->setText(QCoreApplication::translate("SvrOptDialog", "10000", nullptr));
#if QT_CONFIG(tooltip)
        Label7->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label7->setText(QCoreApplication::translate("SvrOptDialog", "Output Debug Trace", nullptr));
        TraceLevelS->setItemText(0, QCoreApplication::translate("SvrOptDialog", "None", nullptr));
        TraceLevelS->setItemText(1, QCoreApplication::translate("SvrOptDialog", "Level 1", nullptr));
        TraceLevelS->setItemText(2, QCoreApplication::translate("SvrOptDialog", "Level 2", nullptr));
        TraceLevelS->setItemText(3, QCoreApplication::translate("SvrOptDialog", "Level 3", nullptr));
        TraceLevelS->setItemText(4, QCoreApplication::translate("SvrOptDialog", "Level 4", nullptr));
        TraceLevelS->setItemText(5, QCoreApplication::translate("SvrOptDialog", "Level 5", nullptr));

#if QT_CONFIG(tooltip)
        TraceLevelS->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label5->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label5->setText(QCoreApplication::translate("SvrOptDialog", "Reconnect Interval  (ms)", nullptr));
#if QT_CONFIG(tooltip)
        ConnectInterval->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        ConnectInterval->setText(QCoreApplication::translate("SvrOptDialog", "2000", nullptr));
#if QT_CONFIG(tooltip)
        NmeaReqT->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        NmeaReqT->setText(QCoreApplication::translate("SvrOptDialog", "NMEA Cycle (ms)", nullptr));
#if QT_CONFIG(tooltip)
        NmeaCycle->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        NmeaCycle->setText(QCoreApplication::translate("SvrOptDialog", "0", nullptr));
#if QT_CONFIG(tooltip)
        StaInfoSel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        StaInfoSel->setText(QCoreApplication::translate("SvrOptDialog", "Station ID", nullptr));
#if QT_CONFIG(tooltip)
        StationId->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        StationId->setText(QCoreApplication::translate("SvrOptDialog", "1234", nullptr));
#if QT_CONFIG(tooltip)
        Label8->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label8->setText(QCoreApplication::translate("SvrOptDialog", "Lat/Lon/Height", nullptr));
#if QT_CONFIG(tooltip)
        AntPos1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        AntPos1->setText(QCoreApplication::translate("SvrOptDialog", "000.000000000", nullptr));
#if QT_CONFIG(tooltip)
        AntPos2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        AntPos2->setText(QCoreApplication::translate("SvrOptDialog", "000.000000000", nullptr));
#if QT_CONFIG(tooltip)
        AntPos3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        AntPos3->setText(QCoreApplication::translate("SvrOptDialog", "0000.000", nullptr));
#if QT_CONFIG(tooltip)
        BtnPos->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnPos->setText(QCoreApplication::translate("SvrOptDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        Label11->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label11->setText(QCoreApplication::translate("SvrOptDialog", "Offset E/N/U (m)", nullptr));
#if QT_CONFIG(tooltip)
        AntOff1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        AntOff1->setText(QCoreApplication::translate("SvrOptDialog", "0.000", nullptr));
#if QT_CONFIG(tooltip)
        AntOff2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        AntOff2->setText(QCoreApplication::translate("SvrOptDialog", "0.000", nullptr));
#if QT_CONFIG(tooltip)
        AntOff3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        AntOff3->setText(QCoreApplication::translate("SvrOptDialog", "0.000", nullptr));
#if QT_CONFIG(tooltip)
        Label12->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label12->setText(QCoreApplication::translate("SvrOptDialog", "Antenna Info", nullptr));
#if QT_CONFIG(tooltip)
        AntInfo->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        AntInfo->setText(QCoreApplication::translate("SvrOptDialog", "AntInfo", nullptr));
#if QT_CONFIG(tooltip)
        Label13->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label13->setText(QCoreApplication::translate("SvrOptDialog", "Receiver Info", nullptr));
#if QT_CONFIG(tooltip)
        RcvInfo->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        RcvInfo->setText(QCoreApplication::translate("SvrOptDialog", "Edit1", nullptr));
#if QT_CONFIG(tooltip)
        Label4->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label4->setText(QCoreApplication::translate("SvrOptDialog", "FTP/HTTP Local Dir", nullptr));
#if QT_CONFIG(tooltip)
        LocalDir->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LocalDir->setText(QString());
#if QT_CONFIG(tooltip)
        BtnLocalDir->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnLocalDir->setText(QCoreApplication::translate("SvrOptDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        Label10->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label10->setText(QCoreApplication::translate("SvrOptDialog", "HTTP/NTRIP Proxy", nullptr));
#if QT_CONFIG(tooltip)
        ProxyAddr->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        ProxyAddr->setText(QString());
#if QT_CONFIG(tooltip)
        BtnOk->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnOk->setText(QCoreApplication::translate("SvrOptDialog", "&OK", nullptr));
#if QT_CONFIG(tooltip)
        BtnCancel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnCancel->setText(QCoreApplication::translate("SvrOptDialog", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SvrOptDialog: public Ui_SvrOptDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SVROPTDLG_H
