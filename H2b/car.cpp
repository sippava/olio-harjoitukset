#include "car.h"
#include <iostream>
using namespace std;

Car::Car()
{
    cout << "Luotiin olio" << endl;
}


void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

void Car::setYearModel(int newYearModel)
{
    yearModel = newYearModel;
}



Car::Car(string b, string m, int y)
{
    brand=b;
    model=m;
    yearModel=y;

}



void Car::printData() const
{
    cout << brand << endl;
    cout << model << endl;
    cout <<yearModel << endl;
}

