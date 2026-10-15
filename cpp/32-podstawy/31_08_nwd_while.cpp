#include <iostream>
#include <cstdlib>
using namespace std;

// PRZYKLAD 31.8 - petla WHILE - NWD dwoch liczb (przez odejmowanie)
int main()
{
    int a, b;
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;

    while (a != b)
        if (a > b)
            a = a - b;
        else
            b = b - a;

    cout << "Najwiekszy wspolny dzielnik wynosi " << a << endl;
    cout << flush; system("pause");

    return 0;
}


