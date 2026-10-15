#include <iostream>
using namespace std;

// Przyklad 33.7 - przekazywanie tablicy do funkcji
// Tablicy nie da sie przekazac przez wartosc,
// podajemy tylko adres poczatku tablicy.
void funkcja(int tab[]) {
    for (int i = 0; i < 3; i++) {
        cout << "tab[" << i << "]=" << tab[i] << endl;
    }
}

int main() {
    int t[3] = {3, 2, 4};
    funkcja(t); // w wywolaniu nie uzywamy nawiasow kwadratowych
    return 0;
}
