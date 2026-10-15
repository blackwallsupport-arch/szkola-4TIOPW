#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
using namespace std;

// PRZYKLAD 36.4 - program tworzy plik liczby.txt
// Losuje dwie tablice t1 i t2 z zakresu <1,10>, zapisuje w dwoch kolumnach
int t1[10], t2[10], i;
int main()
{
    fstream plik;
    srand(time(NULL));
    // generowanie liczb dla t1 i t2
    for (i = 0; i < 10; i++)
    {
        t1[i] = rand() % 10 + 1;
        t2[i] = rand() % 10 + 1;
    }
    plik.open("liczby.txt", ios::out);
    // zapisywanie danych do pliku
    for (i = 0; i < 10; i++)
    {
        plik << t1[i] << " " << t2[i] << endl;
    }
    cout << "Dane zostaly wczytane do pliku" << endl;
    plik.close();
    return 0;
}
