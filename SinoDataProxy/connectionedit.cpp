#include "connectionedit.h"
#include "ui_connectionedit.h"

ConnectionEdit::ConnectionEdit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConnectionEdit)
{
    ui->setupUi(this);
}

ConnectionEdit::~ConnectionEdit()
{
    delete ui;
}

void ConnectionEdit::on_buttonBox_accepted()
{
    QString name;
    name=ui->lineEdit->text();
    emit   sendName(name);
}
