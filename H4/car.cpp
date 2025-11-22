#include "car.h"
#include <iostream>
using namespace std;

void Car::setObjWheel2()
{
    //objWheel2 = newObjWheel2;
    objWheel2.setSize(17);
    objWheel2.setType("Kesarengas");
}

void Car::setObjWheel3()
{
    //objWheel3 = newObjWheel3;
    objWheel3.setSize(17);
    objWheel3.setType("Kesarengas");

}

void Car::setObjWheel4()
{
    //objWheel4 = newObjWheel4;
    objWheel4.setSize(17);
    objWheel4.setType("Kesarengas");
}


string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

void Car::printDetails()
{
    cout << "Auto : " << brand << model << endl;
    cout << "Moottori: " << objEngine.getHorsepower() <<" HP " << objEngine.getDisplacement() << " L " << endl;
    cout << "Rengas 1: " << objWheel1.getSize() << " Tuumaa, " << objWheel1.getType() << endl;
    cout << "Rengas 2: " << objWheel2.getSize() << " Tuumaa, " << objWheel2.getType() << endl;
    cout << "Rengas 3: " << objWheel3.getSize() << " Tuumaa, " << objWheel3.getType() << endl;
    cout << "Rengas 4: " << objWheel4.getSize() << " Tuumaa, " <<objWheel4.getType() << endl;



}

void Car::setObjEngine()
{
    //objEngine = newObjEngine;
    objEngine.setHorsepower(150);
    objEngine.setDisplacement(2.0);

}

void Car::setObjWheel1()
{
    //objWheel1 = newObjWheel1;
    objWheel1.setSize(17);
    objWheel1.setType("Kesarengas");
}
    Car::Car(string m, string b): model(m), brand(b) {

}
