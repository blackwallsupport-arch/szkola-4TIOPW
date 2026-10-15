#include <iostream>
#include <cstdlib>
using namespace std;

// PRZYKLAD 31.7 - petla WHILE - liczby od 1 do 25 w postaci kolumnowej
int main()
{
    int i = 1;
    while (i <= 25)
    {
        cout << i << endl;
        i++;
    }
    cout << flush; system("pause");

    return 0;
}


