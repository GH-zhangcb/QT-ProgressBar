#ifndef DIALOG_SHOWLIST_H
#define DIALOG_SHOWLIST_H

#include <QDialog>

namespace Ui {
class Dialog_showlist;
}

class Dialog_showlist : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_showlist(QWidget *parent = 0);
    ~Dialog_showlist();

private slots:

    void on_show_pushButton_clicked();

private:
    Ui::Dialog_showlist *ui;
};

#endif // DIALOG_SHOWLIST_H
