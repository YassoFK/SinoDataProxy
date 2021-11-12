#ifndef CONNECTIONEDIT_H
#define CONNECTIONEDIT_H

#include <QDialog>

namespace Ui {
class ConnectionEdit;
}

class ConnectionEdit : public QDialog
{
    Q_OBJECT

public:
    explicit ConnectionEdit(QWidget *parent = nullptr);
    ~ConnectionEdit();

signals:
    void sendName(QString name);

private:
    Ui::ConnectionEdit *ui;


private slots:
    void on_buttonBox_accepted();
};

#endif // CONNECTIONEDIT_H
