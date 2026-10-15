#include <iostream>
#include <cstdlib>
using namespace std;

// PRZYKLAD 31.6 - instrukcja SWITCH - dni tygodnia
int main()
{
    int dzien;
    cout << "Podaj cyfre od 1 do 7" << endl;
    cin >> dzien;
    switch (dzien)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    default:
        cout << "Podales zla liczbe";
        break;
    }
    cout << flush; system("pause");

    return 0;
}


