#include <iostream>
using namespace std;

// PRZYKLAD 35.3 - wskaznik do float, adres zmiennej / wskaznika / wartosc
int main() {
    float x = 36.6;
    float *wsk_x;
    wsk_x = &x; // wskaznik wsk_x zawiera adres zmiennej x

    // Wyswietlenie adresu zmiennej x
    cout << "wsk_x = " << wsk_x << endl;
    // Wyswietlenie wartosci zmiennej x (przez wskaznik)
    cout << "*wsk = " << *wsk_x << endl;
    // Wyswietlenie adresu wskaznika wsk_x
    cout << "&wsk_x = " << &wsk_x << endl;
    // Wyswietlenie adresu zmiennej x
    cout << "&x = " << &x << endl;

    return 0;
}
