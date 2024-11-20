#include "wheel.h"

//Konstruktorit
Wheel::Wheel() {}

Wheel::Wheel(int a, string b)
{
    size = a;
    type = b;
}
//getter renkaan koolle
int Wheel::getSize() const
{
    return size;
}
//setter renkaan koolle
void Wheel::setSize(int newSize)
{
    size = newSize;
}
//getter renkaan tyypille
string Wheel::getType() const
{
    return type;
}
//setter renkaan tyypille
void Wheel::setType(const string &newType)
{
    type = newType;
}


