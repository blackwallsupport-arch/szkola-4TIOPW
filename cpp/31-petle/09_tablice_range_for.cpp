#include <iostream>
using namespace std;

int main() {
    // 17. For po tablicy
    int liczby[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++) {
        cout << "liczby[" << i << "] = " << liczby[i] << endl;
    }

    // 18. Range-based for (nowoczesny, C++11)
    for (int x : liczby) {
        cout << x << " ";
    }
    cout << endl;

    // 19. Wypisanie liter
    char litery[4] = {'a', 'b', 'c', 'd'};
    for (char c : litery) {
        cout << c << " ";
    }
    cout << endl;

    // 20. Srednia z tablicy
    double oceny[4] = {4.5, 3.0, 5.0, 4.0};
    double suma = 0;
    for (double o : oceny) {
        suma += o;
    }
    cout << "Srednia = " << suma / 4 << endl;
    return 0;
}
