#include <iostream>
using namespace std;

int main() {
    // Przyklad 33.11 - wczytywanie tablicy 2D od uzytkownika
    float tab2[3][3];
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cout << "Podaj wartosc elementu [" << i << "][" << j << "]: ";
            cin >> tab2[i][j];
        }
    }

    cout << "Wprowadzona tablica:" << endl;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cout << tab2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
