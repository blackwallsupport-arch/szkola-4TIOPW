#include <iostream>
#include <cstdlib>
using namespace std;

// PRZYKLAD 31.13 - silnia - petla FOR
int main()
{
    int i, n, silnia;
    cout << "Podaj n: ";
    cin >> n;
    silnia = 1;
    for (i = 1; i <= n; i++)
    {
        silnia = silnia * i;
    }
    cout << "Silnia wynosi: " << silnia;
    cout << flush; system("pause");

    return 0;
}


