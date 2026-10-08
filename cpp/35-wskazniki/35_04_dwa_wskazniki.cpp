#include <iostream>
using namespace std;

// PRZYKLAD 35.4 - dwa wskazniki na ta sama zmienna
// Za pomoca wskaznikow mozna modyfikowac wartosci innych zmiennych
int main() {
    int liczba = 5;
    int *a, *b;
    a = &liczba; // zmienna a wskazuje na adres zmiennej liczba
    b = &liczba; // zmienna b wskazuje na adres zmiennej liczba

    // Wypisanie wartosci, ktora przechowuje zmienna liczba
    cout << "liczba = " << liczba << endl;
    cout << "*a = " << *a << endl;
    cout << "*b = " << *b << endl;

    // zmiana przez wskaznik
    *a = 78;
    cout << "Po zmianie *a = 78:" << endl;
    cout << "liczba = " << liczba << endl;
    cout << "*b = " << *b << endl;

    *b = 34;
    cout << "Po zmianie *b = 34:" << endl;
    cout << "liczba = " << liczba << endl;
    cout << "*a = " << *a << endl;

    return 0;
}
