#include <iostream>
#include <fstream>
using namespace std;

// PRZYKLAD 36.2 - odczytywanie / sprawdzanie czy plik sie otworzyl
// open z modyfikatorem in + metoda good()
// W ksiazce: plik.open("c:/dane/dane.txt",ios::in);
int main()
{
    fstream plik;
    plik.open("dane.txt", ios::in);
    if (plik.good() == true)
    {
        cout << "Udalo sie otworzyc plik" << endl;
    }
    else
    {
        cout << "Nie udalo sie otworzyc pliku" << endl;
    }
    plik.close();
    return 0;
}
