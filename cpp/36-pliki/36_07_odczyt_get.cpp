#include <iostream>
#include <fstream>
using namespace std;

// PRZYKLAD 36.7 - odczyt znak po znaku funkcja get()
// get() czyta tez spacje/tab, w petli while(!eof) wyswietla caly plik
char litera;
int main()
{
    fstream plik;
    // otwarcie pliku do zapisu i odczytu
    plik.open("tekst.txt", ios::out | ios::in);
    // odczytanie pliku znak po znaku
    while (!plik.eof())
    {
        plik.get(litera);
        cout << litera;
    }
    plik.close();
    return 0;
}
