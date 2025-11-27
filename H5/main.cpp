#include "classa1.h"
#include "classa2.h"
#include "classb.h"
#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int &ref = a;

    cout << "\na:n arvo on " << a << endl;
    cout << "\nMuistipaikan osoite on " << &ref << endl;

    int* pointerA= &a;

    cout << "\nPointterin osoittama osoite on " << pointerA << endl;
    cout << "\nPointterin osoittaman muistipaikan arvo on " << *pointerA << endl;

    int &refA = a;

    cout << "\nrefA:n osoittaa osoitteeseen " << &refA << endl;
    cout << "\nrefA:n osoittaman muistipaikan arvo on " << refA << endl;

    int b = 6;

    cout << "\nb: arvo on " << b << endl;

    refA = b;

    cout << "\nrefA: " << refA << endl;
    cout << "\nrefA:n osoittaa osoitteeseen " << &refA << endl;

    //refA:n arvon saa muutettua b:n arvoksi, mutta osoittaa vieläkin a:n osoitteeseen.

    pointerA=&b;

    cout << "\nPointerA osoittaa osoitteeseen: " << pointerA << endl;
    cout << "\nPointterin osoittaman muistipaikan arvo on " << *pointerA << endl;

    // Havaitsin eroja.

    ClassB objB;
    objB.setInfo("Olion B asettama info");

    ClassA1 objA1(objB);
    objA1.setBinfo("\nOlion objA1 asettama info");

    // Muokataan A1:n sisäistä dataa
    objA1.setBinfo("Muokattu tieto A1");

    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objA1: "<<objA1.getBinfo()<<endl;

    ClassB &refB=objB;
    ClassA2 objA2(refB);
    objA2.setBinfo("Olion Agr asettama info");
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objA2 "<<objA2.getBinfo()<<endl;
    cout<<endl;
  return 0;
}
