#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    QString file=QApplication::applicationFilePath();
    QFileInfo fi(file);
    IniFile=fi.absolutePath()+"/"+fi.baseName()+".ini";

    ui->setupUi(this);
    this->setWindowTitle("SinoDataProxy");
    //this->setWindowIcon(QIcon(":/icons/databranch"));
    this->model = new QStandardItemModel;
    this->Selection = new QItemSelectionModel(model) ;//选择模型
    this->ui->tableView->setModel(model);
    this->ui->tableView->setSelectionModel(Selection);

    this->model->setColumnCount(10);
    this->ui->tableView->setColumnWidth(3,120);
    //model->setRowCount(3);
    this->model->setHorizontalHeaderItem(0,new QStandardItem("Num"));
    this->model->setHorizontalHeaderItem(1,new QStandardItem("Name"));
    this->model->setHorizontalHeaderItem(2,new QStandardItem("Input"));
    this->model->setHorizontalHeaderItem(3,new QStandardItem("Connect Time"));
    this->model->setHorizontalHeaderItem(4,new QStandardItem("Status"));
    this->model->setHorizontalHeaderItem(5,new QStandardItem("Output1"));
    this->model->setHorizontalHeaderItem(6,new QStandardItem("Output2"));
    this->model->setHorizontalHeaderItem(7,new QStandardItem("Output3"));
    this->model->setHorizontalHeaderItem(8,new QStandardItem("bytes"));
    this->model->setHorizontalHeaderItem(9,new QStandardItem("Msg"));

    //设置列表属性
    ui->tableView->verticalHeader()->setVisible(false);   //隐藏列表头
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows); //选择整行
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection); //只选择一行
    ui->tableView->horizontalHeader()->setStretchLastSection(true); //最后一列填满表
    ui->tableView->setContextMenuPolicy(Qt::CustomContextMenu);//响应右键输入
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);

    LoadConf();

    //QMenu *popMenu; //菜单
    popMenu = new QMenu(ui->tableView);
    actionUpdateInfo = new QAction();
    actionDelInfo = new QAction();
    actionAdd = new QAction();
    actionStart = new QAction();
    actionStop = new QAction();
    actionUpdateInfo->setText(QString("Edit"));
    actionDelInfo->setText(QString("Delete"));
    actionAdd->setText(QString("Add"));
    actionStart->setText(QString("Start"));
    actionStop->setText(QString("Stop"));
    popMenu->addAction(actionAdd);
    //popMenu->addAction(actionUpdateInfo);
    //popMenu->addAction(actionDelInfo);

    connect(ui->tableView,SIGNAL(customContextMenuRequested(QPoint)),this,SLOT(ShowTextEditMenu(QPoint)));//右键菜单
    connect(actionAdd,SIGNAL(triggered(bool)),this,SLOT(AddConnect()));
    connect(actionUpdateInfo,SIGNAL(triggered(bool)),this,SLOT(UpdateConnect()));
    connect(actionDelInfo,SIGNAL(triggered(bool)),this,SLOT(DeleteConnect()));
    connect(actionStart,SIGNAL(triggered(bool)),this,SLOT(StartConnect()));
    connect(actionStop,SIGNAL(triggered(bool)),this,SLOT(StopConnect()));
    connect(&Timer1,SIGNAL(timeout()),this,SLOT(Timer1Timer()));
    //connect(&Timer2,SIGNAL(timeout()),this,SLOT(Timer2Timer()));

    Timer1.setInterval(1000);
    Timer1.start();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ShowTextEditMenu(QPoint pos)
{
    popMenuindex = ui->tableView->indexAt(pos).row();
    if (!ui->tableView->indexAt(pos).isValid())
    {
        popMenu->clear();
        popMenu->addAction(actionAdd);
        popMenu->exec(QCursor::pos());                                  // 菜单出现的位置为当前鼠标的位置
    }
    else if(this->model->data(this->model->index(popMenuindex,4))=="Connected")
    {
        popMenu->clear();
        popMenu->addAction(actionAdd);
        popMenu->addAction(actionUpdateInfo);
        popMenu->addAction(actionStop);
        popMenu->addAction(actionDelInfo);
        popMenu->exec(QCursor::pos());
    }
    else
    {
        popMenu->clear();
        popMenu->addAction(actionAdd);
        popMenu->addAction(actionUpdateInfo);
        popMenu->addAction(actionStart);
        popMenu->addAction(actionDelInfo);
        popMenu->exec(QCursor::pos());
    }
}

