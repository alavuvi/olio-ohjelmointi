#include <iostream>
#include "dog.h"

using namespace std;

Dog::Dog() {}

Dog:: ~Dog()
{
    cout << "Dog olio tuhottu" << endl;
}

void Dog::callOut()  {
    cout << "Koira haukkuu" << endl;
}
