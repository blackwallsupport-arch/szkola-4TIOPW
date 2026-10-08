#include <iostream>
#include <cstdlib>
using namespace std;

// PRZYKLAD 31.4 - sprawdzenie czy liczba jest parzysta i podzielna przez 3
int main()
{
    int liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;

    // wersja z jednym warunkiem zlozonym (tak jak w ksiazce na koncu):
    if (liczba % 2 == 0 && liczba % 3 == 0) // warunek zlozony
        cout << "Liczba " << liczba << " jest parzysta i podzielna przez 3.";
    else
        cout << "Liczba " << liczba << " nie jest jednoczesnie parzysta i podzielna przez 3.";

    cout << flush; system("pause");


    return 0;
}


