#include <iostream>
using namespace std;

int main() {
    int i;
    // {1, 2, 7} dla tablicy 5-elementowej = {1, 2, 7, 0, 0}
    // brakujace elementy sa uzupelniane zerami
    int tab[5] = {1, 2, 7};

    cout << "Wyswietlanie wartosci parzystych:" << endl;
    for (i = 0; i < 5; i++) {
        if (tab[i] % 2 == 0) {
            cout << "tab[" << i << "]=" << tab[i] << endl;
        }
    }

    cout << "Wyswietlanie wartosci nieparzystych:" << endl;
    for (i = 0; i < 5; i++) {
        if (tab[i] % 2 != 0) {
            cout << "tab[" << i << "]=" << tab[i] << endl;
        }
    }

    return 0;
}
