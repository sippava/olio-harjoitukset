#ifndef CAR_H
#define CAR_H

#include "engine.h"
#include "wheel.h"

#include <string>

using namespace std;



class Car
{

private:
    Engine objEngine;
    Wheel objWheel1;
    Wheel objWheel2;
    Wheel objWheel3;
    Wheel objWheel4;
    string model;
    string brand;

public:
    Car();
    Car(string, string);
    void printDetails();
    void setObjEngine();
    void setObjWheel1();
    void setObjWheel2();
    void setObjWheel3();
    void setObjWheel4();
    string getModel() const;
    void setModel(const string &newModel);
    string getBrand() const;
    void setBrand(const string &newBrand);
};

#endif // CAR_H
