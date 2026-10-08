#include <iostream>
using namespace std;

// PRZYKLAD 35.6 - wskazniki jako argumenty funkcji (zamiana)
// Kopie by nie zadzialaly - trzeba przekazac adresy, zeby funkcja
// zmienila oryginaly, a nie kopie.
void zamien(int *liczba1, int *liczba2) {
    int pom = *liczba1;
    *liczba1 = *liczba2;
    *liczba2 = pom;
}

int main() {
    int a, b;
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;

    cout << "Przed zamiana: " << endl;
    cout << "a = " << a << " b = " << b << endl;

    zamien(&a, &b);

    cout << "Po zamianie: " << endl;
    cout << "a = " << a << " b = " << b << endl;

    return 0;
}
