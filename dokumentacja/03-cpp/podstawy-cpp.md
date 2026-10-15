# Podstawy C++

## Czym jest C++?
C++ - kompilowany język programowania ogólnego przeznaczenia. Jeden z najpopularniejszych języków na świecie.

## Instalacja
1. **Windows**: Zainstaluj MinGW lub Visual Studio
2. **Linux**: `sudo apt install g++`
3. **Mac**: `xcode-select --install`

## Hello World
```cpp
#include <iostream>

int main() {
    std::cout << "Hello World!" << std::endl;
    return 0;
}
```

### Kompilacja i uruchomienie
```bash
g++ main.cpp -o main
./main
```

## Zmienne

### Typy danych
```cpp
int liczba = 10;           // Liczba całkowita
double liczba_zmiennoprzecinkowa = 3.14;  // Liczba zmiennoprzecinkowa
char znak = 'A';           // Znak (1 bajt)
bool prawda = true;        // Wartość logiczna (true/false)
std::string tekst = "Hello"; // Tekst (string)
```

### Deklaracja zmiennych
```cpp
int a = 5;         // Inicjalizacja
int b(10);         // Inicjalizacja nawiasowa
int c{15};         // Inicjalizacja listowa (C++11)
```

## Stałe
```cpp
const int STALA = 100;
constexpr int STALA_KOMPILOWANA = 200;  // Obliczana w czasie kompilacji
```

## Operatory

### Arytmetyczne
```cpp
int a = 10, b = 3;
a + b   // 13 (dodawanie)
a - b   // 7 (odejmowanie)
a * b   // 30 (mnożenie)
a / b   // 3 (dzielenie całkowite)
a % b   // 1 (reszta z dzielenia)
```

### Porównania
```cpp
a == b  // równe
a != b  // różne
a > b   // większe
a < b   // mniejsze
a >= b  // większe lub równe
a <= b  // mniejsze lub równe
```

### Logiczne
```cpp
a && b  // AND (i)
a || b  // OR (lub)
!a      // NOT (negacja)
```

## Warunki

### If/else
```cpp
int wiek = 18;

if (wiek >= 18) {
    std::cout << "Jesteś pełnoletni" << std::endl;
} else if (wiek >= 16) {
    std::cout << "Prawie pełnoletni" << std::endl;
} else {
    std::cout << "Nie jesteś pełnoletni" << std::endl;
}
```

### Switch
```cpp
int dzien = 3;

switch (dzien) {
    case 1:
        std::cout << "Poniedziałek" << std::endl;
        break;
    case 2:
        std::cout << "Wtorek" << std::endl;
        break;
    case 3:
        std::cout << "Środa" << std::endl;
        break;
    default:
        std::cout << "Inny dzień" << std::endl;
}
```

## Pętle

### For
```cpp
for (int i = 0; i < 10; i++) {
    std::cout << i << " ";
}
// Wynik: 0 1 2 3 4 5 6 7 8 9
```

### While
```cpp
int i = 0;
while (i < 10) {
    std::cout << i << " ";
    i++;
}
```

### Do-while
```cpp
int i = 0;
do {
    std::cout << i << " ";
    i++;
} while (i < 10);
```

### Break i Continue
```cpp
for (int i = 0; i < 10; i++) {
    if (i == 5) break;      // Przerywa pętlę przy i=5
    if (i == 3) continue;   // Pomija i=3
    std::cout << i << " ";
}
// Wynik: 0 1 2 4
```

## Funkcje

### Podstawowa funkcja
```cpp
#include <iostream>

// Deklaracja funkcji
int dodaj(int a, int b);

int main() {
    int wynik = dodaj(5, 3);
    std::cout << "5 + 3 = " << wynik << std::endl;
    return 0;
}

// Definicja funkcji
int dodaj(int a, int b) {
    return a + b;
}
```

### Funkcja z domyślnymi parametrami
```cpp
void powitanie(std::string imie = "Świecie") {
    std::cout << "Cześć, " << imie << "!" << std::endl;
}

powitanie();           // Cześć, Świecie!
powitanie("Jan");      // Cześć, Jan!
```

### Przekazywanie przez wartość i referencję
```cpp
// Przez wartość (kopia)
void zmienWartosc(int x) {
    x = 100;  // Zmienia tylko kopię
}

// Przez referencję (oryginał)
void zmienOryginal(int &x) {
    x = 100;  // Zmienia oryginał
}
```

## Tablice

```cpp
// Deklaracja tablicy
int liczby[5] = {1, 2, 3, 4, 5};

// Dostęp do elementów
std::cout << liczby[0];  // Pierwszy element (0)
std::cout << liczby[4];  // Ostatni element (4)

// Pętla po tablicy
for (int i = 0; i < 5; i++) {
    std::cout << liczby[i] << " ";
}

// Tablica wielowymiarowa
int macierz[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};
```

## Wektory (std::vector)
```cpp
#include <vector>

std::vector<int> wektor;

wektor.push_back(1);    // Dodaj na koniec
wektor.push_back(2);
wektor.push_back(3);

std::cout << wektor[0];  // 1
std::cout << wektor.size();  // 3

// Pętla po wektorze
for (int i : wektor) {
    std::cout << i << " ";
}
```

## Ćwiczenie 1
Napisz program, który:
1. Pyta użytkownika o dwie liczby
2. Wyświetla wynik dodawania, odejmowania, mnożenia i dzielenia

## Ćwiczenie 2
Napisz funkcję, która sprawdza czy liczba jest parzysta.

## Następny krok
Przejdź do `serwer-web-cpp.md` aby nauczyć się tworzyć serwery w C++.
