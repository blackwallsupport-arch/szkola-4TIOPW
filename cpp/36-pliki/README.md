# 36 - Pliki (fstream)

Rozdzial 36 podrecznika: zapis i odczyt plikow tekstowych przez `fstream`.
Tryby: `ios::out` (zapis), `ios::in` (odczyt), `ios::out | ios::in` (oba).

## Adnotacja plikow

- `36_01_zapis_do_pliku.cpp` - pyta o imie i znak zodiaku (`cin`), zapisuje 2 linie do `dane.txt` (`open ios::out`, `<<`, `close`).
- `36_02_test_otwarcia.cpp` - otwiera `dane.txt` (`ios::in`), sprawdza `plik.good()` i wypisuje czy sie udalo.
- `36_03_odczyt_getline.cpp` - czyta `dane.txt` linia po linii: `while (getline(plik, wiersz)) cout << wiersz`.
- `36_04_losowanie_zapis.cpp` - losuje 2 tablice `t1, t2` z zakresu 1-10 (`rand()%10+1`), zapisuje 10 par do `liczby.txt`.
- `36_05_suma_do_pliku.cpp` - czyta `liczby.txt` operatorem `>>` do `t1, t2`, liczy `t3[i]=t1[i]+t2[i]`, wypisuje na ekran i zapisuje trojki do `nowe_liczby.txt`.
- `36_06_odczyt_operator.cpp` - odczyt operatorem `>>` (czyta tylko do spacji - dla zdania wyswietli pierwsze slowo).
- `36_07_odczyt_get.cpp` - odczyt znak po znaku `get(litera)` w petli `while(!eof())` (czyta tez spacje).
- `36_08_quiz_pytanie.cpp` - quiz z pliku `pytanie.txt` (5 linii: pytanie, A, B, C, poprawna np. `2`), `getline` + licznik linii, porownanie `cin >> odpowiedz` z `wynik`.

## Pliki testowe (tworzone przy uruchomieniu, nie ma ich w repo)

- `dane.txt` - po 36_01, `liczby.txt` - po 36_04, `nowe_liczby.txt` - po 36_05, `tekst.txt` - do 36_06/36_07, `pytanie.txt` - do 36_08 (5 linii, np. pytanie + 3 odpowiedzi + numer poprawnej).

## Kolejnosc uruchamiania do testu

1. `36_01` (wpisz imie i zodiak) -> powstaje `dane.txt`
2. `36_02`, `36_03` (czytaja `dane.txt`)
3. `36_04` -> powstaje `liczby.txt`
4. `36_05` (czyta `liczby.txt`, tworzy `nowe_liczby.txt`)
5. `36_08` - najpierw utworz `pytanie.txt` (5 linii), potem uruchom.
