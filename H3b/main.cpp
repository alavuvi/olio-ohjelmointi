#include <iostream>
#include "animal.h"
#include "dog.h"

using namespace std;

int main()
{
    //luodaan Animal olio, kutsutaan callOut-funktio ja lopuksi tuhotaan olio
    Animal *objectAnimal=new Animal;
    objectAnimal->callOut();

    // delete objectAnimal; // nämä on kommentoituna, koska näyttää, että aliluokan destruktoria kutsuttaessa se kutsuu myös ylemmän Animal-luokan destruktorin. Todennäköisesti toimii siis kuten pitää.
    // objectAnimal=nullptr;

    //luodaan Dog olio, kutsutaan callOut-funktio ja lopuksi tuhotaan olio
    Dog *objectDog=new Dog;
    objectDog->callOut();

    delete objectDog;
    objectDog=nullptr;

    return 0;
}
