#include <iostream>
using namespace std;

int main() {
    // 15. Suma liczb podanych przez usera (for + cin)
    int n;
    cout << "Ile liczb chcesz dodac? ";
    cin >> n;

    int suma = 0;
    for (int i = 1; i <= n; i++) {
        int liczba;
        cout << "Podaj liczbe " << i << ": ";
        cin >> liczba;
        suma += liczba;
    }
    cout << "Suma = " << suma << endl;

    // 16. Silnia - np. 5! = 1*2*3*4*5 = 120
    int m;
    cout << "Podaj liczbe do silni: ";
    cin >> m;

    long long silnia = 1;
    for (int i = 1; i <= m; i++) {
        silnia *= i;
    }
    cout << m << "! = " << silnia << endl;
    return 0;
}
