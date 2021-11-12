/********************************************************************************
** Form generated from reading UI file 'svrmain.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SVRMAIN_H
#define UI_SVRMAIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainForm
{
public:
    QAction *MenuExpand;
    QAction *MenuStart;
    QAction *MenuStop;
    QAction *MenuExit;
    QVBoxLayout *verticalLayout_2;
    QWidget *Panel3;
    QVBoxLayout *verticalLayout;
    QWidget *Panel2;
    QHBoxLayout *horizontalLayout;
    QLabel *Time;
    QLabel *Label8;
    QLabel *ConTime;
    QWidget *Panel1;
    QGridLayout *gridLayout;
    QLabel *Label5;
    QLabel *Label3;
    QLabel *Label4;
    QLabel *Label1;
    QLabel *Label6;
    QLabel *Label7;
    QLabel *IndInput;
    QLabel *LabelInput;
    QComboBox *Input;
    QPushButton *BtnInput;
    QPushButton *BtnCmd;
    QLabel *InputByte;
    QLabel *InputBps;
    QLabel *Label2;
    QLabel *IndOutput1;
    QLabel *LabelOutput1;
    QComboBox *Output1;
    QPushButton *BtnOutput1;
    QPushButton *BtnConv1;
    QLabel *Output1Byte;
    QLabel *Output1Bps;
    QLabel *IndOutput2;
    QLabel *LabelOutput2;
    QComboBox *Output2;
    QPushButton *BtnOutput2;
    QPushButton *BtnConv2;
    QLabel *Output2Byte;
    QLabel *Output2Bps;
    QLabel *IndOutput3;
    QLabel *LabelOutput3;
    QComboBox *Output3;
    QPushButton *BtnOutput3;
    QPushButton *BtnConv3;
    QLabel *Output3Byte;
    QLabel *Output3Bps;
    QProgressBar *Progress;
    QWidget *Panel4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *BtnStrMon;
    QLabel *Message;
    QPushButton *BtnTaskIcon;
    QPushButton *BtnAbout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *BtnStart;
    QPushButton *BtnStop;
    QPushButton *BtnOpt;
    QPushButton *BtnExit;

    void setupUi(QWidget *MainForm)
    {
        if (MainForm->objectName().isEmpty())
            MainForm->setObjectName(QString::fromUtf8("MainForm"));
        MainForm->resize(504, 321);
        MenuExpand = new QAction(MainForm);
        MenuExpand->setObjectName(QString::fromUtf8("MenuExpand"));
        MenuStart = new QAction(MainForm);
        MenuStart->setObjectName(QString::fromUtf8("MenuStart"));
        MenuStop = new QAction(MainForm);
        MenuStop->setObjectName(QString::fromUtf8("MenuStop"));
        MenuExit = new QAction(MainForm);
        MenuExit->setObjectName(QString::fromUtf8("MenuExit"));
        verticalLayout_2 = new QVBoxLayout(MainForm);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        Panel3 = new QWidget(MainForm);
        Panel3->setObjectName(QString::fromUtf8("Panel3"));
        Panel3->setEnabled(true);
        Panel3->setLayoutDirection(Qt::LeftToRight);
        verticalLayout = new QVBoxLayout(Panel3);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Panel2 = new QWidget(Panel3);
        Panel2->setObjectName(QString::fromUtf8("Panel2"));
        Panel2->setEnabled(true);
        Panel2->setLayoutDirection(Qt::LeftToRight);
        horizontalLayout = new QHBoxLayout(Panel2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        Time = new QLabel(Panel2);
        Time->setObjectName(QString::fromUtf8("Time"));
        Time->setEnabled(true);
        QPalette palette;
        QBrush brush(QColor(128, 128, 128, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        Time->setPalette(palette);

        horizontalLayout->addWidget(Time);

        Label8 = new QLabel(Panel2);
        Label8->setObjectName(QString::fromUtf8("Label8"));
        Label8->setEnabled(true);
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        Label8->setPalette(palette1);

        horizontalLayout->addWidget(Label8);

        ConTime = new QLabel(Panel2);
        ConTime->setObjectName(QString::fromUtf8("ConTime"));
        ConTime->setEnabled(true);
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        ConTime->setPalette(palette2);

        horizontalLayout->addWidget(ConTime);


        verticalLayout->addWidget(Panel2);

        Panel1 = new QWidget(Panel3);
        Panel1->setObjectName(QString::fromUtf8("Panel1"));
        Panel1->setEnabled(true);
        Panel1->setLayoutDirection(Qt::LeftToRight);
        gridLayout = new QGridLayout(Panel1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Label5 = new QLabel(Panel1);
        Label5->setObjectName(QString::fromUtf8("Label5"));
        Label5->setEnabled(true);

        gridLayout->addWidget(Label5, 0, 1, 1, 1);

        Label3 = new QLabel(Panel1);
        Label3->setObjectName(QString::fromUtf8("Label3"));
        Label3->setEnabled(true);

        gridLayout->addWidget(Label3, 0, 2, 1, 1);

        Label4 = new QLabel(Panel1);
        Label4->setObjectName(QString::fromUtf8("Label4"));
        Label4->setEnabled(true);

        gridLayout->addWidget(Label4, 0, 3, 1, 1);

        Label1 = new QLabel(Panel1);
        Label1->setObjectName(QString::fromUtf8("Label1"));
        Label1->setEnabled(true);

        gridLayout->addWidget(Label1, 0, 5, 1, 1);

        Label6 = new QLabel(Panel1);
        Label6->setObjectName(QString::fromUtf8("Label6"));
        Label6->setEnabled(true);

        gridLayout->addWidget(Label6, 0, 6, 1, 1);

        Label7 = new QLabel(Panel1);
        Label7->setObjectName(QString::fromUtf8("Label7"));
        Label7->setEnabled(true);

        gridLayout->addWidget(Label7, 0, 7, 1, 1);

        IndInput = new QLabel(Panel1);
        IndInput->setObjectName(QString::fromUtf8("IndInput"));
        IndInput->setEnabled(true);
        IndInput->setMinimumSize(QSize(25, 25));
        IndInput->setMaximumSize(QSize(25, 25));
        IndInput->setLayoutDirection(Qt::LeftToRight);
        IndInput->setFrameShape(QFrame::Box);
        IndInput->setFrameShadow(QFrame::Sunken);
        IndInput->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(IndInput, 1, 0, 1, 1);

        LabelInput = new QLabel(Panel1);
        LabelInput->setObjectName(QString::fromUtf8("LabelInput"));
        LabelInput->setEnabled(true);
        QPalette palette3;
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        LabelInput->setPalette(palette3);

        gridLayout->addWidget(LabelInput, 1, 1, 1, 1);

        Input = new QComboBox(Panel1);
        Input->addItem(QString());
        Input->addItem(QString());
        Input->addItem(QString());
        Input->addItem(QString());
        Input->addItem(QString());
        Input->addItem(QString());
        Input->addItem(QString());
        Input->setObjectName(QString::fromUtf8("Input"));
        Input->setEnabled(true);

        gridLayout->addWidget(Input, 1, 2, 1, 1);

        BtnInput = new QPushButton(Panel1);
        BtnInput->setObjectName(QString::fromUtf8("BtnInput"));
        BtnInput->setEnabled(true);
        BtnInput->setFlat(false);

        gridLayout->addWidget(BtnInput, 1, 3, 1, 2);

        BtnCmd = new QPushButton(Panel1);
        BtnCmd->setObjectName(QString::fromUtf8("BtnCmd"));
        BtnCmd->setEnabled(true);
        BtnCmd->setFlat(false);

        gridLayout->addWidget(BtnCmd, 1, 5, 1, 1);

        InputByte = new QLabel(Panel1);
        InputByte->setObjectName(QString::fromUtf8("InputByte"));
        InputByte->setEnabled(true);
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        InputByte->setPalette(palette4);

        gridLayout->addWidget(InputByte, 1, 6, 1, 1);

        InputBps = new QLabel(Panel1);
        InputBps->setObjectName(QString::fromUtf8("InputBps"));
        InputBps->setEnabled(true);
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        InputBps->setPalette(palette5);

        gridLayout->addWidget(InputBps, 1, 7, 1, 1);

        Label2 = new QLabel(Panel1);
        Label2->setObjectName(QString::fromUtf8("Label2"));
        Label2->setEnabled(true);

        gridLayout->addWidget(Label2, 2, 4, 1, 2);

        IndOutput1 = new QLabel(Panel1);
        IndOutput1->setObjectName(QString::fromUtf8("IndOutput1"));
        IndOutput1->setEnabled(true);
        IndOutput1->setMinimumSize(QSize(25, 25));
        IndOutput1->setMaximumSize(QSize(25, 25));
        IndOutput1->setLayoutDirection(Qt::LeftToRight);
        IndOutput1->setFrameShape(QFrame::Box);
        IndOutput1->setFrameShadow(QFrame::Sunken);
        IndOutput1->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(IndOutput1, 3, 0, 1, 1);

        LabelOutput1 = new QLabel(Panel1);
        LabelOutput1->setObjectName(QString::fromUtf8("LabelOutput1"));
        LabelOutput1->setEnabled(true);
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        LabelOutput1->setPalette(palette6);

        gridLayout->addWidget(LabelOutput1, 3, 1, 1, 1);

        Output1 = new QComboBox(Panel1);
        Output1->addItem(QString());
        Output1->addItem(QString());
        Output1->addItem(QString());
        Output1->addItem(QString());
        Output1->addItem(QString());
        Output1->addItem(QString());
        Output1->addItem(QString());
        Output1->setObjectName(QString::fromUtf8("Output1"));
        Output1->setEnabled(true);

        gridLayout->addWidget(Output1, 3, 2, 1, 1);

        BtnOutput1 = new QPushButton(Panel1);
        BtnOutput1->setObjectName(QString::fromUtf8("BtnOutput1"));
        BtnOutput1->setEnabled(true);
        BtnOutput1->setFlat(false);

        gridLayout->addWidget(BtnOutput1, 3, 3, 1, 2);

        BtnConv1 = new QPushButton(Panel1);
        BtnConv1->setObjectName(QString::fromUtf8("BtnConv1"));
        BtnConv1->setEnabled(false);
        BtnConv1->setFlat(false);

        gridLayout->addWidget(BtnConv1, 3, 5, 1, 1);

        Output1Byte = new QLabel(Panel1);
        Output1Byte->setObjectName(QString::fromUtf8("Output1Byte"));
        Output1Byte->setEnabled(true);
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Output1Byte->setPalette(palette7);

        gridLayout->addWidget(Output1Byte, 3, 6, 1, 1);

        Output1Bps = new QLabel(Panel1);
        Output1Bps->setObjectName(QString::fromUtf8("Output1Bps"));
        Output1Bps->setEnabled(true);
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Output1Bps->setPalette(palette8);

        gridLayout->addWidget(Output1Bps, 3, 7, 1, 1);

        IndOutput2 = new QLabel(Panel1);
        IndOutput2->setObjectName(QString::fromUtf8("IndOutput2"));
        IndOutput2->setEnabled(true);
        IndOutput2->setMinimumSize(QSize(25, 25));
        IndOutput2->setMaximumSize(QSize(25, 25));
        IndOutput2->setLayoutDirection(Qt::LeftToRight);
        IndOutput2->setFrameShape(QFrame::Box);
        IndOutput2->setFrameShadow(QFrame::Sunken);
        IndOutput2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(IndOutput2, 4, 0, 1, 1);

        LabelOutput2 = new QLabel(Panel1);
        LabelOutput2->setObjectName(QString::fromUtf8("LabelOutput2"));
        LabelOutput2->setEnabled(true);
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        LabelOutput2->setPalette(palette9);

        gridLayout->addWidget(LabelOutput2, 4, 1, 1, 1);

        Output2 = new QComboBox(Panel1);
        Output2->addItem(QString());
        Output2->addItem(QString());
        Output2->addItem(QString());
        Output2->addItem(QString());
        Output2->addItem(QString());
        Output2->addItem(QString());
        Output2->addItem(QString());
        Output2->setObjectName(QString::fromUtf8("Output2"));
        Output2->setEnabled(true);

        gridLayout->addWidget(Output2, 4, 2, 1, 1);

        BtnOutput2 = new QPushButton(Panel1);
        BtnOutput2->setObjectName(QString::fromUtf8("BtnOutput2"));
        BtnOutput2->setEnabled(true);
        BtnOutput2->setFlat(false);

        gridLayout->addWidget(BtnOutput2, 4, 3, 1, 2);

        BtnConv2 = new QPushButton(Panel1);
        BtnConv2->setObjectName(QString::fromUtf8("BtnConv2"));
        BtnConv2->setEnabled(false);
        BtnConv2->setFlat(false);

        gridLayout->addWidget(BtnConv2, 4, 5, 1, 1);

        Output2Byte = new QLabel(Panel1);
        Output2Byte->setObjectName(QString::fromUtf8("Output2Byte"));
        Output2Byte->setEnabled(true);
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Output2Byte->setPalette(palette10);

        gridLayout->addWidget(Output2Byte, 4, 6, 1, 1);

        Output2Bps = new QLabel(Panel1);
        Output2Bps->setObjectName(QString::fromUtf8("Output2Bps"));
        Output2Bps->setEnabled(true);
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Output2Bps->setPalette(palette11);

        gridLayout->addWidget(Output2Bps, 4, 7, 1, 1);

        IndOutput3 = new QLabel(Panel1);
        IndOutput3->setObjectName(QString::fromUtf8("IndOutput3"));
        IndOutput3->setEnabled(true);
        IndOutput3->setMinimumSize(QSize(25, 25));
        IndOutput3->setMaximumSize(QSize(25, 25));
        IndOutput3->setLayoutDirection(Qt::LeftToRight);
        IndOutput3->setFrameShape(QFrame::Box);
        IndOutput3->setFrameShadow(QFrame::Sunken);
        IndOutput3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(IndOutput3, 5, 0, 1, 1);

        LabelOutput3 = new QLabel(Panel1);
        LabelOutput3->setObjectName(QString::fromUtf8("LabelOutput3"));
        LabelOutput3->setEnabled(true);
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        LabelOutput3->setPalette(palette12);

        gridLayout->addWidget(LabelOutput3, 5, 1, 1, 1);

        Output3 = new QComboBox(Panel1);
        Output3->addItem(QString());
        Output3->addItem(QString());
        Output3->addItem(QString());
        Output3->addItem(QString());
        Output3->addItem(QString());
        Output3->addItem(QString());
        Output3->addItem(QString());
        Output3->setObjectName(QString::fromUtf8("Output3"));
        Output3->setEnabled(true);

        gridLayout->addWidget(Output3, 5, 2, 1, 1);

        BtnOutput3 = new QPushButton(Panel1);
        BtnOutput3->setObjectName(QString::fromUtf8("BtnOutput3"));
        BtnOutput3->setEnabled(true);
        BtnOutput3->setFlat(false);

        gridLayout->addWidget(BtnOutput3, 5, 3, 1, 2);

        BtnConv3 = new QPushButton(Panel1);
        BtnConv3->setObjectName(QString::fromUtf8("BtnConv3"));
        BtnConv3->setEnabled(false);
        BtnConv3->setFlat(false);

        gridLayout->addWidget(BtnConv3, 5, 5, 1, 1);

        Output3Byte = new QLabel(Panel1);
        Output3Byte->setObjectName(QString::fromUtf8("Output3Byte"));
        Output3Byte->setEnabled(true);
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Output3Byte->setPalette(palette13);

        gridLayout->addWidget(Output3Byte, 5, 6, 1, 1);

        Output3Bps = new QLabel(Panel1);
        Output3Bps->setObjectName(QString::fromUtf8("Output3Bps"));
        Output3Bps->setEnabled(true);
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Output3Bps->setPalette(palette14);

        gridLayout->addWidget(Output3Bps, 5, 7, 1, 1);


        verticalLayout->addWidget(Panel1);

        Progress = new QProgressBar(Panel3);
        Progress->setObjectName(QString::fromUtf8("Progress"));
        Progress->setEnabled(true);
        Progress->setMinimum(0);
        Progress->setMaximum(100);
        Progress->setValue(0);
        Progress->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(Progress);

        Panel4 = new QWidget(Panel3);
        Panel4->setObjectName(QString::fromUtf8("Panel4"));
        Panel4->setEnabled(true);
        Panel4->setLayoutDirection(Qt::LeftToRight);
        horizontalLayout_2 = new QHBoxLayout(Panel4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        BtnStrMon = new QPushButton(Panel4);
        BtnStrMon->setObjectName(QString::fromUtf8("BtnStrMon"));
        BtnStrMon->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BtnStrMon->sizePolicy().hasHeightForWidth());
        BtnStrMon->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/buttons/sqr.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnStrMon->setIcon(icon);
        BtnStrMon->setFlat(true);

        horizontalLayout_2->addWidget(BtnStrMon);

        Message = new QLabel(Panel4);
        Message->setObjectName(QString::fromUtf8("Message"));
        Message->setEnabled(true);
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        Message->setPalette(palette15);

        horizontalLayout_2->addWidget(Message);

        BtnTaskIcon = new QPushButton(Panel4);
        BtnTaskIcon->setObjectName(QString::fromUtf8("BtnTaskIcon"));
        BtnTaskIcon->setEnabled(true);
        sizePolicy.setHeightForWidth(BtnTaskIcon->sizePolicy().hasHeightForWidth());
        BtnTaskIcon->setSizePolicy(sizePolicy);
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        BtnTaskIcon->setPalette(palette16);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/buttons/ttray.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnTaskIcon->setIcon(icon1);
        BtnTaskIcon->setFlat(true);

        horizontalLayout_2->addWidget(BtnTaskIcon);

        BtnAbout = new QPushButton(Panel4);
        BtnAbout->setObjectName(QString::fromUtf8("BtnAbout"));
        BtnAbout->setEnabled(true);
        sizePolicy.setHeightForWidth(BtnAbout->sizePolicy().hasHeightForWidth());
        BtnAbout->setSizePolicy(sizePolicy);
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        BtnAbout->setPalette(palette17);
        BtnAbout->setFlat(true);

        horizontalLayout_2->addWidget(BtnAbout);


        verticalLayout->addWidget(Panel4);


        verticalLayout_2->addWidget(Panel3);

        widget = new QWidget(MainForm);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        BtnStart = new QPushButton(widget);
        BtnStart->setObjectName(QString::fromUtf8("BtnStart"));
        BtnStart->setEnabled(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/buttons/start.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnStart->setIcon(icon2);
        BtnStart->setFlat(false);

        horizontalLayout_3->addWidget(BtnStart);

        BtnStop = new QPushButton(widget);
        BtnStop->setObjectName(QString::fromUtf8("BtnStop"));
        BtnStop->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/buttons/stop2.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnStop->setIcon(icon3);
        BtnStop->setFlat(false);

        horizontalLayout_3->addWidget(BtnStop);

        BtnOpt = new QPushButton(widget);
        BtnOpt->setObjectName(QString::fromUtf8("BtnOpt"));
        BtnOpt->setEnabled(true);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/buttons/toolbmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnOpt->setIcon(icon4);
        BtnOpt->setFlat(false);

        horizontalLayout_3->addWidget(BtnOpt);

        BtnExit = new QPushButton(widget);
        BtnExit->setObjectName(QString::fromUtf8("BtnExit"));
        BtnExit->setEnabled(true);
        BtnExit->setFlat(false);

        horizontalLayout_3->addWidget(BtnExit);


        verticalLayout_2->addWidget(widget);


        MainForm->addAction(MenuExpand);
        MainForm->addAction(MenuStart);
        MainForm->addAction(MenuStop);
        MainForm->addAction(MenuExit);

        retranslateUi(MainForm);

        QMetaObject::connectSlotsByName(MainForm);
    } // setupUi

    void retranslateUi(QWidget *MainForm)
    {
        MainForm->setWindowTitle(QCoreApplication::translate("MainForm", "STRSVR", nullptr));
#if QT_CONFIG(tooltip)
        MainForm->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        MenuExpand->setText(QCoreApplication::translate("MainForm", "E&xpand", nullptr));
        MenuStart->setText(QCoreApplication::translate("MainForm", "&Start", nullptr));
        MenuStop->setText(QCoreApplication::translate("MainForm", "&Stop", nullptr));
        MenuExit->setText(QCoreApplication::translate("MainForm", "&Exit", nullptr));
#if QT_CONFIG(tooltip)
        Panel3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel3->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        Panel2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel2->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        Time->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Time->setText(QCoreApplication::translate("MainForm", "2010/01/01 00:00:00 GPST", nullptr));
#if QT_CONFIG(tooltip)
        Label8->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label8->setText(QCoreApplication::translate("MainForm", "Connect Time:", nullptr));
#if QT_CONFIG(tooltip)
        ConTime->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        ConTime->setText(QCoreApplication::translate("MainForm", "0d 00:00:00", nullptr));
#if QT_CONFIG(tooltip)
        Panel1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel1->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        Label5->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label5->setText(QCoreApplication::translate("MainForm", "Stream", nullptr));
#if QT_CONFIG(tooltip)
        Label3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label3->setText(QCoreApplication::translate("MainForm", "Type", nullptr));
#if QT_CONFIG(tooltip)
        Label4->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label4->setText(QCoreApplication::translate("MainForm", "Opt", nullptr));
#if QT_CONFIG(tooltip)
        Label1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label1->setText(QCoreApplication::translate("MainForm", "Cmd", nullptr));
#if QT_CONFIG(tooltip)
        Label6->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label6->setText(QCoreApplication::translate("MainForm", "bytes", nullptr));
#if QT_CONFIG(tooltip)
        Label7->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label7->setText(QCoreApplication::translate("MainForm", "bps", nullptr));
#if QT_CONFIG(tooltip)
        IndInput->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        IndInput->setText(QString());
#if QT_CONFIG(tooltip)
        LabelInput->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LabelInput->setText(QCoreApplication::translate("MainForm", "(0) Input", nullptr));
        Input->setItemText(0, QCoreApplication::translate("MainForm", "Serial", nullptr));
        Input->setItemText(1, QCoreApplication::translate("MainForm", "TCP Client", nullptr));
        Input->setItemText(2, QCoreApplication::translate("MainForm", "TCP Server", nullptr));
        Input->setItemText(3, QCoreApplication::translate("MainForm", "NTRIP Client", nullptr));
        Input->setItemText(4, QCoreApplication::translate("MainForm", "File", nullptr));
        Input->setItemText(5, QCoreApplication::translate("MainForm", "FTP", nullptr));
        Input->setItemText(6, QCoreApplication::translate("MainForm", "HTTP", nullptr));

#if QT_CONFIG(tooltip)
        Input->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        BtnInput->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnInput->setText(QCoreApplication::translate("MainForm", "...", nullptr));
#if QT_CONFIG(tooltip)
        BtnCmd->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnCmd->setText(QCoreApplication::translate("MainForm", "...", nullptr));
#if QT_CONFIG(tooltip)
        InputByte->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        InputByte->setText(QCoreApplication::translate("MainForm", "0", nullptr));
#if QT_CONFIG(tooltip)
        InputBps->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        InputBps->setText(QCoreApplication::translate("MainForm", "0", nullptr));
#if QT_CONFIG(tooltip)
        Label2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label2->setText(QCoreApplication::translate("MainForm", "Conv", nullptr));
#if QT_CONFIG(tooltip)
        IndOutput1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        IndOutput1->setText(QString());
#if QT_CONFIG(tooltip)
        LabelOutput1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LabelOutput1->setText(QCoreApplication::translate("MainForm", "(1) Output", nullptr));
        Output1->setItemText(0, QString());
        Output1->setItemText(1, QCoreApplication::translate("MainForm", "Serial", nullptr));
        Output1->setItemText(2, QCoreApplication::translate("MainForm", "TCP Client", nullptr));
        Output1->setItemText(3, QCoreApplication::translate("MainForm", "TCP Server", nullptr));
        Output1->setItemText(4, QCoreApplication::translate("MainForm", "NTRIP Server", nullptr));
        Output1->setItemText(5, QCoreApplication::translate("MainForm", "File", nullptr));
        Output1->setItemText(6, QCoreApplication::translate("MainForm", "NTRIP Caster", nullptr));

#if QT_CONFIG(tooltip)
        Output1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        BtnOutput1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnOutput1->setText(QCoreApplication::translate("MainForm", "...", nullptr));
#if QT_CONFIG(tooltip)
        BtnConv1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnConv1->setText(QCoreApplication::translate("MainForm", "...", nullptr));
#if QT_CONFIG(tooltip)
        Output1Byte->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Output1Byte->setText(QCoreApplication::translate("MainForm", "0", nullptr));
#if QT_CONFIG(tooltip)
        Output1Bps->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Output1Bps->setText(QCoreApplication::translate("MainForm", "0", nullptr));
#if QT_CONFIG(tooltip)
        IndOutput2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        IndOutput2->setText(QString());
#if QT_CONFIG(tooltip)
        LabelOutput2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LabelOutput2->setText(QCoreApplication::translate("MainForm", "(2) Output", nullptr));
        Output2->setItemText(0, QString());
        Output2->setItemText(1, QCoreApplication::translate("MainForm", "Serial", nullptr));
        Output2->setItemText(2, QCoreApplication::translate("MainForm", "TCP Client", nullptr));
        Output2->setItemText(3, QCoreApplication::translate("MainForm", "TCP Server", nullptr));
        Output2->setItemText(4, QCoreApplication::translate("MainForm", "NTRIP Server", nullptr));
        Output2->setItemText(5, QCoreApplication::translate("MainForm", "File", nullptr));
        Output2->setItemText(6, QCoreApplication::translate("MainForm", "NTRIP Caster", nullptr));

#if QT_CONFIG(tooltip)
        Output2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        BtnOutput2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnOutput2->setText(QCoreApplication::translate("MainForm", "...", nullptr));
#if QT_CONFIG(tooltip)
        BtnConv2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnConv2->setText(QCoreApplication::translate("MainForm", "...", nullptr));
#if QT_CONFIG(tooltip)
        Output2Byte->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Output2Byte->setText(QCoreApplication::translate("MainForm", "0", nullptr));
#if QT_CONFIG(tooltip)
        Output2Bps->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Output2Bps->setText(QCoreApplication::translate("MainForm", "0", nullptr));
#if QT_CONFIG(tooltip)
        IndOutput3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        IndOutput3->setText(QString());
#if QT_CONFIG(tooltip)
        LabelOutput3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        LabelOutput3->setText(QCoreApplication::translate("MainForm", "(3) Output", nullptr));
        Output3->setItemText(0, QString());
        Output3->setItemText(1, QCoreApplication::translate("MainForm", "Serial", nullptr));
        Output3->setItemText(2, QCoreApplication::translate("MainForm", "TCP Client", nullptr));
        Output3->setItemText(3, QCoreApplication::translate("MainForm", "TCP Server", nullptr));
        Output3->setItemText(4, QCoreApplication::translate("MainForm", "NTRIP Server", nullptr));
        Output3->setItemText(5, QCoreApplication::translate("MainForm", "File", nullptr));
        Output3->setItemText(6, QCoreApplication::translate("MainForm", "NTRIP Caster", nullptr));

#if QT_CONFIG(tooltip)
        Output3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        BtnOutput3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnOutput3->setText(QCoreApplication::translate("MainForm", "...", nullptr));
#if QT_CONFIG(tooltip)
        BtnConv3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnConv3->setText(QCoreApplication::translate("MainForm", "...", nullptr));
#if QT_CONFIG(tooltip)
        Output3Byte->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Output3Byte->setText(QCoreApplication::translate("MainForm", "0", nullptr));
#if QT_CONFIG(tooltip)
        Output3Bps->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Output3Bps->setText(QCoreApplication::translate("MainForm", "0", nullptr));
#if QT_CONFIG(tooltip)
        Progress->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Panel4->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel4->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        BtnStrMon->setToolTip(QCoreApplication::translate("MainForm", "Stream Monitor", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnStrMon->setText(QString());
#if QT_CONFIG(tooltip)
        Message->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Message->setText(QCoreApplication::translate("MainForm", "message area", nullptr));
#if QT_CONFIG(tooltip)
        BtnTaskIcon->setToolTip(QCoreApplication::translate("MainForm", "Task Tray Icon", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnTaskIcon->setText(QString());
#if QT_CONFIG(tooltip)
        BtnAbout->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnAbout->setText(QCoreApplication::translate("MainForm", "?", nullptr));
#if QT_CONFIG(tooltip)
        BtnStart->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnStart->setText(QCoreApplication::translate("MainForm", "&Start", nullptr));
#if QT_CONFIG(tooltip)
        BtnStop->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnStop->setText(QCoreApplication::translate("MainForm", "S&top", nullptr));
#if QT_CONFIG(tooltip)
        BtnOpt->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnOpt->setText(QCoreApplication::translate("MainForm", "&Options...", nullptr));
#if QT_CONFIG(tooltip)
        BtnExit->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnExit->setText(QCoreApplication::translate("MainForm", "E&xit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainForm: public Ui_MainForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SVRMAIN_H
