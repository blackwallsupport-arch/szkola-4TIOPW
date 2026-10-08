#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Przyklad 33.12 - losowanie wartosci do tablicy 2D
    int tab2[3][3];
    int i, j;

    srand(time(NULL));

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            tab2[i][j] = rand() % 100 + 1; // zakres 1-100
        }
    }

    cout << "Wylosowana tablica:" << endl;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cout << tab2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
