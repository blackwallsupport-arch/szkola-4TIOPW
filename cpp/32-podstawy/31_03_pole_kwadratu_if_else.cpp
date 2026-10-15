#include <iostream>
#include <cstdlib>
using namespace std;

// PRZYKLAD 31.3 - pelna instrukcja IF...ELSE
// Pole kwadratu, z komunikatem o zle wprowadzonej wartosci.
int main()
{
    float a, pole;
    cout << "Podaj dlugosc boku kwadratu: ";
    cin >> a;
    if (a > 0)
    {
        pole = a * a;
        cout << "pole kwadratu wynosi: " << pole;
    }
    else
    {
        cout << "Dlugosc boku kwadratu musi byc liczba dodatnia.";
    }
    cout << flush; system("pause");

    return 0;
}