void MainWindow::AddConnect()
{
    ConnectionEdit* c = new ConnectionEdit;
    connect(c,SIGNAL(sendName(QString)),this,SLOT(GetName(QString)));
    c->setModal(true);
    c->show();
}

void MainWindow::UpdateConnect()
{
    //auto index = ui->tableView->indexAt(ui->tableView->mapFromGlobal(QCursor::pos())).row()+1;
    QString name = this->model->data(this->model->index(popMenuindex,1)).toString();
    if(strsvrMainMap->value(name))
        strsvrMainMap->value(name)->show();
    //qDebug()<<this->model->data(this->model->index(index,1)).toString();
}

void MainWindow::DeleteConnect()
{
    QString name = this->model->data(this->model->index(popMenuindex,1)).toString();
    if(strsvrMainMap->value(name))
    {
        if( QMessageBox::question(this,
                                  name,
                                  QString::fromLocal8Bit("\n确认删除此连接？"),
                                  QMessageBox::Ok | QMessageBox::Cancel,
                                  QMessageBox::Ok) == QMessageBox::Ok)
        {
            this->model->removeRow(popMenuindex);
            strsvrMainMap->value(name)->BtnStopClick();
            delete strsvrMainMap->value(name);
            strsvrMainMap->remove(name);
        }
    }
}

void MainWindow::StartConnect()
{
    QString name = this->model->data(this->model->index(popMenuindex,1)).toString();
    if(strsvrMainMap->value(name))
    {
        strsvrMainMap->value(name)->BtnStartClick();
        UpdateDataMap[name].nodatatime=0;
    }

}

void MainWindow::StopConnect()
{
    QString name = this->model->data(this->model->index(popMenuindex,1)).toString();
    if(strsvrMainMap->value(name))
        strsvrMainMap->value(name)->BtnStopClick();
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    if( QMessageBox::question(this,
                              QApplication::applicationName(),
                              QString::fromLocal8Bit("\n确认关闭所有连接并退出？"),
                              QMessageBox::Ok | QMessageBox::Cancel,
                              QMessageBox::Ok) == QMessageBox::Ok)
    {
        SaveConf();
        event->accept();
    }

    else
        event->ignore();
}

void MainWindow::GetInputStr(connectedit edit)
{
    QStringList strList;
    int column = 1; // name列index
    int namerow;
    for (int row = 0; row < this->model->rowCount(); ++row) {
        QStandardItem *item = this->model->item(row, column);
        strList << item->text();
        if(this->model->data(this->model->index(row,1))==edit.name)
        {
            namerow=row;
            this->model->setData(this->model->index(row,4),"Connected");
        }

    }
    if(strList.contains(edit.name))
    {
        UpdateOneRow(edit,namerow);
        //SaveConf();
        return;
    }
    InsertOneRow(edit);
    //SaveConf();
}

void MainWindow::GetName(QString name)
{
    MainForm* m = new MainForm(name);
    strsvrMainMap->insert(name,m);
    NoDataCountMap.insert(name,0);
    //connect(this,SIGNAL(sendNameToStr(QString)),strsvrMainMap->value(name),SLOT(GetNameStr(QString)));
    connect(strsvrMainMap->value(name),SIGNAL(sendInputStr(connectedit)),this,SLOT(GetInputStr(connectedit)));
    //emit sendNameToStr(name);
    connect(strsvrMainMap->value(name),SIGNAL(sendTime(QString,QString,QString,QString,QString)),this,SLOT(GetTime(QString,QString,QString,QString,QString)));
    connect(strsvrMainMap->value(name),SIGNAL(sendStopStatus(QString)),this,SLOT(GetStopStatus(QString)));
    strsvrMainMap->value(name)->show();
}

