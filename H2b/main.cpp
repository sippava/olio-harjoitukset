#include <car.h>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<Car> carList;
    // Luodaan olioita listaan
    carList.emplace_back("Kia", "Sorento", 2009);
    carList.emplace_back("Renault", "Clio", 2001);
    carList.emplace_back("Toyota", "Avensis", 1998);


    cout << "Toisen auton tiedot:\n" << endl;
    carList[1].printData();


    cout << "\nKaikkien autojen tiedot:\n" << endl;

    for(int i=0; i < 3; i++){
        carList[i].printData();
         cout << endl;
    }
    return 0;
}
