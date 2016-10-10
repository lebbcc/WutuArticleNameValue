/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *refreshtestfilebtn;
    QTreeView *testprojlist;
    QPushButton *runalltestbtn;
    QTreeView *treeView_3;
    QTextEdit *textEdit;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(959, 617);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        refreshtestfilebtn = new QPushButton(centralWidget);
        refreshtestfilebtn->setObjectName(QStringLiteral("refreshtestfilebtn"));

        horizontalLayout->addWidget(refreshtestfilebtn);


        verticalLayout->addLayout(horizontalLayout);

        testprojlist = new QTreeView(centralWidget);
        testprojlist->setObjectName(QStringLiteral("testprojlist"));

        verticalLayout->addWidget(testprojlist);

        runalltestbtn = new QPushButton(centralWidget);
        runalltestbtn->setObjectName(QStringLiteral("runalltestbtn"));

        verticalLayout->addWidget(runalltestbtn);


        horizontalLayout_2->addLayout(verticalLayout);

        treeView_3 = new QTreeView(centralWidget);
        treeView_3->setObjectName(QStringLiteral("treeView_3"));

        horizontalLayout_2->addWidget(treeView_3);

        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        horizontalLayout_2->addWidget(textEdit);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 959, 23));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "WutuArticleNameValue", 0));
        label->setText(QApplication::translate("MainWindow", "\350\242\253\346\265\213\350\257\225\347\233\256\345\275\225\346\226\207\344\273\266", 0));
        refreshtestfilebtn->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260", 0));
        runalltestbtn->setText(QApplication::translate("MainWindow", "\350\277\220\350\241\214\346\211\200\346\234\211\346\265\213\350\257\225", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
