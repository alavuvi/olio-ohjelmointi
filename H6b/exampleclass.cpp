#include "exampleclass.h"
#include "qdebug.h"

ExampleClass::ExampleClass(QObject *parent) {
    qDebug()<<"Start";
    connect(this, SIGNAL(readyToSay()), this, SLOT(sayHelloSlot()) );
    qDebug()<<"End";
}

// Tämä funktio lisää 1000ms viiveen sayHelloSlotin "Terve" tulosteeseen.
// Jos rivin kommentoi, niin Terve tulostuu Start ja End tekstien väliin, viiveen kanssa niiden alle.
void ExampleClass::startToWait()
{
    QThread::msleep(1000);
    emit readyToSay();
}

void ExampleClass::sayHelloSlot()
{
    qDebug()<<"Terve";
}
