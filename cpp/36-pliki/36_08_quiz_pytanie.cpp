#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// PRZYKLAD 36.8 - quiz z pliku pytanie.txt
// Plik ma 5 linii: pytanie, odp A, odp B, odp C, poprawna odpowiedz np. "2"
// Rys. 36.4: Co jest wynikiem wyrazenia (3+4)*2-12= / 3 / 2 / 5 / 2
string pytanie;
string odpA, odpB, odpC;
string wynik;
string odpowiedz;
int main()
{
    int nr_wiersza = 1;
    string wiersz;
    fstream plik;
    plik.open("pytanie.txt", ios::in);
    while (getline(plik, wiersz))
    {
        if (nr_wiersza == 1) pytanie = wiersz;
        if (nr_wiersza == 2) odpA = wiersz;
        if (nr_wiersza == 3) odpB = wiersz;
        if (nr_wiersza == 4) odpC = wiersz;
        if (nr_wiersza == 5) wynik = wiersz;
        nr_wiersza++;
    }
    cout << endl << pytanie << endl;
    cout << odpA << endl;
    cout << odpB << endl;
    cout << odpC << endl;
    cout << "Podaj odpowiedz: ";
    cin >> odpowiedz;
    if (odpowiedz == wynik)
    {
        cout << "Prawidlowa odpowiedz" << endl;
    }
    else cout << "Zle! Poprawna odpowiedz jest: " << wynik;
    plik.close();
    return 0;
}
