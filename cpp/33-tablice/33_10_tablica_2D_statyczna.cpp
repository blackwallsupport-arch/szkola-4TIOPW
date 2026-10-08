#include <iostream>
using namespace std;

int main() {
    // Przyklad 33.9 - tablica wielowymiarowa
    // float tab3[4][2] - 4 wiersze, 2 kolumny
    float tab3[4][2];

    // Przyklad 33.10 - tablica 3x3
    float tab2[3][3];

    tab2[0][0] = 1;
    tab2[0][1] = 2;
    tab2[0][2] = 3;
    tab2[1][0] = 4;
    tab2[1][1] = 5;
    tab2[1][2] = 6;
    tab2[2][0] = 7;
    tab2[2][1] = 8;
    tab2[2][2] = 9;

    // wyswietlenie w postaci macierzy
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << tab2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
