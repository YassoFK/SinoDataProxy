/********************************************************************************
** Form generated from reading UI file 'cmdoptdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CMDOPTDLG_H
#define UI_CMDOPTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CmdOptDialog
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *ChkOpenCmd;
    QPlainTextEdit *OpenCmd;
    QCheckBox *ChkCloseCmd;
    QPlainTextEdit *CloseCmd;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *BtnLoad;
    QPushButton *BtnSave;
    QPushButton *BtnOk;
    QPushButton *BtnCancel;

    void setupUi(QWidget *CmdOptDialog)
    {
        if (CmdOptDialog->objectName().isEmpty())
            CmdOptDialog->setObjectName(QString::fromUtf8("CmdOptDialog"));
        CmdOptDialog->resize(376, 264);
        verticalLayout = new QVBoxLayout(CmdOptDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        ChkOpenCmd = new QCheckBox(CmdOptDialog);
        ChkOpenCmd->setObjectName(QString::fromUtf8("ChkOpenCmd"));
        ChkOpenCmd->setChecked(false);

        verticalLayout->addWidget(ChkOpenCmd);

        OpenCmd = new QPlainTextEdit(CmdOptDialog);
        OpenCmd->setObjectName(QString::fromUtf8("OpenCmd"));
        OpenCmd->setEnabled(true);

        verticalLayout->addWidget(OpenCmd);

        ChkCloseCmd = new QCheckBox(CmdOptDialog);
        ChkCloseCmd->setObjectName(QString::fromUtf8("ChkCloseCmd"));

        verticalLayout->addWidget(ChkCloseCmd);

        CloseCmd = new QPlainTextEdit(CmdOptDialog);
        CloseCmd->setObjectName(QString::fromUtf8("CloseCmd"));
        CloseCmd->setEnabled(true);

        verticalLayout->addWidget(CloseCmd);

        widget = new QWidget(CmdOptDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        BtnLoad = new QPushButton(widget);
        BtnLoad->setObjectName(QString::fromUtf8("BtnLoad"));
        BtnLoad->setEnabled(true);

        horizontalLayout->addWidget(BtnLoad);

        BtnSave = new QPushButton(widget);
        BtnSave->setObjectName(QString::fromUtf8("BtnSave"));
        BtnSave->setEnabled(true);

        horizontalLayout->addWidget(BtnSave);

        BtnOk = new QPushButton(widget);
        BtnOk->setObjectName(QString::fromUtf8("BtnOk"));
        BtnOk->setEnabled(true);
        BtnOk->setAutoDefault(true);

        horizontalLayout->addWidget(BtnOk);

        BtnCancel = new QPushButton(widget);
        BtnCancel->setObjectName(QString::fromUtf8("BtnCancel"));
        BtnCancel->setEnabled(true);

        horizontalLayout->addWidget(BtnCancel);


        verticalLayout->addWidget(widget);


        retranslateUi(CmdOptDialog);

        BtnOk->setDefault(true);


        QMetaObject::connectSlotsByName(CmdOptDialog);
    } // setupUi

    void retranslateUi(QWidget *CmdOptDialog)
    {
        CmdOptDialog->setWindowTitle(QCoreApplication::translate("CmdOptDialog", "Serial/TCP Commands", nullptr));
#if QT_CONFIG(tooltip)
        CmdOptDialog->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        ChkOpenCmd->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        ChkOpenCmd->setText(QCoreApplication::translate("CmdOptDialog", "Commands at startup", nullptr));
#if QT_CONFIG(tooltip)
        OpenCmd->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        OpenCmd->setPlainText(QString());
#if QT_CONFIG(tooltip)
        ChkCloseCmd->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        ChkCloseCmd->setText(QCoreApplication::translate("CmdOptDialog", "Commands at shutdown", nullptr));
#if QT_CONFIG(tooltip)
        CloseCmd->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        CloseCmd->setPlainText(QString());
#if QT_CONFIG(tooltip)
        BtnLoad->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnLoad->setText(QCoreApplication::translate("CmdOptDialog", "&Load...", nullptr));
#if QT_CONFIG(tooltip)
        BtnSave->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnSave->setText(QCoreApplication::translate("CmdOptDialog", "&Save...", nullptr));
#if QT_CONFIG(tooltip)
        BtnOk->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnOk->setText(QCoreApplication::translate("CmdOptDialog", "&OK", nullptr));
#if QT_CONFIG(tooltip)
        BtnCancel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnCancel->setText(QCoreApplication::translate("CmdOptDialog", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CmdOptDialog: public Ui_CmdOptDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CMDOPTDLG_H
