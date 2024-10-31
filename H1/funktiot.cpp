#include "funktiot.h"
#include <iostream>
using namespace std;


// funktio calcSum ottaa vastaan kaksi kokonaislukua ja tulostaa niiden summan, mutta ei palauta mitään.
void calcSum(int luku1, int luku2)
{
    int summa = luku1 + luku2;
    cout << "Lukujen summa on: " << summa << endl;
}

// funktio calcDiv ottaa vastaan kaksi kokonaislukua ja tulostaa niiden osamäärän, mutta ei palauta mitään.
// jos jakaja on nolla calcDiv tulostaa virheilmoituksen.
void calcDiv(int luku1, int luku2)
{
    if (luku2 == 0) {
        cout << "Nollalla ei voida jakaa!" << endl;
    }
    else {
        int osam = luku1 / luku2;
        cout << "Lukujen osamaara on: " << osam << endl;
    }
}

// funktio retSum ottaa vastaan kaksi kokonaislukua ja palauttaa niiden summan, mutta ei tulosta mitään
int retSum(int luku1, int luku2)
{
    return luku1 + luku2;
}

// funktio retDiv ottaa vastaan kaksi kokonaisluka ja palauttaa niiden osamäärän (float), mutta ei tulosta mitään
float retDiv(int luku1, int luku2)
{
    if (luku2 != 0) {
        return static_cast<float>(luku1) / luku2;
    } else {
        cout << "Nollalla ei voida jakaa!" << endl;
        return 0;
    }
}
