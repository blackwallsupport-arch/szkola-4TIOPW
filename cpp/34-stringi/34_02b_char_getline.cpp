#include <iostream>
#include <cstring>
using namespace std;

// PRZYKLAD 34.2b - to samo ale poprawnie: cin.getline pobiera cala linie ze spacjami
int main() {
    char dane[50];
    cout << "Podaj imie i nazwisko: ";
    cin.getline(dane, 50);
    cout << "Twoje dane osobowe: " << dane << endl;
    return 0;
}
