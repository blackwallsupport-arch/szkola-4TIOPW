#include <iostream>
#include <cstdlib>
using namespace std;

// PRZYKLAD 31.10 - liczby od 25 do 1 - petla DO...WHILE
// To samo zadanie mozna rozwiazac petla WHILE (wersja w komentarzu).
int main()
{
    int i = 25;
    do
    {
        cout << i << endl;
        i--;
    } while (i >= 1);

    // Wersja z petla WHILE:
    // int i = 25;
    // while (i >= 1)
    // {
    //     cout << i << endl;
    //     i--;
    // }

    cout << flush; system("pause");


    return 0;
}


