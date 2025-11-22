#include "car.h"

#include <iostream>

using namespace std;

int main()
{
    Car objCar("Toyota ", "Corolla ");
    objCar.setObjEngine();
    objCar.setObjWheel1();
    objCar.setObjWheel2();
    objCar.setObjWheel3();
    objCar.setObjWheel4();
    objCar.printDetails();


    return 0;
}
