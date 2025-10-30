#include <iostream>
#include <stdexcept>  // tarvitaan runtime_erroria varten



using namespace std;

void calcSum(int a, int b){
    cout << "lukujen " << a << " ja " << b << " summa on  " << a+b << endl;


}

void calcDiv (int a, int b){
    if ( b == 0){
        cout << " virheilmoitus " << b <<  endl;
    } else {
    cout << "lukujen " << a << " ja " << b << " osamaara on  " << a/b << endl;
    }


}

int retSum (int a, int b){
    return a+b;
}

float retDiv (int a, int b){
    if ( b < 0){
        throw std::runtime_error("jakaja ei saa olla negatiivinen.");
    }
    else{
        return ((float)a / (float)b);
    }

}



int main()
{

    int a;
    int b;

    cout << "Anna eka luku" << endl;
    cin >> a;
    cout << "Anna toka luku" << endl;
    cin >> b;
    cout << "Annoit luvut " << a << " ja " << b << endl;

    calcSum( a, b);
    calcDiv( a, b);
    int summa=retSum( a,b);


    //jos try-lohkossa nousee runtime error, hypätään catch-lohkoon
    try {
        float result = retDiv(a,b);
        cout << a << "/" <<  b << " = " << result << endl;
    } catch (runtime_error& e) {
        cout<<"Error: "<< e.what()<< endl;
    }




    return 0;
}
