#include <iostream>
#include <cstdlib>
using namespace std;

// PRZYKLAD 31.15 - zagniezdzenie kilku petli - trojkat z "#"
int main()
{
    int i, j, k;
    for (i = 1; i <= 10; i++)
    {
        // wstawianie spacji
        for (k = 1; k <= 10 - i; k++)
            cout << " ";
        // wstawianie #
        for (j = 1; j <= i; j++)
            cout << "# ";
        cout << endl;
    }
    cout << flush; system("pause");

    return 0;
}


