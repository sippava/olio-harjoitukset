#include "car.h"
#include <iostream>
using namespace std;

Car::Car() {
    cout << "luotiin olio" << endl;
}

/*Car::~Car()
{
    cout << " tuhottiin olio "<< endl;
}
*/



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

void Car::printData() const {
    cout << "Merkki: " << brand << endl;
    cout << "Malli: " << model << endl;
    cout << "Vuosimalli: " << yearModel << endl;
}


