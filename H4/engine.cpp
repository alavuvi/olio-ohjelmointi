#include "engine.h"

//Konstruktorit
Engine::Engine() {}

Engine::Engine(int c, double d)
{
    horsepower = c;
    displacement = d;
}
//Getter hevosvoimille
int Engine::getHorsepower() const
{
    return horsepower;
}
//Setter hevosvoimille
void Engine::setHorsepower(int newHorsepower)
{
    horsepower = newHorsepower;
}
//Getter moottoritilavuudelle
double Engine::getDisplacement() const
{
    return displacement;
}
//Setter moottoritilavuudelle
void Engine::setDisplacement(double newDisplacement)
{
    displacement = newDisplacement;
}
