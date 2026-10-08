#include <iostream>
#include <fstream>
using namespace std;

// PRZYKLAD 36.6 - odczyt operatorem >> (slowo po slowie)
// >> czyta do spacji/enteru, wiec dla zdania "programowanie jest fajne"
// wyswietli tylko pierwsze slowo. Pelny tekst: while + get/getline.
string zdanie;
int main()
{
    fstream plik;
    // otwarcie pliku do zapisu i odczytu
    plik.open("tekst.txt", ios::out | ios::in);
    // odczyt z pliku (tu: pierwsze slowo)
    plik >> zdanie;
    cout << zdanie;
    // zamkniecie pliku
    plik.close();
    return 0;
}
