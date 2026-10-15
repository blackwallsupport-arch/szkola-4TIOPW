#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

// PRZYKLAD 31.5 - rozwiazanie rownania kwadratowego ax^2 + bx + c = 0
int main()
{
    float a, b, c;
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    cout << "Podaj c: ";
    cin >> c;

    if (a == 0)
    {
        cout << "To nie jest rownanie kwadratowe (a = 0).";
        return 0;
    }

    float delta = b * b - 4 * a * c;

    if (delta > 0)
    {
        float x1 = (-b - sqrt(delta)) / (2 * a);
        float x2 = (-b + sqrt(delta)) / (2 * a);
        cout << "Rownanie ma dwa pierwiastki: x1 = " << x1 << ", x2 = " << x2;
    }
    else if (delta == 0)
    {
        float x = -b / (2 * a);
        cout << "Rownanie ma jeden pierwiastek podwojny: x = " << x;
    }
    else
    {
        cout << "Rownanie nie ma rozwiazan (delta < 0).";
    }
    cout << flush; system("pause");

    return 0;
}


