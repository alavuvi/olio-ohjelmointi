#include <iostream>
#include "funktiot.h"

using namespace std;

int main()
{
    int luku1 = 0;
    int luku2 = 0;

    cout << "Anna ensimmainen kokonaisluku: ";
    cin >> luku1;

    cout << "Anna toinen kokonaisluku: ";
    cin >> luku2;

    // kutsutaan calc -funktiot
    calcSum(luku1, luku2);
    calcDiv(luku1, luku2);


    // kutsutaan ret-funktiot ja tulostetaan niiden palauttamat arvot
    cout << "Palautettu summa:" << retSum(luku1, luku2) << endl;
    cout << "Palautettu osamaara:" << retDiv(luku1, luku2) << endl;

    return 0;
}
