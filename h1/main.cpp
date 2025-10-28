#include <iostream>
using namespace std;

// Funktio, joka tulostaa summan
void calcSum(int x, int y) {
    cout << "Summa (calcSum): " << x + y << endl;
}

// Funktio, joka tulostaa osamäärän tai virheilmoituksen
void calcDiv(int x, int y) {
    if (y == 0) {
        cout << "Virhe: nollalla ei voi jakaa (calcDiv)." << endl;
    } else {
        cout << "Osamäärä (calcDiv): " << static_cast<float>(x) / y << endl;
    }
}

// Funktio, joka palauttaa summan
int retSum(int x, int y) {
    return x + y;
}

// Funktio, joka palauttaa osamäärän
float retDiv(int x, int y) {
    if (y == 0) {
        return 0.0f; // vaihtoehtoisesti voisi heittää poikkeuksen
    }
    return static_cast<float>(x) / y;
}

int main() {
    int a, b;

    cout << "Anna ensimmäinen kokonaisluku: ";
    cin >> a;
    cout << "Anna toinen kokonaisluku: ";
    cin >> b;

    // Tulostavat funktiot
    calcSum(a, b);
    calcDiv(a, b);

    // Palauttavat funktiot
    int summa = retSum(a, b);
    float osamaara = retDiv(a, b);

    cout << "Summa (retSum): " << summa << endl;
    if (b != 0) {
        cout << "Osamäärä (retDiv): " << osamaara << endl;
    } else {
        cout << "Osamäärä (retDiv): ei voida laskea, jakaja on nolla." << endl;
    }

    return 0;
}
