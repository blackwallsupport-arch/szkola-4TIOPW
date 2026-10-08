#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int tab[10];
    int i, suma = 0;

    srand(time(NULL));

    for (i = 0; i < 10; i++) {
        // losowanie wartosci z zakresu od 1 do 100
        tab[i] = rand() % 100 + 1;
        cout << "tab[" << i << "]=" << tab[i] << endl;
        suma = suma + tab[i];
    }

    cout << "Suma wartosci w tablicy wynosi: " << suma << endl;

    return 0;
}