void MainWindow::InsertOneRow(connectedit edit)
{
    QList<QStandardItem*>    aItemList; //容器类
    QStandardItem   *aItem;
    edit.num=currentrow++;
    aItem=new QStandardItem(QString("%1").arg(edit.num));  //创建Item
    aItemList<<aItem;                   //添加到容器
    aItem=new QStandardItem(edit.name);
    aItemList<<aItem;
    aItem=new QStandardItem(edit.input);
    aItemList<<aItem;
    aItem=new QStandardItem(edit.connecttime);
    aItemList<<aItem;
    aItem=new QStandardItem("Connected");
    aItemList<<aItem;
    aItem=new QStandardItem(edit.output1);
    aItemList<<aItem;
    aItem=new QStandardItem(edit.output2);
    aItemList<<aItem;
    aItem=new QStandardItem(edit.output3);
    aItemList<<aItem;
    aItem=new QStandardItem(edit.msg);
    aItemList<<aItem;

    this->model->insertRow(this->model->rowCount(),aItemList); //插入一行，需要每个Cell的Item
//    QModelIndex curIndex=this->model->index(this->model->rowCount()-1,0);//创建最后一行的ModelIndex
//    Selection->clearSelection();//清空选择项
//    Selection->setCurrentIndex(curIndex,QItemSelectionModel::Select);//设置刚插入的行为当前选择行

    QModelIndex left = this->model->index(this->model->rowCount()-1,0);
    QModelIndex right = this->model->index(this->model->rowCount()-1,8);
    QItemSelection select(left,right);
    this->Selection->clearSelection();//清空选择项
    this->Selection->select(select,QItemSelectionModel::Select);//设置刚插入的行为当前选择行
}

void MainWindow::UpdateOneRow(connectedit edit,int row)
{
    QList<QStandardItem*>    aItemList; //容器类
    QStandardItem   *aItem;
    edit.num=row;
    aItem=new QStandardItem(QString("%1").arg(edit.num));  //创建Item
    aItemList<<aItem;                   //添加到容器
    aItem=new QStandardItem(edit.name);
    aItemList<<aItem;
    aItem=new QStandardItem(edit.input);
    aItemList<<aItem;
    aItem=new QStandardItem(edit.connecttime);
    aItemList<<aItem;
    aItem=new QStandardItem("Connected");
    aItemList<<aItem;
    aItem=new QStandardItem(edit.output1);
    aItemList<<aItem;
    aItem=new QStandardItem(edit.output2);
    aItemList<<aItem;
    aItem=new QStandardItem(edit.output3);
    aItemList<<aItem;
    aItem=new QStandardItem(edit.msg);
    aItemList<<aItem;

    this->model->removeRow(row);
    this->model->insertRow(row,aItemList);//插入一行，需要每个Cell的Item

    QModelIndex left = this->model->index(row,0);
    QModelIndex right = this->model->index(row,8);
    QItemSelection select(left,right);
    this->Selection->clearSelection();//清空选择项
    this->Selection->select(select,QItemSelectionModel::Select);//设置刚插入的行为当前选择行
}

void MainWindow::GetTime(QString strname,QString ctime,QString strbyte,QString strbps,QString strmessage)
{
    UpdateData tmp;
    tmp.ctime = ctime;
    tmp.strbyte = strbyte;
    tmp.strbps = strbps;
    tmp.strmessage = strmessage;
    //UpdateDataMutex.lock();
    //UpdateDataMap.insert(strname,tmp);
    //UpdateDataMutex.unlock();
//    for(int i=0;i<this->model->rowCount();i++)
//    {
//        if(this->model->data(this->model->index(i,1))==strname)
//        {
//            this->model->setData(this->model->index(i,3),ctime);
//            this->model->setData(this->model->index(i,8),strbyte);
//            return;
//        }
//    }
    if(strbps=="0")
    {
        tmp.nodatatime=UpdateDataMap[strname].nodatatime+1;
        UpdateDataMap.insert(strname,tmp);
//        if(UpdateDataMap[strname].nodatatime>30&&GetStatus(strname))
//        {
//            strsvrMainMap->value(strname)->BtnStopClick();
//            UpdateDataMap[strname].nodatatime=0;
//        }
    }
    else
    {
        tmp.nodatatime=0;
        UpdateDataMap.insert(strname,tmp);
    }

}

