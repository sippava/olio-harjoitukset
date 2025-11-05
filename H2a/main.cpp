#include <iostream>
#include <memory>
#include "Car.h"
#include "rectangle.h"
#include "student.h"
using namespace std;

int main() {

    Car objCar1;


    objCar1.setBrand("Renault");
    objCar1.setModel("Laguna");
    objCar1.setYearModel(2009);


    objCar1.printData();


    Rectangle *objRec1= new Rectangle();

    objRec1->setWidth(5.0);
    objRec1->setHeight(3.0);
    objRec1->tulostaSuorakulmio();

    delete objRec1;
    objRec1=nullptr;

    unique_ptr<Student> opiskelija = make_unique<Student>();

    opiskelija->setName("Valtteri");
    opiskelija->setStudentNumber(12345);
    opiskelija->setAverage(4.3);


    cout << "Nimi: " << opiskelija->getName() << endl;
    cout << "Opiskelijanumero: " << opiskelija->getStudentNumber() << endl;
    cout << "Keskiarvo: " << opiskelija->getAverage() << endl;

    return 0;
}





