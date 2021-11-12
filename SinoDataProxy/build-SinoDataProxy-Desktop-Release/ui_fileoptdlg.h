/********************************************************************************
** Form generated from reading UI file 'fileoptdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEOPTDLG_H
#define UI_FILEOPTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileOptDialog
{
public:
    QGridLayout *gridLayout;
    QLineEdit *TimeStart;
    QComboBox *TimeSpeed;
    QLabel *Label1;
    QLabel *Label3;
    QPushButton *BtnFilePath;
    QLineEdit *FilePath;
    QLabel *Label2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QCheckBox *ChkTimeTag;
    QLabel *Label4;
    QComboBox *SwapIntv;
    QLabel *Label5;
    QPushButton *BtnKey;
    QPushButton *BtnOk;
    QPushButton *BtnCancel;

    void setupUi(QWidget *FileOptDialog)
    {
        if (FileOptDialog->objectName().isEmpty())
            FileOptDialog->setObjectName(QString::fromUtf8("FileOptDialog"));
        gridLayout = new QGridLayout(FileOptDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        TimeStart = new QLineEdit(FileOptDialog);
        TimeStart->setObjectName(QString::fromUtf8("TimeStart"));
        TimeStart->setEnabled(true);

        gridLayout->addWidget(TimeStart, 1, 2, 1, 1);

        TimeSpeed = new QComboBox(FileOptDialog);
        TimeSpeed->addItem(QString());
        TimeSpeed->addItem(QString());
        TimeSpeed->addItem(QString());
        TimeSpeed->addItem(QString());
        TimeSpeed->addItem(QString());
        TimeSpeed->addItem(QString());
        TimeSpeed->addItem(QString());
        TimeSpeed->setObjectName(QString::fromUtf8("TimeSpeed"));
        TimeSpeed->setEnabled(true);

        gridLayout->addWidget(TimeSpeed, 1, 0, 1, 1);

        Label1 = new QLabel(FileOptDialog);
        Label1->setObjectName(QString::fromUtf8("Label1"));
        Label1->setEnabled(true);

        gridLayout->addWidget(Label1, 2, 0, 1, 1);

        Label3 = new QLabel(FileOptDialog);
        Label3->setObjectName(QString::fromUtf8("Label3"));
        Label3->setEnabled(true);

        gridLayout->addWidget(Label3, 1, 5, 1, 1);

        BtnFilePath = new QPushButton(FileOptDialog);
        BtnFilePath->setObjectName(QString::fromUtf8("BtnFilePath"));
        BtnFilePath->setEnabled(true);

        gridLayout->addWidget(BtnFilePath, 2, 5, 1, 1);

        FilePath = new QLineEdit(FileOptDialog);
        FilePath->setObjectName(QString::fromUtf8("FilePath"));
        FilePath->setEnabled(true);

        gridLayout->addWidget(FilePath, 2, 2, 1, 1);

        Label2 = new QLabel(FileOptDialog);
        Label2->setObjectName(QString::fromUtf8("Label2"));

        gridLayout->addWidget(Label2, 1, 1, 1, 1);

        widget = new QWidget(FileOptDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ChkTimeTag = new QCheckBox(widget);
        ChkTimeTag->setObjectName(QString::fromUtf8("ChkTimeTag"));

        horizontalLayout->addWidget(ChkTimeTag);

        Label4 = new QLabel(widget);
        Label4->setObjectName(QString::fromUtf8("Label4"));
        Label4->setEnabled(true);

        horizontalLayout->addWidget(Label4);

        SwapIntv = new QComboBox(widget);
        SwapIntv->addItem(QString());
        SwapIntv->addItem(QString());
        SwapIntv->addItem(QString());
        SwapIntv->addItem(QString());
        SwapIntv->addItem(QString());
        SwapIntv->addItem(QString());
        SwapIntv->addItem(QString());
        SwapIntv->addItem(QString());
        SwapIntv->addItem(QString());
        SwapIntv->setObjectName(QString::fromUtf8("SwapIntv"));
        SwapIntv->setEnabled(true);
        SwapIntv->setEditable(true);

        horizontalLayout->addWidget(SwapIntv);

        Label5 = new QLabel(widget);
        Label5->setObjectName(QString::fromUtf8("Label5"));
        Label5->setEnabled(true);

        horizontalLayout->addWidget(Label5);

        BtnKey = new QPushButton(widget);
        BtnKey->setObjectName(QString::fromUtf8("BtnKey"));
        BtnKey->setEnabled(true);
        BtnKey->setFlat(true);

        horizontalLayout->addWidget(BtnKey);

        BtnOk = new QPushButton(widget);
        BtnOk->setObjectName(QString::fromUtf8("BtnOk"));
        BtnOk->setEnabled(true);
        BtnOk->setAutoDefault(true);

        horizontalLayout->addWidget(BtnOk);

        BtnCancel = new QPushButton(widget);
        BtnCancel->setObjectName(QString::fromUtf8("BtnCancel"));
        BtnCancel->setEnabled(true);

        horizontalLayout->addWidget(BtnCancel);


        gridLayout->addWidget(widget, 3, 0, 1, 8);


        retranslateUi(FileOptDialog);

        BtnOk->setDefault(true);


        QMetaObject::connectSlotsByName(FileOptDialog);
    } // setupUi

    void retranslateUi(QWidget *FileOptDialog)
    {
        FileOptDialog->setWindowTitle(QCoreApplication::translate("FileOptDialog", "File Options", nullptr));
#if QT_CONFIG(tooltip)
        FileOptDialog->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        TimeStart->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        TimeStart->setText(QCoreApplication::translate("FileOptDialog", "0", nullptr));
        TimeSpeed->setItemText(0, QCoreApplication::translate("FileOptDialog", "x0.1", nullptr));
        TimeSpeed->setItemText(1, QCoreApplication::translate("FileOptDialog", "x0.2", nullptr));
        TimeSpeed->setItemText(2, QCoreApplication::translate("FileOptDialog", "x0.5", nullptr));
        TimeSpeed->setItemText(3, QCoreApplication::translate("FileOptDialog", "x1", nullptr));
        TimeSpeed->setItemText(4, QCoreApplication::translate("FileOptDialog", "x2", nullptr));
        TimeSpeed->setItemText(5, QCoreApplication::translate("FileOptDialog", "x5", nullptr));
        TimeSpeed->setItemText(6, QCoreApplication::translate("FileOptDialog", "x10", nullptr));

#if QT_CONFIG(tooltip)
        TimeSpeed->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label1->setText(QCoreApplication::translate("FileOptDialog", "File Path", nullptr));
#if QT_CONFIG(tooltip)
        Label3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label3->setText(QCoreApplication::translate("FileOptDialog", "s", nullptr));
#if QT_CONFIG(tooltip)
        BtnFilePath->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnFilePath->setText(QCoreApplication::translate("FileOptDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        FilePath->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        FilePath->setText(QString());
        Label2->setText(QCoreApplication::translate("FileOptDialog", "+", nullptr));
#if QT_CONFIG(tooltip)
        ChkTimeTag->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        ChkTimeTag->setText(QCoreApplication::translate("FileOptDialog", "Time", nullptr));
#if QT_CONFIG(tooltip)
        Label4->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label4->setText(QCoreApplication::translate("FileOptDialog", "Swap Intv", nullptr));
        SwapIntv->setItemText(0, QString());
        SwapIntv->setItemText(1, QCoreApplication::translate("FileOptDialog", "0.25", nullptr));
        SwapIntv->setItemText(2, QCoreApplication::translate("FileOptDialog", "0.5", nullptr));
        SwapIntv->setItemText(3, QCoreApplication::translate("FileOptDialog", "1", nullptr));
        SwapIntv->setItemText(4, QCoreApplication::translate("FileOptDialog", "2", nullptr));
        SwapIntv->setItemText(5, QCoreApplication::translate("FileOptDialog", "3", nullptr));
        SwapIntv->setItemText(6, QCoreApplication::translate("FileOptDialog", "6", nullptr));
        SwapIntv->setItemText(7, QCoreApplication::translate("FileOptDialog", "12", nullptr));
        SwapIntv->setItemText(8, QCoreApplication::translate("FileOptDialog", "24", nullptr));

#if QT_CONFIG(tooltip)
        SwapIntv->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label5->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Label5->setText(QCoreApplication::translate("FileOptDialog", "H", nullptr));
#if QT_CONFIG(tooltip)
        BtnKey->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnKey->setText(QCoreApplication::translate("FileOptDialog", "?", nullptr));
#if QT_CONFIG(tooltip)
        BtnOk->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnOk->setText(QCoreApplication::translate("FileOptDialog", "&OK", nullptr));
#if QT_CONFIG(tooltip)
        BtnCancel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        BtnCancel->setText(QCoreApplication::translate("FileOptDialog", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FileOptDialog: public Ui_FileOptDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEOPTDLG_H
