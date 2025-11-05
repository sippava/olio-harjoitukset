#include "rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle() {
    cout << "luodaan taas olio" << endl;
}

double Rectangle::getArea() const {
    return width * height;
}

double Rectangle::getCircum() const {
    return 2 * (width + height);
}

void Rectangle::setWidth(double newWidth) {
    width = newWidth;
}

void Rectangle::setHeight(double newHeight) {
    height = newHeight;
}

void Rectangle::tulostaSuorakulmio() const
{

    cout << "Pinta-ala: "  << getArea() << endl;
    cout << "Ymparysmitta: " << getCircum() << endl;

}



