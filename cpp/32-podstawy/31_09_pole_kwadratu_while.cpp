#include <iostream>
#include <cstdlib>
using namespace std;

// PRZYKLAD 31.9 - pole kwadratu z kontrola poprawnosci (petla WHILE)
int main()
{
    float a, pole;
    cout << "Podaj dlugosc boku kwadratu: ";
    cin >> a;
    while (a <= 0)
    {
        cout << "Podaj jeszcze raz dlugosc boku. Pamietaj, aby dlugosc byla dodatnia: ";
        cin >> a;
    }
    pole = a * a;
    cout << "pole kwadratu wynosi: " << pole;
    cout << flush; system("pause");

    return 0;
}


