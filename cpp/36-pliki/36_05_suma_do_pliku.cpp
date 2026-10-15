#include <iostream>
#include <fstream>
using namespace std;

// PRZYKLAD 36.5 - pobiera dane z pliku liczby.txt, wyswietla,
// liczy sume t1[i]+t2[i] do t3, zapisuje do nowe_liczby.txt
int t1[10], t2[10], t3[10], i;
int nr_linii = 1;
string linia;
int main()
{
    fstream plik, plik1;
    plik.open("liczby.txt", ios::in);
    if (plik.good() == false)
    {
        cout << "Nie moge otworzyc pliku" << endl;
    }
    else
    {
        // wczytywanie odbywa sie az napotkamy na koniec pliku
        // wczytywanie danych z pliku do tablic
        for (i = 0; i < 10; i++)
        {
            plik >> t1[i] >> t2[i];
        }
        plik1.open("nowe_liczby.txt", ios::out);
        // wyswietlenie wartosci tablic
        for (i = 0; i < 10; i++)
        {
            cout << t1[i] << "\t" << t2[i] << "\t" << t1[i] + t2[i] << endl;
            t3[i] = t1[i] + t2[i];
            plik1 << t1[i] << " " << t2[i] << " " << t3[i] << endl;
        }
        plik1.close();
    }
    plik.close();
    return 0;
}
