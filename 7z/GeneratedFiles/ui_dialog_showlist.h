/********************************************************************************
** Form generated from reading UI file 'dialog_showlist.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_SHOWLIST_H
#define UI_DIALOG_SHOWLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_showlist
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTextBrowser *showlist_textBrowser;
    QLabel *showlist_label;
    QPushButton *show_pushButton;
    QLineEdit *show_lineEdit;

    void setupUi(QDialog *Dialog_showlist)
    {
        if (Dialog_showlist->objectName().isEmpty())
            Dialog_showlist->setObjectName(QStringLiteral("Dialog_showlist"));
        Dialog_showlist->resize(425, 341);
        scrollArea = new QScrollArea(Dialog_showlist);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(10, 10, 401, 321));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 399, 319));
        showlist_textBrowser = new QTextBrowser(scrollAreaWidgetContents);
        showlist_textBrowser->setObjectName(QStringLiteral("showlist_textBrowser"));
        showlist_textBrowser->setGeometry(QRect(5, 70, 361, 241));
        showlist_label = new QLabel(scrollAreaWidgetContents);
        showlist_label->setObjectName(QStringLiteral("showlist_label"));
        showlist_label->setGeometry(QRect(10, 30, 54, 21));
        show_pushButton = new QPushButton(scrollAreaWidgetContents);
        show_pushButton->setObjectName(QStringLiteral("show_pushButton"));
        show_pushButton->setGeometry(QRect(330, 30, 51, 23));
        show_lineEdit = new QLineEdit(scrollAreaWidgetContents);
        show_lineEdit->setObjectName(QStringLiteral("show_lineEdit"));
        show_lineEdit->setGeometry(QRect(70, 30, 241, 20));
        scrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(Dialog_showlist);

        QMetaObject::connectSlotsByName(Dialog_showlist);
    } // setupUi

    void retranslateUi(QDialog *Dialog_showlist)
    {
        Dialog_showlist->setWindowTitle(QApplication::translate("Dialog_showlist", "Dialog", Q_NULLPTR));
        showlist_label->setText(QApplication::translate("Dialog_showlist", "TextLabel", Q_NULLPTR));
        show_pushButton->setText(QApplication::translate("Dialog_showlist", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog_showlist: public Ui_Dialog_showlist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_SHOWLIST_H
