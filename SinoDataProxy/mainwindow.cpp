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
    this->Selection = new QItemSelectionModel(model) ;//ѡ��ģ��
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

    //�����б�����
    ui->tableView->verticalHeader()->setVisible(false);   //�����б�ͷ
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows); //ѡ������
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection); //ֻѡ��һ��
    ui->tableView->horizontalHeader()->setStretchLastSection(true); //���һ��������
    ui->tableView->setContextMenuPolicy(Qt::CustomContextMenu);//��Ӧ�Ҽ�����
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);

    LoadConf();

    //QMenu *popMenu; //�˵�
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

    connect(ui->tableView,SIGNAL(customContextMenuRequested(QPoint)),this,SLOT(ShowTextEditMenu(QPoint)));//�Ҽ��˵�
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
        popMenu->exec(QCursor::pos());                                  // �˵����ֵ�λ��Ϊ��ǰ����λ��
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
                                  QString::fromLocal8Bit("\nȷ��ɾ�������ӣ�"),
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
                              QString::fromLocal8Bit("\nȷ�Ϲر��������Ӳ��˳���"),
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
    int column = 1; // name��index
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
    QList<QStandardItem*>    aItemList; //������
    QStandardItem   *aItem;
    edit.num=currentrow++;
    aItem=new QStandardItem(QString("%1").arg(edit.num));  //����Item
    aItemList<<aItem;                   //��ӵ�����
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

    this->model->insertRow(this->model->rowCount(),aItemList); //����һ�У���Ҫÿ��Cell��Item
//    QModelIndex curIndex=this->model->index(this->model->rowCount()-1,0);//�������һ�е�ModelIndex
//    Selection->clearSelection();//���ѡ����
//    Selection->setCurrentIndex(curIndex,QItemSelectionModel::Select);//���øղ������Ϊ��ǰѡ����

    QModelIndex left = this->model->index(this->model->rowCount()-1,0);
    QModelIndex right = this->model->index(this->model->rowCount()-1,8);
    QItemSelection select(left,right);
    this->Selection->clearSelection();//���ѡ����
    this->Selection->select(select,QItemSelectionModel::Select);//���øղ������Ϊ��ǰѡ����
}

void MainWindow::UpdateOneRow(connectedit edit,int row)
{
    QList<QStandardItem*>    aItemList; //������
    QStandardItem   *aItem;
    edit.num=row;
    aItem=new QStandardItem(QString("%1").arg(edit.num));  //����Item
    aItemList<<aItem;                   //��ӵ�����
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
    this->model->insertRow(row,aItemList);//����һ�У���Ҫÿ��Cell��Item

    QModelIndex left = this->model->index(row,0);
    QModelIndex right = this->model->index(row,8);
    QItemSelection select(left,right);
    this->Selection->clearSelection();//���ѡ����
    this->Selection->select(select,QItemSelectionModel::Select);//���øղ������Ϊ��ǰѡ����
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
    if (!(afile.open(QIODevice::ReadWrite | QIODevice::Text | QIODevice::Truncate)))//�Զ�д������ԭ�����ݷ�ʽ���ļ�
            return;
    QTextStream aStream(&afile); //���ı�����ȡ�ļ�
    QStandardItem   *aItem;
    int i,j;
    QString str;

    //��ȡ��ͷ����
    for (i=0;i<this->model->columnCount();i++)
    {
        aItem=this->model->horizontalHeaderItem(i);             //��ȡ��ͷ��������
        str=str+aItem->text()+"\t";                           //��TAB������
    }
    aStream<<str<<"\n";                                         //�ļ�����Ҫ���뻻�з� \n
    //��ȡ����������
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
    QStringList fFileContent;//�ļ������ַ����б�
    QFile aFile(IniFile);  //���ļ���ʽ����
    if (aFile.open(QIODevice::ReadOnly | QIODevice::Text)) //��ֻ���ı���ʽ���ļ�
    {
        QTextStream aStream(&aFile); //���ı�����ȡ�ļ�
        while (!aStream.atEnd())
        {
            QString str=aStream.readLine();//��ȡ�ļ���һ��
            fFileContent.append(str); //��ӵ� StringList
        }
        aFile.close();//�ر��ļ�
        if(!fFileContent.empty())
            iniModelFromStringList(fFileContent);//��StringList�����ݳ�ʼ������ģ��
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
{   //��һ��StringList ��ȡ���ݣ���ʼ������Model
    int rowCnt=aFileContent.count(); //�ı���������1���Ǳ���
    this->model->setRowCount(rowCnt-1); //ʵ����������
    //���ñ�ͷ
    QString header=aFileContent.at(0);//��1���Ǳ�ͷ
    QStringList headerList=header.split(QRegExp("\\t"),QString::SkipEmptyParts);
    this->model->setHorizontalHeaderLabels(headerList); //���ñ�ͷ����
    //���ñ������
    QStandardItem   *aItem;
    for (int i=1;i<rowCnt;i++)
    {
        QString aLineText=aFileContent.at(i); //��ȡ��������һ��
        QStringList tmpList=aLineText.split(QRegExp("\\t"),QString::SkipEmptyParts);
        QString temp = tmpList.at(0);
        currentrow = temp.toInt() +1;
        for (int j=0;j<10;j++) //tmpList����������FixedColumnCount, �̶���
        { //���������һ��
            aItem=new QStandardItem(tmpList.at(j));//����item
            if(aItem->text()=="NULL")
                aItem=new QStandardItem("");//����item
            this->model->setItem(i-1,j,aItem); //Ϊģ�͵�ĳ������λ������Item
        }
    }
}

//void MainWindow::on_pushButton_clicked()
//{
//    if(QMessageBox::question(this,
//                             QApplication::applicationName(),
//                             QString("\nȷ�Ͽ����������ӣ�"),
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
//                             QString("\nȷ�Ϲر��������ӣ�����"),
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
                             QString::fromLocal8Bit("\nȷ�Ͽ����������ӣ�"),
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
                             QString::fromLocal8Bit("\nȷ�Ϲر��������ӣ�����"),
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
