#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QString>
#include "fibthread.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit Dialog(QWidget *parent = 0);
    fibthread * ft;
    ~Dialog();
    
private:
    Ui::Dialog *ui;

public slots:
    void change1(unsigned long long);
    void change2(unsigned long long);
    void changevalue(unsigned long long);

private slots:
    void on_pushButton_clicked();
};

#endif // DIALOG_H
