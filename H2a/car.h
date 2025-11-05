#ifndef CAR_H
#define CAR_H

#include <string>
using namespace std;


class Car
{
private:
    string brand;
    string model;
    int yearModel;
public:
    Car();
    //~Car();

    void printData () const;

    void setBrand(const string &newBrand);
    void setModel(const string &newModel);
    void setYearModel(int newYearModel);
};

#endif // CAR_H
