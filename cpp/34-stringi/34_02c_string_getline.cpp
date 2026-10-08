#include <iostream>
#include <string>
using namespace std;

// PRZYKLAD 34 - string + getline (str. 267)
// Tak jak tablica znakow, ale tekst podajemy przez getline(cin, zmienna)
int main() {
    string dane;
    cout << "Podaj imie i nazwisko: ";
    getline(cin, dane);
    cout << "Twoje dane osobowe: " << dane << endl;
    return 0;
}
