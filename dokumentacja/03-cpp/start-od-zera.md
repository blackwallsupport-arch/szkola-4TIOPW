# C++ od zera (dla debili)

## 1. Co to jest C++?

C++ to jezyk programowania, w ktorym piszesz tekst (kod), a komputer go wykonuje.
Uzywa sie go w szkole, w grach, w sterownikach i wszedzie gdzie trzeba szybko liczyc.
W tym repo caly folder `cpp/` to przyklady w C++.

## 2. Co musisz zainstalowac (Windows, krok po kroku)

1. Sciagnij **VS Code** (code.visualstudio.com) i zainstaluj.
2. Sciagnij **MinGW-w64** (kompilator `g++`). Najprosciej przez `winget`:
   ```powershell
   winget install BrechtSanders.winlibs
   ```
   Albo instalator MinGW z internetu.
3. Zamknij i otworz VS Code. Otworz terminal `Ctrl + ~` i wpisz:
   ```powershell
   g++ --version
   ```
   Jak wyswietli wersje (np. 13.x), to dziala. Jak nie, to restart komputera i jeszcze raz.

## 3. Pierwszy program (kopiuj-wklej)

Stworz plik `witaj.cpp`:
```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Siema!" << endl;
    return 0;
}
```
Kompilacja i uruchomienie w terminalu (bedac w folderze z plikiem):
```powershell
g++ witaj.cpp -std=c++17 -o witaj.exe
./witaj.exe
```
Zobaczysz `Siema!`. Tak odpalasz kazdy przyklad z repo, np.:
```powershell
g++ "cpp\33-tablice\33_06_losowanie_suma.cpp" -std=c++17 -o przyklad.exe
./przyklad.exe
```

## 4. Najwazniejsza skladnia w skrocie

**Wypisywanie i wczytywanie:**
```cpp
cout << "Podaj liczbe: ";
int x;
cin >> x;              // wczytuje liczbe
cout << "Dales: " << x << endl;
```

**Zmienne i typy:**
```cpp
int a = 5;             // calkowita
double b = 3.14;       // zmiennoprzecinkowa
char c = 'A';          // znak
string s = "tekst";    // tekst (trzeba #include <string>)
bool t = true;         // prawda/falsz
```

**If / else:**
```cpp
if (x % 2 == 0) {
    cout << "parzysta" << endl;
} else {
    cout << "nieparzysta" << endl;
}
```

**Petle:**
```cpp
for (int i = 0; i < 5; i++) {
    cout << i << " ";
}
int i = 0;
while (i < 5) {
    cout << i << " ";
    i++;
}
```

**Tablice:**
```cpp
int tab[5] = {1, 2, 3, 4, 5};
for (int i = 0; i < 5; i++) {
    cout << tab[i] << " ";
}
```

**Funkcje:**
```cpp
int suma(int a, int b) {
    return a + b;
}
int w = suma(2, 3);    // w = 5
```

**Losowanie:**
```cpp
#include <cstdlib>
#include <ctime>
srand(time(NULL));     // RAZ na poczatku main
int r = rand() % 100 + 1;   // 1..100
```

**Pliki:**
```cpp
#include <fstream>
fstream plik;
plik.open("dane.txt", ios::out);
plik << "tekst" << endl;
plik.close();
```

## 5. Najczestsze bledy debila

1. **Brak srednika** - kazda instrukcja konczy sie `;`.
2. **`=` zamiast `==`** - `if (x = 5)` przypisuje, `if (x == 5)` porownuje.
3. **Dzielenie intow** - `5 / 2` da `2`, nie `2.5`. Chcesz ulamek? `5.0 / 2`.
4. **Niezainicjowana zmienna** - `int suma; suma = suma + x;` to smiec. Zawsze `int suma = 0;`.
5. **`rand` bez `srand`** - bez `srand(time(NULL))` losuje za kazdym razem to samo.
6. **Zly slash w sciezce** - w PowerShell uzywaj `cpp\33-tablice\...`, w kodzie C++ do plikow tez dziala `/`.

## 6. Operatory w skrocie

- `+ - * / %` - arytmetyczne (`%` to reszta z dzielenia)
- `== != > < >= <=` - porownania
- `&& || !` - logiczne (i, lub, nie)
- `++ --` - zwieksz/zmniejsz o 1
- `+= -= *= /=` - np. `x += 2` to `x = x + 2`

## 7. Co dalej (mapa repo)

1. `cpp/31-petle/` i `cpp/32-podstawy/` - petle i ify, zrob wszystkie po kolei.
2. `cpp/33-tablice/` - tablice 1D i 2D.
3. `cpp/34-stringi/` - teksty.
4. `cpp/35-wskazniki/` - `&` (adres) i `*` (wartosc spod adresu).
5. `cpp/36-pliki/` - pliki, czytaj `36-pliki/README.md` (kolejnosc testow).
6. `cpp/projekt-mega/` - duzy projekt na koniec.
