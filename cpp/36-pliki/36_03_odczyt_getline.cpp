#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// PRZYKLAD 36.3 - odczytywanie zawartosci pliku linia po linii
// getline(plik,wiersz) zwraca FALSE gdy koniec pliku -> petla sie konczy
int main()
{
    fstream plik;
    plik.open("dane.txt", ios::in);
    if (plik.good() == false)
    {
        cout << "Nie udalo sie otworzyc pliku" << endl;
    }
    else
    {
        string wiersz;
        while (getline(plik, wiersz))
        {
            cout << wiersz << endl;
        }
    }
    plik.close();
    return 0;
}
