﻿#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_refreshtestfilebtn_clicked();

    void on_runalltestbtn_clicked();

private:
    Ui::MainWindow *ui;
    QStandardItemModel *testprojlistmode;
};

#endif // MAINWINDOW_H
