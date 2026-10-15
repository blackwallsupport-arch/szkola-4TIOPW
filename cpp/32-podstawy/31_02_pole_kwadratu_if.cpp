#include <iostream>
#include <cstdlib>
using namespace std;

// PRZYKLAD 31.2 - niepelna instrukcja IF
// Napisz program obliczajacy pole kwadratu.
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
    cout << flush; system("pause");

    return 0;
}


