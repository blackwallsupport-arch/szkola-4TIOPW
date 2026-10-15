#include <iostream>
#include <cstring>
using namespace std;

// PRZYKLAD 34.4 - tablice znakow traktujemy jak zwykla tablice
// Program liczy litery 'a' / 'A' w tekscie podanym przez uzytkownika
int main() {
    char dane[100];
    int dl, ilosc = 0;

    cout << "Podaj dowolny tekst: ";
    cin.getline(dane, 100);

    dl = strlen(dane);
    for (int i = 0; i < dl; i++) {
        if (dane[i] == 'a' || dane[i] == 'A')
            ilosc = ilosc + 1;
    }

    cout << "W tekscie znajduje sie " << ilosc << " liter a." << endl;
    return 0;
}
