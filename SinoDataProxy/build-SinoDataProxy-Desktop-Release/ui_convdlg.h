/********************************************************************************
** Form generated from reading UI file 'convdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONVDLG_H
#define UI_CONVDLG_H

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

class Ui_ConvDialog
{
public:
    QGridLayout *gridLayout;
    QComboBox *InFormat;
    QLabel *Label10;
    QLineEdit *Options;
    QPushButton *BtnOk;
    QPushButton *BtnCancel;
    QComboBox *OutFormat;
    QCheckBox *Conversion;
    QLabel *Label2;
    QLabel *Label4;
    QLineEdit *OutMsgs;

    void setupUi(QWidget *ConvDialog)
    {
        if (ConvDialog->objectName().isEmpty())
            ConvDialog->setObjectName(QString::fromUtf8("ConvDialog"));
        ConvDialog->resize(430, 112);
        gridLayout = new QGridLayout(ConvDialog);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        InFormat = new QComboBox(ConvDialog);
        InFormat->setObjectName(QString::fromUtf8("InFormat"));
        InFormat->setEnabled(false);

        gridLayout->addWidget(InFormat, 0, 1, 1, 1);

        Label10 = new QLabel(ConvDialog);
        Label10->setObjectName(QString::fromUtf8("Label10"));
        Label10->setEnabled(true);

        gridLayout->addWidget(Label10, 7, 0, 1, 1);

        Options = new QLineEdit(ConvDialog);
        Options->setObjectName(QString::fromUtf8("Options"));
        Options->setEnabled(true);

        gridLayout->addWidget(Options, 7, 1, 1, 1);

        BtnOk = new QPushButton(ConvDialog);
        BtnOk->setObjectName(QString::fromUtf8("BtnOk"));
        BtnOk->setEnabled(true);
        BtnOk->setAutoDefault(true);

        gridLayout->addWidget(BtnOk, 7, 2, 1, 5);

        BtnCancel = new QPushButton(ConvDialog);
        BtnCancel->setObjectName(QString::fromUtf8("BtnCancel"));
        BtnCancel->setEnabled(true);

        gridLayout->addWidget(BtnCancel, 7, 7, 1, 1);

        OutFormat = new QComboBox(ConvDialog);
        OutFormat->addItem(QString());
        OutFormat->addItem(QString());
        OutFormat->setObjectName(QString::fromUtf8("OutFormat"));
        OutFormat->setEnabled(false);

        gridLayout->addWidget(OutFormat, 0, 3, 1, 1);

        Conversion = new QCheckBox(ConvDialog);
        Conversion->setObjectName(QString::fromUtf8("Conversion"));
        Conversion->setChecked(false);

        gridLayout->addWidget(Conversion, 0, 0, 1, 1);

        Label2 = new QLabel(ConvDialog);
        Label2->setObjectName(QString::fromUtf8("Label2"));
        Label2->setEnabled(true);

        gridLayout->addWidget(Label2, 0, 2, 1, 1);

        Label4 = new QLabel(ConvDialog);
        Label4->setObjectName(QString::fromUtf8("Label4"));
        Label4->setEnabled(true);

        gridLayout->addWidget(Label4, 1, 0, 1, 4);

        OutMsgs = new QLineEdit(ConvDialog);
        OutMsgs->setObjectName(QString::fromUtf8("OutMsgs"));
        OutMsgs->setEnabled(true);

        gridLayout->addWidget(OutMsgs, 2, 0, 1, 4);


        retranslateUi(ConvDialog);

        BtnOk->setDefault(true);


        QMetaObject::connectSlotsByName(ConvDialog);
    } // setupUi

    void retranslateUi(QWidget *ConvDialog)
    {
        ConvDialog->setWindowTitle(QCoreApplication::translate("ConvDialog", "Conversion Option", nullptr));
#if QT_CONFIG(tooltip)
        ConvDialog->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        InFormat->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label10->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label10->setText(QCoreApplication::translate("ConvDialog", "Options", nullptr));
#if QT_CONFIG(tooltip)
        Options->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Options->setText(QString());
#if QT_CONFIG(tooltip)
        BtnOk->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnOk->setText(QCoreApplication::translate("ConvDialog", "&OK", nullptr));
#if QT_CONFIG(tooltip)
        BtnCancel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnCancel->setText(QCoreApplication::translate("ConvDialog", "&Cancel", nullptr));
        OutFormat->setItemText(0, QCoreApplication::translate("ConvDialog", "RTCM 2", nullptr));
        OutFormat->setItemText(1, QCoreApplication::translate("ConvDialog", "RTCM 3", nullptr));

#if QT_CONFIG(tooltip)
        OutFormat->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Conversion->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Conversion->setText(QCoreApplication::translate("ConvDialog", "Conversion From", nullptr));
#if QT_CONFIG(tooltip)
        Label2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label2->setText(QCoreApplication::translate("ConvDialog", "To", nullptr));
#if QT_CONFIG(tooltip)
        Label4->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label4->setText(QCoreApplication::translate("ConvDialog", "Message Types  (Inteval: s) separeted by ,", nullptr));
#if QT_CONFIG(tooltip)
        OutMsgs->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        OutMsgs->setText(QCoreApplication::translate("ConvDialog", "1004(1),1012(1)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConvDialog: public Ui_ConvDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONVDLG_H
