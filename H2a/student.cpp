#include "student.h"
#include <iostream>
using namespace std;

Student::Student()
{
    cout << "luotiin taas kerran olio " << endl;
}

int Student::getStudentNumber() const
{
    return StudentNumber;
}

void Student::setStudentNumber(int newStudentNumber)
{
    StudentNumber = newStudentNumber;
}

double Student::getAverage() const
{
    return average;
}

void Student::setAverage(double newAverage)
{
    average = newAverage;
}



string Student::getName() const
{
    return name;
}

void Student::setName(const string &newName)
{
    name = newName;
}


