#include <iostream>
#include "animal.h"
#include "dog.h"

using namespace std;

int main()
{
    //luodaan Animal olio, kutsutaan callOut-funktio ja lopuksi tuhotaan olio
    Animal *objectAnimal=new Animal;
    objectAnimal->callOut();

   delete objectAnimal; // Näyttää, että aliluokan destruktoria kutsuttaessa se kutsuu myös ylemmän Animal-luokan destruktorin.
   objectAnimal=nullptr; // Todennäköisesti toimii siis kuten pitää, eli Animal olio tuhotaan nyt oman kutsunsa jälkeen ja vielä uudelleen Dog-olion kutsun jälkeen

    //luodaan Dog olio, kutsutaan callOut-funktio ja lopuksi tuhotaan olio
    Dog *objectDog=new Dog;
    objectDog->callOut();

   delete objectDog;
   objectDog=nullptr;

    return 0;
}
