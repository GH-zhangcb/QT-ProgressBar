/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *In_label;
    QLabel *out_label;
    QPushButton *Extract_pushButton;
    QLineEdit *in_lineEdit;
    QLineEdit *out_lineEdit;
    QPushButton *Comp_pushButton;
    QPushButton *ShowList_pushButton;
    QProgressBar *progressBar;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(462, 364);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        In_label = new QLabel(centralWidget);
        In_label->setObjectName(QStringLiteral("In_label"));
        In_label->setGeometry(QRect(23, 40, 101, 20));
        out_label = new QLabel(centralWidget);
        out_label->setObjectName(QStringLiteral("out_label"));
        out_label->setGeometry(QRect(20, 90, 91, 20));
        Extract_pushButton = new QPushButton(centralWidget);
        Extract_pushButton->setObjectName(QStringLiteral("Extract_pushButton"));
        Extract_pushButton->setGeometry(QRect(180, 170, 81, 31));
        in_lineEdit = new QLineEdit(centralWidget);
        in_lineEdit->setObjectName(QStringLiteral("in_lineEdit"));
        in_lineEdit->setGeometry(QRect(140, 40, 281, 21));
        out_lineEdit = new QLineEdit(centralWidget);
        out_lineEdit->setObjectName(QStringLiteral("out_lineEdit"));
        out_lineEdit->setGeometry(QRect(140, 90, 281, 21));
        Comp_pushButton = new QPushButton(centralWidget);
        Comp_pushButton->setObjectName(QStringLiteral("Comp_pushButton"));
        Comp_pushButton->setGeometry(QRect(60, 170, 81, 31));
        ShowList_pushButton = new QPushButton(centralWidget);
        ShowList_pushButton->setObjectName(QStringLiteral("ShowList_pushButton"));
        ShowList_pushButton->setGeometry(QRect(300, 170, 81, 31));
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(10, 260, 441, 31));
        progressBar->setValue(0);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 462, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        In_label->setText(QApplication::translate("MainWindow", "Compress/Extract:", Q_NULLPTR));
        out_label->setText(QApplication::translate("MainWindow", "To Where:", Q_NULLPTR));
        Extract_pushButton->setText(QApplication::translate("MainWindow", "Extract", Q_NULLPTR));
        Comp_pushButton->setText(QApplication::translate("MainWindow", "Compress", Q_NULLPTR));
        ShowList_pushButton->setText(QApplication::translate("MainWindow", "ShowList", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
