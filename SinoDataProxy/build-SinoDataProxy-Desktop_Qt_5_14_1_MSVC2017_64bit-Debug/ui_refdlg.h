/********************************************************************************
** Form generated from reading UI file 'refdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REFDLG_H
#define UI_REFDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RefDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *StaList;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *BtnLoad;
    QLineEdit *FindStr;
    QPushButton *BtnFind;
    QPushButton *BtnOK;
    QPushButton *BtnCancel;

    void setupUi(QWidget *RefDialog)
    {
        if (RefDialog->objectName().isEmpty())
            RefDialog->setObjectName(QString::fromUtf8("RefDialog"));
        RefDialog->resize(542, 445);
        verticalLayout = new QVBoxLayout(RefDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        StaList = new QTableWidget(RefDialog);
        if (StaList->columnCount() < 2)
            StaList->setColumnCount(2);
        StaList->setObjectName(QString::fromUtf8("StaList"));
        StaList->setColumnCount(2);
        StaList->horizontalHeader()->setStretchLastSection(true);
        StaList->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(StaList);

        widget = new QWidget(RefDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        BtnLoad = new QPushButton(widget);
        BtnLoad->setObjectName(QString::fromUtf8("BtnLoad"));
        BtnLoad->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(BtnLoad->sizePolicy().hasHeightForWidth());
        BtnLoad->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(BtnLoad);

        FindStr = new QLineEdit(widget);
        FindStr->setObjectName(QString::fromUtf8("FindStr"));
        FindStr->setEnabled(true);

        horizontalLayout->addWidget(FindStr);

        BtnFind = new QPushButton(widget);
        BtnFind->setObjectName(QString::fromUtf8("BtnFind"));
        BtnFind->setEnabled(true);
        sizePolicy1.setHeightForWidth(BtnFind->sizePolicy().hasHeightForWidth());
        BtnFind->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(BtnFind);

        BtnOK = new QPushButton(widget);
        BtnOK->setObjectName(QString::fromUtf8("BtnOK"));
        BtnOK->setEnabled(true);
        sizePolicy1.setHeightForWidth(BtnOK->sizePolicy().hasHeightForWidth());
        BtnOK->setSizePolicy(sizePolicy1);
        BtnOK->setAutoDefault(true);

        horizontalLayout->addWidget(BtnOK);

        BtnCancel = new QPushButton(widget);
        BtnCancel->setObjectName(QString::fromUtf8("BtnCancel"));
        BtnCancel->setEnabled(true);
        sizePolicy1.setHeightForWidth(BtnCancel->sizePolicy().hasHeightForWidth());
        BtnCancel->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(BtnCancel);


        verticalLayout->addWidget(widget);


        retranslateUi(RefDialog);

        BtnOK->setDefault(true);


        QMetaObject::connectSlotsByName(RefDialog);
    } // setupUi

    void retranslateUi(QWidget *RefDialog)
    {
        RefDialog->setWindowTitle(QCoreApplication::translate("RefDialog", "Stations", nullptr));
#if QT_CONFIG(tooltip)
        RefDialog->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        BtnLoad->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnLoad->setText(QCoreApplication::translate("RefDialog", "&Load", nullptr));
#if QT_CONFIG(tooltip)
        FindStr->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        FindStr->setText(QString());
#if QT_CONFIG(tooltip)
        BtnFind->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnFind->setText(QCoreApplication::translate("RefDialog", "Find", nullptr));
#if QT_CONFIG(tooltip)
        BtnOK->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnOK->setText(QCoreApplication::translate("RefDialog", "&OK", nullptr));
#if QT_CONFIG(tooltip)
        BtnCancel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnCancel->setText(QCoreApplication::translate("RefDialog", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RefDialog: public Ui_RefDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REFDLG_H
