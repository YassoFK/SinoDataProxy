#<SinoDataProxy>  Copyright (C) <2021>  <ComNav Technology Ltd.>
#This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
#This is free software, and you are welcome to redistribute it
#under certain conditions; type `show c' for details.

#include "mainwindow.h"

#include <QApplication>
#include <QTextCodec>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    QTextCodec *codec = QTextCodec::codecForName("GBK");//»òÕß"GBK",²»·Ö´óÐ¡Ð´
//    QTextCodec::setCodecForLocale(codec);
    MainWindow w;
    w.setWindowIcon(QIcon(":/icons/databranch"));
    w.show();
    return a.exec();
}
