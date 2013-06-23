#include "fibthread.h"

fibthread::fibthread(QObject *parent) :
    QThread(parent)
{
    timer = false;

}

void fibthread::run()
{
    queue = new QQueue<unsigned long long>;
    queue->push_back(1);
    queue->push_back(1);
    unsigned long long first,second,third = 2;
    while(timer)
    {
        first = queue->first();
        qDebug() << "first" << first;
        qDebug() << "queue size : " << queue->length();
        queue->removeFirst();
        second = queue->first();
        qDebug() << "second" << second;
        qDebug() << "queue size : " << queue->length();
        emit change1(first);
        emit change2(second);
        qDebug() << "third" << third;
        third = first + second;
        emit changevalue(third);
        queue->push_back(third);
        qDebug() << "queue size : " << queue->length() << endl;
        this->msleep(500);
    }

}

fibthread::~fibthread()
{
    delete queue;
}
