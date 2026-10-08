#include <iostream>
using namespace std;

int main() {
    // Jesli podamy dokladnie tyle wartosci ile elementow - wszystkie sa wypelnione
    int tab1[5] = {1, 2, 3, 4, 5};

    // Jesli podamy mniej wartosci - reszta uzupelniana jest zerami
    // tab2 = {1, 2, 0}
    int tab2[3] = {1, 2};

    cout << "tab1: ";
    for (int i = 0; i < 5; i++) {
        cout << tab1[i] << " ";
    }
    cout << endl;

    cout << "tab2: ";
    for (int i = 0; i < 3; i++) {
        cout << tab2[i] << " ";
    }
    cout << endl;

    return 0;
}
