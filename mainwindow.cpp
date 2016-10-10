#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDir>
#include <QApplication>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    setWindowTitle("WutuArticleNameValue");

    testprojlistmode=new QStandardItemModel;
    ui->testprojlist->setModel(testprojlistmode);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_refreshtestfilebtn_clicked()
{
    QDir dir("examplearticleparse");
    auto files=dir.entryInfoList(QDir::Files);
    if(testprojlistmode->rowCount())testprojlistmode->removeRows(0,testprojlistmode->rowCount());
    for(int i=0;i<files.size();i++)
    {
        QString str=files[i].absoluteFilePath();
        QString appdir=qApp->applicationDirPath();
        str.replace(appdir,"");
        testprojlistmode->appendRow(new QStandardItem(str));
    }
}

void MainWindow::on_runalltestbtn_clicked()
{

}
