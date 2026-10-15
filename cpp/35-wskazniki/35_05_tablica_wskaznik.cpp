#include <iostream>
using namespace std;

// PRZYKLAD 35.5 - wskaznik a tablica
// Nazwa tablicy jest wskaznikiem na jej pierwszy element: *TAB1 == TAB1[0]
int main() {
    int tab[6] = {2, 4, 6, 8, 10, 12};

    // Wypisanie pierwszego elementu tablicy, czyli tab[0]
    cout << "*tab = " << *tab << endl;
    // Wypisanie trzeciego elementu tablicy
    cout << "*(tab+2) = " << *(tab + 2) << endl;

    // Wypisanie kolejno elementow tablicy poruszajac sie po niej wskaznikiem
    for (int i = 0; i < 6; i++) {
        cout << "tab[" << i << "] = " << *(tab + i) << endl;
    }

    return 0;
}
