#include <iostream>
using namespace std;

int tab1[5];
int i;

int main() {
    // Wpisywanie kolejnych liczb naturalnych do tablicy
    for (i = 0; i < 5; i++) {
        tab1[i] = i + 1;
    }

    // Wyswietlanie zawartosci tablicy
    for (i = 0; i < 5; i++) {
        cout << "tab1[" << i << "]=" << tab1[i] << endl;
    }

    return 0;
}
