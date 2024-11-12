#include "italianchef.h"
#include <iostream>
using namespace std;

ItalianChef::ItalianChef(string chefName) : Chef(chefName) {
    cout << "Italian Chef " << name << " konstruktori" << endl;
}

ItalianChef::~ItalianChef() {
    cout << "Italian Chef " << name << " destruktori" << endl;
}

void ItalianChef::makePasta() const {
    cout << "Italian Chef " << name << " makes pasta" << endl;
}

string ItalianChef::getName() const {
    return name;
}
