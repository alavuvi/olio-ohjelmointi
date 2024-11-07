#include <iostream>
#include "car.h"
#include "rectangle.h"
#include "student.h"
#include <memory>

using namespace std;

int main()
{
    // Car olion luonti pinomuistiin
    Car objCar;
    objCar.setBrand("Skoda");
    objCar.setModel("Octavia");
    objCar.setYearModel(2016);
    cout << "Auton tiedot: \n";
        cout << "Auton merkki on: "<< objCar.getBrand()<<endl;
        cout << "Auton malli on: " <<objCar.getModel()<<endl;
        cout << "Auton vuosimalli on: "<<objCar.getYearModel()<<endl;
        cout << "********************* \n";

    // Rectangle olion luonti kekomuistiin
    Rectangle *objRectangle = new Rectangle;
    objRectangle->setWidth(3);
    objRectangle->setHeight(3);

    cout << "Suorakulmion pinta-alan ja ymparysmitan laskeminen: \n";
        cout << "Suorakulmion pinta-ala: " << objRectangle->getArea()<< endl;
        cout << "Suorakulmion ymparysmitta: " << objRectangle->getCircum()<< endl;
        cout << "********************* \n";

        delete objRectangle;
        objRectangle = nullptr;

    // Student olion luonti smart pointerilla
    unique_ptr<Student> objStudent = make_unique<Student>();
    objStudent->setName("Matti Meikalainen");
    objStudent->setStudentNumber(44455);
    objStudent->setAverage(3.8);

    cout << "Opiskelijan tiedot: \n";
    cout << "Nimi: " << objStudent->getName()<<endl;
    cout << "Opiskelijanumero: " << objStudent->getStudentNumber()<<endl;
    cout << "Keskiarvo: " << objStudent->getAverage()<<endl;

    return 0;
}
