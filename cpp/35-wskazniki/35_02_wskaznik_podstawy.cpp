#include <iostream>
using namespace std;

// PRZYKLAD 35.2 - wskaznik podstawowy
// & - operator pobrania adresu, * - operator odwolania (zawartosc)
int main() {
    int wyr = 25;
    int *liczba;
    liczba = &wyr;
    cout << "*liczba = " << *liczba << endl;
    cout << "liczba = " << liczba << endl;
    return 0;
}
