#include "car.h"

using namespace std;

int main()
{
    // luodaan Car-luokan olio ja kutsutaan metodit: setEngine, setWheels ja printDetails
    Car objCar("Corolla", "Toyota");
    objCar.setEngine();
    objCar.setWheels();
    objCar.printDetails();
    return 0;
}
