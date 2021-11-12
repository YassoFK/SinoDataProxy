#include "mainwindow.h"

#include <QApplication>
#include <QTextCodec>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    QTextCodec *codec = QTextCodec::codecForName("GBK");//或者"GBK",不分大小写
//    QTextCodec::setCodecForLocale(codec);
    MainWindow w;
    w.setWindowIcon(QIcon(":/icons/databranch"));
    w.show();
    return a.exec();
}
