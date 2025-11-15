#include "animal.h"
#include "dog.h"

#include <iostream>
using namespace std;

int main() {
    {
        Animal* objAnimal = new Animal();
        objAnimal->callOut();
        delete objAnimal;
    }

    {
        Dog* objDog = new Dog();
        objDog->callOut();
        delete objDog;
    }

    return 0;
}
