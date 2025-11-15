#include "chef.h"
#include "italianchef.h"

#include <iostream>

using namespace std;

int main(){
    {
    Chef objchef("Gordon Ramsey ");
    objchef.makeSalad();
    objchef.makeSoup();
    }
    {
    ItalianChef objitalianchef("Anthony Bourdain ");
    objitalianchef.makeSalad();
    objitalianchef.makeSoup();
    objitalianchef.makePasta();

    cout << "name of the Italian Chef is " << objitalianchef.getName() << endl;
    return 0;
    }
}







