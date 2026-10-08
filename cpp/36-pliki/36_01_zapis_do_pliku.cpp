#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// PRZYKLAD 36.1 - zapisywanie danych do pliku tekstowego
// Program pyta o imie i znak zodiaku, zapisuje do plik dane.txt
int main()
{
    string imie, zodiak;
    cout << "Podaj imie: ";
    cin >> imie;
    cout << "Podaj znak zodiaku: ";
    cin >> zodiak;

    // zmienna plikowa
    fstream plik;
    // otwarcie pliku do zapisu (w ksiazce: "c:/dane/dane.txt",ios::out)
    // tu sciezka wzgledna, zeby dzialalo bez tworzenia C:/dane
    plik.open("dane.txt", ios::out);
    // zapisanie imienia do pliku
    plik << imie << endl;
    // zapisanie znaku zodiaku do pliku
    plik << zodiak << endl;
    // zamkniecie pliku
    plik.close();

    cout << "Zapisano do dane.txt" << endl;
    return 0;
}
