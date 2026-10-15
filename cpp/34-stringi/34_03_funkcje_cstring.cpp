#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

// PRZYKLAD 34.3 - podstawowe funkcje na tablicach znakow (cstring)
// strstr, strlwr, strupr, strcat, strrev, strlen
// Wersja przenosna na nowe g++ (strlwr/strrev nie ma w standardzie,
// wiec robimy to recznie petla / strupr -> toupper).
int main() {
    char tekst[] = "Ala ma kota";

    cout << "Twoj tekst to: " << tekst << endl;
    cout << "Ilosc znakow pisanych wielkimi literami: ";
    int wielkie = 0;
    for (unsigned i = 0; i < strlen(tekst); i++)
        if (isupper((unsigned char)tekst[i])) wielkie++;
    cout << wielkie << endl;

    // strlwr(tekst) - na male
    char male[100];
    strcpy(male, tekst);
    for (unsigned i = 0; i < strlen(male); i++)
        male[i] = tolower((unsigned char)male[i]);
    cout << "Twoj tekst pisanymi malymi literami: " << male << endl;

    // strupr(tekst) - na duze
    char duze[100];
    strcpy(duze, tekst);
    for (unsigned i = 0; i < strlen(duze); i++)
        duze[i] = toupper((unsigned char)duze[i]);
    cout << "Dopiszemy dalsza czesc zdania i otrzymamy: " << duze << endl;

    // strcat - doklejanie
    char doklejony[100];
    strcpy(doklejony, tekst);
    strcat(doklejony, " i psa");
    cout << "Odroczony tekst na postac: " << doklejony << endl;

    // strrev(tekst) - odwrocenie
    char odwrocony[100];
    strcpy(odwrocony, tekst);
    int n = strlen(odwrocony);
    for (int i = 0; i < n / 2; i++)
        swap(odwrocony[i], odwrocony[n - 1 - i]);
    cout << "Odwrocony tekst: " << odwrocony << endl;

    return 0;
}