void MainWindow::Timer1Timer()
{
    for(int i=0;i<this->model->rowCount();i++)
    {
        if(UpdateDataMap.contains(this->model->data(this->model->index(i,1)).toString()))
        this->model->setData(this->model->index(i,3),UpdateDataMap.value(this->model->data(this->model->index(i,1)).toString()).ctime);
        this->model->setData(this->model->index(i,8),UpdateDataMap.value(this->model->data(this->model->index(i,1)).toString()).strbyte);
        this->model->setData(this->model->index(i,9),UpdateDataMap.value(this->model->data(this->model->index(i,1)).toString()).strmessage);
    }

    //strsvrMainMap->value(test1)->strsvr;
}


void MainWindow::GetStopStatus(QString name)
{
    for(int i=0;i<this->model->rowCount();i++)
    {
        if(this->model->data(this->model->index(i,1))==name)
        {
            this->model->setData(this->model->index(i,4),"Disconnect");
        }
    }
}

int MainWindow::GetStatus(QString name)
{
    for(int i=0;i<this->model->rowCount();i++)
    {
        if(this->model->data(this->model->index(i,1))==name)
        {
            if(this->model->data(this->model->index(i,4))=="Connected")
                return 1;
            else
                return 0;
        }
    }
    return 3;
}

void MainWindow::SaveConf()
{
    QFile afile(IniFile);
    if (!(afile.open(QIODevice::ReadWrite | QIODevice::Text | QIODevice::Truncate)))//以读写、覆盖原有内容方式打开文件
            return;
    QTextStream aStream(&afile); //用文本流读取文件
    QStandardItem   *aItem;
    int i,j;
    QString str;

    //获取表头文字
    for (i=0;i<this->model->columnCount();i++)
    {
        aItem=this->model->horizontalHeaderItem(i);             //获取表头的项数据
        str=str+aItem->text()+"\t";                           //以TAB见隔开
    }
    aStream<<str<<"\n";                                         //文件里需要加入换行符 \n
    //获取数据区文字
    for ( i=0;i<this->model->rowCount();i++)
    {
        str="";
        for( j=0;j<this->model->columnCount();j++)
        {
            aItem=this->model->item(i,j);
            if(j==4)
                str=str+"Disconnect"+QString::asprintf("\t");
            else if(aItem->text()!="")
                str=str+aItem->text()+QString::asprintf("\t");
            else
                str=str+"NULL"+QString::asprintf("\t");
        }
         aStream<<str<<"\n";
    }
    afile.close();
}

void MainWindow::LoadConf()
{
    QStringList fFileContent;//文件内容字符串列表
    QFile aFile(IniFile);  //以文件方式读出
    if (aFile.open(QIODevice::ReadOnly | QIODevice::Text)) //以只读文本方式打开文件
    {
        QTextStream aStream(&aFile); //用文本流读取文件
        while (!aStream.atEnd())
        {
            QString str=aStream.readLine();//读取文件的一行
            fFileContent.append(str); //添加到 StringList
        }
        aFile.close();//关闭文件
        if(!fFileContent.empty())
            iniModelFromStringList(fFileContent);//从StringList的内容初始化数据模型
    }

    for(int i=0; i<this->model->rowCount();i++)
    {
        QString name = this->model->data(this->model->index(i,1)).toString();
        MainForm* m = new MainForm(name);
        strsvrMainMap->insert(name,m);
        NoDataCountMap.insert(name,0);
        //connect(this,SIGNAL(sendNameToStr(QString)),strsvrMainMap->value(name),SLOT(GetNameStr(QString)));
        connect(strsvrMainMap->value(name),SIGNAL(sendInputStr(connectedit)),this,SLOT(GetInputStr(connectedit)));
        //emit sendNameToStr(name);
        connect(strsvrMainMap->value(name),SIGNAL(sendTime(QString,QString,QString,QString,QString)),this,SLOT(GetTime(QString,QString,QString,QString,QString)));
        connect(strsvrMainMap->value(name),SIGNAL(sendStopStatus(QString)),this,SLOT(GetStopStatus(QString)));
    }
}


