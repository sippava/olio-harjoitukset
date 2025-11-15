#include "italianchef.h"
#include <iostream>

ItalianChef::ItalianChef(string n): Chef(n) {


    cout <<"Italian Chef " << name << "konstruktori " << endl;
}

string ItalianChef::getName()
{
    return name;

}

void ItalianChef::makePasta()
{
    cout << "Italian Chef " << name << "makes pasta " << endl;
}

ItalianChef::~ItalianChef()
{

    cout <<"Italian Chef " << name << "destruktori " << endl;
}


