#include <iostream>
#include <cstdlib>
using namespace std;

// PRZYKLAD 31.14 - petle zagniezdzone - kwadrat 10x10 z "x"
int main()
{
    int i, j;
    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            cout << "x ";
        }
        cout << endl;
    }
    cout << flush; system("pause");

    return 0;
}


