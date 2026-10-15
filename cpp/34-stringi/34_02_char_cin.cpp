#include <iostream>
using namespace std;

// PRZYKLAD 34.2 - tablica znakowa (C-string), wczytywanie przez cin>>
// cin>> przerywa na pierwszej spacji!
int main() {
    char dane[50];
    cout << "Podaj imie i nazwisko: ";
    cin >> dane;
    cout << "Twoje dane osobowe: " << dane << endl;
    return 0;
}
