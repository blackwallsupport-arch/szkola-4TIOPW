#include <iostream>
#include <cstdlib>
using namespace std;

// PRZYKLAD 31.11 - petla FOR - 5 razy komunikat
int main()
{
    int i;
    for (i = 1; i <= 5; i++)
    {
        cout << "Programowanie w C++" << endl;
        // albo: cout << "Ucze sie programowac w jezyku C++" << endl;
    }
    cout << flush; system("pause");

    return 0;
}


