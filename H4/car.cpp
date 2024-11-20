#include "car.h"

//Konstruktorit
Car::Car() {}

Car::Car(string e, string f)
{
    model = e;
    brand = f;
}
//getModel getteri
string Car::getModel() const
{
    return model;
}
//setModel setteri
void Car::setModel(const string &newModel)
{
    model = newModel;
}
//getBrand getteri
string Car::getBrand() const
{
    return brand;
}

//SetBrand setteri
void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

//Asetetaan moottorin hevosvoimat ja tilavuus
void Car::setEngine()
{
    objEngine.setHorsepower(150);
    objEngine.setDisplacement(2.0);
}

//Asetetaan renkaiden koko ja tyyppi
void Car::setWheels()
{
    objWheel1.setSize(17);
    objWheel1.setType("Kesarengas");

    objWheel2.setSize(17);
    objWheel2.setType("Kesarengas");

    objWheel3.setSize(17);
    objWheel3.setType("Kesarengas");

    objWheel4.setSize(17);
    objWheel4.setType("Kesarengas");
}

//Tulostetaan auton tiedot
void Car::printDetails()
{
    cout << "Auto : " << getModel() << " "<<getBrand() << endl;
    cout << "Moottori: " << objEngine.getHorsepower() << " hp, " << objEngine.getDisplacement() << " L"<<endl;
    cout << "Rengas 1:" << objWheel1.getSize() << " tuumaa, " << objWheel1.getType() << endl;
    cout << "Rengas 2:" << objWheel2.getSize() << " tuumaa, " << objWheel2.getType() << endl;
    cout << "Rengas 3:" << objWheel3.getSize() << " tuumaa, " << objWheel3.getType() << endl;
    cout << "Rengas 4:" << objWheel4.getSize() << " tuumaa, " << objWheel4.getType() << endl;
}
