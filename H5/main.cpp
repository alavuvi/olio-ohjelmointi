#include <iostream>
#include "ClassB.h"
#include "AssosiationA.h"
#include "aggregationa.h"

using namespace std;

int main()
{
    int a = 5;
    int b = 10;

    int* myPointer = nullptr;

    //tulostetaan muuttujien arvot ja osoitteet
    cout << "a:n arvo on: " << a << " ja osoite on: " << &a << endl;
    cout << "b:n arvo on: " << b << " ja osoite on: " << &b << endl;
    cout << endl;

    //tulostetaan muuttujaan a osoittavan pointerin arvo ja osoite
    myPointer = &a;
    cout << "Pointterin osoittama osoite on: " << myPointer << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *myPointer << endl;
    cout << endl;

    //tulostetaan muuttujaan b osoittavan pointerin arvo ja osoite
    myPointer = &b;
    cout << "Pointterin osoittama osoite on: " << myPointer << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *myPointer << endl;
    cout << endl;

    //muodostetaan referenssi refA ja viitataan sillä muuttujaan a ja tulostetaan arvo ja osoite
    int& refA = a;
    cout << "refA osoittaa osoitteeseen on: " << &refA << endl;
    cout << "refA:n osoittaman muistipaikan arvo on: " << refA << endl;

    // Kokeilin muuttaa refA:n viittaus b:hen. Arvo näyttää näyttää siirtyvän, mutta osoittaa edelleen samaan muistipaikkaan.
    // refA = b;
    // cout << "refA osoittaa osoitteeseen on: " << &refA << endl;
    // cout << "refA:n osoittaman muistipaikan arvo on: " << refA << endl;
    cout << endl;
    cout << endl;
    cout << "***************************************" << endl;

    //Assosiaatio esimerkki, luodaan oliot ja asetetaan niille data set-metodeilla.
    //Tulostetaan olioiden tiedot get-metodeilla. Alkuperäinen b-olion data ei muutu, kun a:lle asetetaan arvoja.
     ClassB objB;
     objB.setInfo("Olion B asettama info");

     AssosiationA objAss(objB);
     objAss.setBinfo("Olion objAss asettama info");

     cout<<"Assosiaatio esimerkki:"<<endl;
     cout<<"objB: "<<objB.getInfo()<<endl;
     cout<<"objAss: "<<objAss.getBinfo()<<endl;
    cout<<endl;

     //Aggregaatio esimerkki, tässä tavassa alkuperäisen B-olion data muuttuu, kun muokataan A-olion dataa.
     cout<<"Aggregaatio esimerkki:"<<endl;
     ClassB &refB=objB;
     AggregationA objAggr(refB);

     objAggr.setBinfo("Olion Agr asettama info");
     cout<<"objB: "<<objB.getInfo()<<endl;
     cout<<"objAggr "<<objAggr.getBinfo()<<endl;
     cout<<endl;

    return 0;
}
