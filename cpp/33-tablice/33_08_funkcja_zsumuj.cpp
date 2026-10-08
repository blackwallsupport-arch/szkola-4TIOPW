#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Przyklad 33.8 - funkcja zsumuj liczy sume elementow tablicy
void zsumuj(int tab[]) {
    int suma = 0;
    for (int i = 0; i < 10; i++) {
        suma = suma + tab[i];
    }
    cout << "Suma wynosi: " << suma << endl;
}

int main() {
    int tab[10];
    int i;

    srand(time(NULL));

    for (i = 0; i < 10; i++) {
        tab[i] = rand() % 100 + 1;
        cout << "tab[" << i << "]=" << tab[i] << endl;
    }

    zsumuj(tab);

    return 0;
}
