#ifndef FIBTHREAD_H
#define FIBTHREAD_H

#include <QThread>
#include <QQueue>
#include <QDebug>

class fibthread : public QThread
{
    Q_OBJECT

private:
    QQueue<unsigned long long> *queue;

public:
    explicit fibthread(QObject *parent = 0);
    bool timer;
    void run();
    ~fibthread();
    
signals:
    void changevalue(unsigned long long);
    void change1(unsigned long long);
    void change2(unsigned long long);

public slots:
    
};

#endif // FIBTHREAD_H
