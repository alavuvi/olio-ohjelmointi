#include <iostream>
#include "chef.h"
#include "italianchef.h"
using namespace std;

int main()
{
    // Luodaan Chef-olio pinomuistiin ja kutsutaan metodit
    Chef chef("Gordon Ramsay");
    chef.makeSalad();
    chef.makeSoup();

    // Luodaan ItalianChef-olio pinomuistiin ja kutsutaan metodit
    ItalianChef italianChef("Anthony Bourdain");
    italianChef.makeSalad();
    italianChef.makeSoup();
    italianChef.makePasta();

    cout << "name of the Italian Chef is " << italianChef.getName() << endl;

    return 0;
}
