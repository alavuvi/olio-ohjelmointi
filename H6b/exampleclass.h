#ifndef EXAMPLECLASS_H
#define EXAMPLECLASS_H

#include <QObject>
#include <QThread>

//Includejen osalta hieman eroa edelliseen tehtävään. Tässä on QThread lisättynä, kun edellisessä oli QDebug.
//Siinä oli myös iostream ja using namespace std rivit.

class ExampleClass : public QObject
{
    Q_OBJECT

public:
    ExampleClass(QObject* parent = nullptr);

    void startToWait();

signals:
    void readyToSay();

public slots:
    void sayHelloSlot();
};

#endif // EXAMPLECLASS_H