void MainWindow::iniModelFromStringList(QStringList& aFileContent)
{   //从一个StringList 获取数据，初始化数据Model
    int rowCnt=aFileContent.count(); //文本行数，第1行是标题
    this->model->setRowCount(rowCnt-1); //实际数据行数
    //设置表头
    QString header=aFileContent.at(0);//第1行是表头
    QStringList headerList=header.split(QRegExp("\\t"),QString::SkipEmptyParts);
    this->model->setHorizontalHeaderLabels(headerList); //设置表头文字
    //设置表格数据
    QStandardItem   *aItem;
    for (int i=1;i<rowCnt;i++)
    {
        QString aLineText=aFileContent.at(i); //获取数据区的一行
        QStringList tmpList=aLineText.split(QRegExp("\\t"),QString::SkipEmptyParts);
        QString temp = tmpList.at(0);
        currentrow = temp.toInt() +1;
        for (int j=0;j<10;j++) //tmpList的行数等于FixedColumnCount, 固定的
        { //不包含最后一列
            aItem=new QStandardItem(tmpList.at(j));//创建item
            if(aItem->text()=="NULL")
                aItem=new QStandardItem("");//创建item
            this->model->setItem(i-1,j,aItem); //为模型的某个行列位置设置Item
        }
    }
}

//void MainWindow::on_pushButton_clicked()
//{
//    if(QMessageBox::question(this,
//                             QApplication::applicationName(),
//                             QString("\n确认开启所有连接？"),
//                             QMessageBox::Ok | QMessageBox::Cancel,
//                             QMessageBox::Ok) == QMessageBox::Ok)
//    {
//        QMap<QString,MainForm*>::iterator iter = strsvrMainMap->begin();
//        while(iter!=strsvrMainMap->end())
//        {
//            UpdateDataMap[iter.key()].nodatatime=0;
//            iter.value()->BtnStartClick();
//            iter++;
//        }
//    }
//}

//void MainWindow::on_stopButton_clicked()
//{
//    if(QMessageBox::question(this,
//                             QApplication::applicationName(),
//                             QString("\n确认关闭所有连接？？？"),
//                             QMessageBox::Ok | QMessageBox::Cancel,
//                             QMessageBox::Ok) == QMessageBox::Ok)
//    {
//        QMap<QString,MainForm*>::iterator iter = strsvrMainMap->begin();
//        while(iter!=strsvrMainMap->end())
//        {
//            iter.value()->BtnStopClick();
//            iter++;
//        }
//        //this->ui->pushButton->setText("Start All");
//    }
//}

void MainWindow::on_action1_triggered()
{

    if(QMessageBox::question(this,
                             QApplication::applicationName(),
                             QString::fromLocal8Bit("\n确认开启所有连接？"),
                             QMessageBox::Ok | QMessageBox::Cancel,
                             QMessageBox::Ok) == QMessageBox::Ok)
    {
        QMap<QString,MainForm*>::iterator iter = strsvrMainMap->begin();
        while(iter!=strsvrMainMap->end())
        {
            UpdateDataMap[iter.key()].nodatatime=0;
            iter.value()->BtnStartClick();
            iter++;
        }
    }
}

void MainWindow::on_action2_triggered()
{
    if(QMessageBox::question(this,
                             QApplication::applicationName(),
                             QString::fromLocal8Bit("\n确认关闭所有连接？？？"),
                             QMessageBox::Ok | QMessageBox::Cancel,
                             QMessageBox::Ok) == QMessageBox::Ok)
    {
        QMap<QString,MainForm*>::iterator iter = strsvrMainMap->begin();
        while(iter!=strsvrMainMap->end())
        {
            iter.value()->BtnStopClick();
            iter++;
        }
        //this->ui->pushButton->setText("Start All");
    }
}


void MainWindow::on_action_2_triggered()
{
    AboutDialog *aboutDialog=new AboutDialog(this);

    aboutDialog->About=QString("SinoDataProxy");
    aboutDialog->IconIndex=6;
    aboutDialog->exec();

    delete aboutDialog;
}
