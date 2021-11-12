/********************************************************************************
** Form generated from reading UI file 'connectionedit.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTIONEDIT_H
#define UI_CONNECTIONEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_ConnectionEdit
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *namelabel;
    QLineEdit *lineEdit;

    void setupUi(QDialog *ConnectionEdit)
    {
        if (ConnectionEdit->objectName().isEmpty())
            ConnectionEdit->setObjectName(QString::fromUtf8("ConnectionEdit"));
        ConnectionEdit->resize(400, 300);
        buttonBox = new QDialogButtonBox(ConnectionEdit);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        namelabel = new QLabel(ConnectionEdit);
        namelabel->setObjectName(QString::fromUtf8("namelabel"));
        namelabel->setGeometry(QRect(10, 110, 141, 17));
        lineEdit = new QLineEdit(ConnectionEdit);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(160, 110, 161, 25));

        retranslateUi(ConnectionEdit);
        QObject::connect(buttonBox, SIGNAL(accepted()), ConnectionEdit, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ConnectionEdit, SLOT(reject()));

        QMetaObject::connectSlotsByName(ConnectionEdit);
    } // setupUi

    void retranslateUi(QDialog *ConnectionEdit)
    {
        ConnectionEdit->setWindowTitle(QCoreApplication::translate("ConnectionEdit", "Edit", nullptr));
        namelabel->setText(QCoreApplication::translate("ConnectionEdit", "Please input Name:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConnectionEdit: public Ui_ConnectionEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTIONEDIT_H
