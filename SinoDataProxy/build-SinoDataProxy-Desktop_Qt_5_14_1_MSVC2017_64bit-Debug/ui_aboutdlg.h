/********************************************************************************
** Form generated from reading UI file 'aboutdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDLG_H
#define UI_ABOUTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutDlg
{
public:
    QGridLayout *gridLayout;
    QPushButton *pbOkay;
    QLabel *lbAbout;
    QLabel *lbVersion;
    QLabel *lbCopyright;
    QLabel *wgIcon;

    void setupUi(QWidget *AboutDlg)
    {
        if (AboutDlg->objectName().isEmpty())
            AboutDlg->setObjectName(QString::fromUtf8("AboutDlg"));
        AboutDlg->resize(300, 179);
        gridLayout = new QGridLayout(AboutDlg);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pbOkay = new QPushButton(AboutDlg);
        pbOkay->setObjectName(QString::fromUtf8("pbOkay"));
        pbOkay->setAutoDefault(true);

        gridLayout->addWidget(pbOkay, 3, 1, 1, 1);

        lbAbout = new QLabel(AboutDlg);
        lbAbout->setObjectName(QString::fromUtf8("lbAbout"));

        gridLayout->addWidget(lbAbout, 0, 1, 1, 1);

        lbVersion = new QLabel(AboutDlg);
        lbVersion->setObjectName(QString::fromUtf8("lbVersion"));

        gridLayout->addWidget(lbVersion, 1, 1, 1, 1);

        lbCopyright = new QLabel(AboutDlg);
        lbCopyright->setObjectName(QString::fromUtf8("lbCopyright"));

        gridLayout->addWidget(lbCopyright, 2, 1, 1, 1);

        wgIcon = new QLabel(AboutDlg);
        wgIcon->setObjectName(QString::fromUtf8("wgIcon"));
        wgIcon->setScaledContents(true);

        gridLayout->addWidget(wgIcon, 0, 0, 3, 1);


        retranslateUi(AboutDlg);

        pbOkay->setDefault(true);


        QMetaObject::connectSlotsByName(AboutDlg);
    } // setupUi

    void retranslateUi(QWidget *AboutDlg)
    {
        AboutDlg->setWindowTitle(QCoreApplication::translate("AboutDlg", "About", nullptr));
        pbOkay->setText(QCoreApplication::translate("AboutDlg", "&Okay", nullptr));
        lbAbout->setText(QCoreApplication::translate("AboutDlg", "TextLabel", nullptr));
        lbVersion->setText(QCoreApplication::translate("AboutDlg", "TextLabel", nullptr));
        lbCopyright->setText(QCoreApplication::translate("AboutDlg", "TextLabel", nullptr));
        wgIcon->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AboutDlg: public Ui_AboutDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDLG_H
