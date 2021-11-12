/********************************************************************************
** Form generated from reading UI file 'console.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSOLE_H
#define UI_CONSOLE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Console
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *Panel1;
    QHBoxLayout *horizontalLayout;
    QPushButton *BtnAsc;
    QPushButton *BtnHex;
    QPushButton *BtnStop;
    QPushButton *BtnDown;
    QPushButton *BtnClear;
    QSpacerItem *horizontalSpacer;
    QPushButton *BtnClose;
    QPlainTextEdit *textEdit;

    void setupUi(QWidget *Console)
    {
        if (Console->objectName().isEmpty())
            Console->setObjectName(QString::fromUtf8("Console"));
        Console->resize(640, 434);
        verticalLayout = new QVBoxLayout(Console);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Panel1 = new QWidget(Console);
        Panel1->setObjectName(QString::fromUtf8("Panel1"));
        Panel1->setEnabled(true);
        Panel1->setLayoutDirection(Qt::LeftToRight);
        horizontalLayout = new QHBoxLayout(Panel1);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        BtnAsc = new QPushButton(Panel1);
        BtnAsc->setObjectName(QString::fromUtf8("BtnAsc"));
        BtnAsc->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BtnAsc->sizePolicy().hasHeightForWidth());
        BtnAsc->setSizePolicy(sizePolicy);
        BtnAsc->setCheckable(true);
        BtnAsc->setFlat(true);

        horizontalLayout->addWidget(BtnAsc);

        BtnHex = new QPushButton(Panel1);
        BtnHex->setObjectName(QString::fromUtf8("BtnHex"));
        BtnHex->setEnabled(true);
        sizePolicy.setHeightForWidth(BtnHex->sizePolicy().hasHeightForWidth());
        BtnHex->setSizePolicy(sizePolicy);
        BtnHex->setCheckable(true);
        BtnHex->setFlat(true);

        horizontalLayout->addWidget(BtnHex);

        BtnStop = new QPushButton(Panel1);
        BtnStop->setObjectName(QString::fromUtf8("BtnStop"));
        BtnStop->setEnabled(true);
        sizePolicy.setHeightForWidth(BtnStop->sizePolicy().hasHeightForWidth());
        BtnStop->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/buttons/pause.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnStop->setIcon(icon);
        BtnStop->setCheckable(true);
        BtnStop->setFlat(true);

        horizontalLayout->addWidget(BtnStop);

        BtnDown = new QPushButton(Panel1);
        BtnDown->setObjectName(QString::fromUtf8("BtnDown"));
        BtnDown->setEnabled(true);
        sizePolicy.setHeightForWidth(BtnDown->sizePolicy().hasHeightForWidth());
        BtnDown->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/buttons/fitd.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnDown->setIcon(icon1);
        BtnDown->setFlat(true);

        horizontalLayout->addWidget(BtnDown);

        BtnClear = new QPushButton(Panel1);
        BtnClear->setObjectName(QString::fromUtf8("BtnClear"));
        BtnClear->setEnabled(true);
        sizePolicy.setHeightForWidth(BtnClear->sizePolicy().hasHeightForWidth());
        BtnClear->setSizePolicy(sizePolicy);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/buttons/del.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnClear->setIcon(icon2);
        BtnClear->setFlat(true);

        horizontalLayout->addWidget(BtnClear);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        BtnClose = new QPushButton(Panel1);
        BtnClose->setObjectName(QString::fromUtf8("BtnClose"));
        BtnClose->setEnabled(true);
        BtnClose->setFlat(false);

        horizontalLayout->addWidget(BtnClose);


        verticalLayout->addWidget(Panel1);

        textEdit = new QPlainTextEdit(Console);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setReadOnly(true);

        verticalLayout->addWidget(textEdit);


        retranslateUi(Console);

        QMetaObject::connectSlotsByName(Console);
    } // setupUi

    void retranslateUi(QWidget *Console)
    {
        Console->setWindowTitle(QCoreApplication::translate("Console", "Console", nullptr));
#if QT_CONFIG(tooltip)
        Console->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Panel1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Panel1->setProperty("text", QVariant(QString()));
#if QT_CONFIG(tooltip)
        BtnAsc->setToolTip(QCoreApplication::translate("Console", "Ascii View", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnAsc->setText(QCoreApplication::translate("Console", "ASC", nullptr));
#if QT_CONFIG(tooltip)
        BtnHex->setToolTip(QCoreApplication::translate("Console", "Hex View", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnHex->setText(QCoreApplication::translate("Console", "HEX", nullptr));
#if QT_CONFIG(tooltip)
        BtnStop->setToolTip(QCoreApplication::translate("Console", "Pause", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnStop->setText(QString());
#if QT_CONFIG(tooltip)
        BtnDown->setToolTip(QCoreApplication::translate("Console", "Scroll Down", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnDown->setText(QString());
#if QT_CONFIG(tooltip)
        BtnClear->setToolTip(QCoreApplication::translate("Console", "Clear", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnClear->setText(QString());
#if QT_CONFIG(tooltip)
        BtnClose->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnClose->setText(QCoreApplication::translate("Console", "&Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Console: public Ui_Console {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSOLE_H
