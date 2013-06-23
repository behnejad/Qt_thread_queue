#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ft = new fibthread();

    connect(ft, SIGNAL(changevalue(unsigned long long)), this, SLOT(changevalue(unsigned long long)));
    connect(ft, SIGNAL(change1(unsigned long long)), this, SLOT(change1(unsigned long long)));
    connect(ft, SIGNAL(change2(unsigned long long)), this, SLOT(change2(unsigned long long)));
}

Dialog::~Dialog()
{
    delete ui;
    delete ft;
}

void Dialog::on_pushButton_clicked()
{
    ft->timer = !ft->timer;

    ft->start();

    if (ft->timer)
        ui->pushButton->setText("stop");
    else
        ui->pushButton->setText("start");
}

void Dialog::changevalue(unsigned long long a)
{
    ui->nfib->setText(QString::number(a));
    ui->third->setText(QString::number(a));
}

void Dialog::change1(unsigned long long a)
{
    ui->first->setText(QString::number(a));
}

void Dialog::change2(unsigned long long a)
{
    ui->second->setText(QString::number(a));
}
