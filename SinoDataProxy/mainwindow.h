#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <qmutex.h>
#include <QMainWindow>
#include "qstandarditemmodel.h"
#include "svrmain.h"
#include "connectionedit.h"
#include <QDebug>
#include <QMessageBox>
#include <QCloseEvent>
#include <QFileInfo>
#include "qitemselectionmodel.h"
#include "aboutdlg.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

struct UpdateData
{
    QString ctime;
    QString strbyte;
    QString strbps;
    QString strmessage;
    int nodatatime;
    int status;
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void InsertOneRow(connectedit edit);
signals:
    void sendNameToStr(QString name);

protected:
    void closeEvent(QCloseEvent *event);
    int GetStatus(QString name);
private slots:
    void ShowTextEditMenu(QPoint pos);

    void AddConnect();
    void UpdateConnect();
    void DeleteConnect();
    void StartConnect();
    void StopConnect();

    void GetName(QString name);
    void GetInputStr(connectedit edit);
    void GetTime(QString strname, QString ctime,QString strbyte,QString strbps,QString strmessage);
    void GetStopStatus(QString name);

//    void on_pushButton_clicked();
//    void on_stopButton_clicked();

    void Timer1Timer();
    //void Timer2Timer();

    void on_action1_triggered();

    void on_action2_triggered();

    void on_action_2_triggered();

private:
    Ui::MainWindow *ui;
    QStandardItemModel *model;
    QItemSelectionModel *Selection;
    QMenu *popMenu; //菜单
    QAction *actionUpdateInfo;
    QAction *actionDelInfo;
    QAction *actionAdd;
    QAction *actionStart;
    QAction *actionStop;

    QString IniFile;

    QTimer Timer1;
    QMap<QString,UpdateData> UpdateDataMap;
    QMap<QString,int> NoDataCountMap;
    QMutex UpdateDataMutex;

    //QList<MainForm*> *strsvrMainList = new QList<MainForm*>;
    QMap<QString,MainForm*> *strsvrMainMap= new QMap<QString,MainForm*>;

    QList<connectedit> *connecttable = new QList<connectedit>;
    int currentrow=0;
    int popMenuindex;
    void SaveConf();
    void LoadConf();
    void iniModelFromStringList(QStringList &aFileContent);
    void UpdateOneRow(connectedit edit,int row);
};
#endif // MAINWINDOW_H
