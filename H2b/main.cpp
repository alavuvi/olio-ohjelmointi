#include <iostream>
#include <vector>
#include "car.h"

using namespace std;

int main()
{
    vector<Car> carList;

    // luodaan car luokan oliot
    Car objCar0("Skoda", "Octavia", 2016);
    Car objCar1("Audi", "A4", 2000);
    Car objCar2("Toyota", "Corolla", 1998);

    // Lisätään oliot listaan
    carList.push_back(objCar0);
    carList.push_back(objCar1);
    carList.push_back(objCar2);

    // tulosta listan toisen alkion tiedot
    cout << "Tulostetaan listan toisen auton tiedot:"<<endl;
    carList[1].printData();

    cout << "************************\n";

    // Tulosta listan kaikkien autojen tiedot
    cout << "Tulostetaan listan kaikkien autojen tiedot:" << endl;
    for(int i=0; i < carList.size(); i++) {
        carList[i].printData();
    }

    return 0;
}
