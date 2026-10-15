# szkola-4TIOPW

![banner](assets/banner.svg?v=2)

![last-commit](https://img.shields.io/github/last-commit/blackwallsupport-arch/szkola-4TIOPW?style=flat-square)
![repo-size](https://img.shields.io/github/repo-size/blackwallsupport-arch/szkola-4TIOPW?style=flat-square)
![license](https://img.shields.io/github/license/blackwallsupport-arch/szkola-4TIOPW?style=flat-square)
![languages](https://img.shields.io/github/languages/count/blackwallsupport-arch/szkola-4TIOPW?style=flat-square)
![top-lang](https://img.shields.io/github/languages/top/blackwallsupport-arch/szkola-4TIOPW?style=flat-square)

Szkolne przyklady i materialy do nauki programowania: C++, JavaScript, Java, PHP, SQL, HTML/CSS.

## Jak wejsc na to repo (dla debili, krok po kroku)

Nie masz linku? To tak wejdz:

1. Otworz przegladarke i wejdz na **github.com**
2. Na gorze w pasek wyszukiwania wpisz: `szkola-4TIOPW` i wcisnij Enter
3. Po lewej kliknij **Repositories**
4. Kliknij wynik **blackwallsupport-arch/szkola-4TIOPW** - to to repo
5. Nie dziala? W Google wpisz: `blackwallsupport-arch github szkola-4TIOPW` i kliknij pierwszy wynik

Masz link? To po prostu go otworz: `https://github.com/blackwallsupport-arch/szkola-4TIOPW`

## C++ (`cpp/`)

| Rozdzial | Temat | Pliki |
|---|---|---|
| [`31-petle/`](cpp/31-petle) | for, while, do-while, break, switch dni | 10 |
| [`32-podstawy/`](cpp/32-podstawy) | if, switch, while, for, silnia, NWD | 15 |
| [`33-tablice/`](cpp/33-tablice) | tablice 1D i 2D, rand, suma, funkcje | 9 |
| [`34-stringi/`](cpp/34-stringi) | char, cstring, `std::string`, getline | 6 |
| [`35-wskazniki/`](cpp/35-wskazniki) | `&`, `*`, wskazniki jako argumenty | 5 |
| [`36-pliki/`](cpp/36-pliki) | fstream: zapis/odczyt, `>>`, `get`, quiz | 8 (+ [`README`](cpp/36-pliki/README.md)) |

## JavaScript (`javascript/` - rozdzialy 38-45, szczegoly w [`README`](javascript/README.md))

| Dzial | Temat | Pliki |
|---|---|---|
| [`38-start/`](javascript/38-start) | pierwszy skrypt, formatowanie, alert/prompt | 3 |
| [`39-zmienne/`](javascript/39-zmienne) | var, `Number(prompt)` | 2 |
| [`40-operatory/`](javascript/40-operatory) | arytmetyczne, porownania, logiczne, bitowe, `+=`, `++`, konkatenacja | 8 |
| [`41-warunki-petle/`](javascript/41-warunki-petle) | if, ternary, max z 3, switch, for/while | 8 |
| [`42-funkcje/`](javascript/42-funkcje) | funkcje, return, kalkulator, potega | 4 |
| [`43-obiekty/`](javascript/43-obiekty) | document, string, Date, Math, sort, tabela 2D | 6 |
| [`44-zdarzenia/`](javascript/44-zdarzenia) | onload, mouseover | 3 |
| [`45-formularze/`](javascript/45-formularze) | formularze, walidacja, kalkulator, hotel, bombki | 5 |

## PHP (`php/` - rozdzialy 46-53, szczegoly w [`README`](php/README.md))

| Dzial | Temat | Pliki |
|---|---|---|
| [`46-struktura/`](php/46-struktura) | pierwszy skrypt, komentarze | 2 |
| [`47-zmienne/`](php/47-zmienne) | typy, tablice, operatory | 13 |
| [`48-instrukcje/`](php/48-instrukcje) | if, switch, for, while, foreach | 9 |
| [`49-funkcje/`](php/49-funkcje) | funkcje, daty, referencje, sortowanie | 17 |
| [`50-formularze/`](php/50-formularze) | formularze, walidacja | 6 |
| [`51-bazy/`](php/51-bazy) | mysqli + PDO, CRUD | 8 |
| [`52-cookies-sesje/`](php/52-cookies-sesje) | cookies, sesje, logowanie | 7 |
| [`53-pliki/`](php/53-pliki) | fopen, fwrite, fread, feof | 4 |

## W drodze

| Folder | Status |
|---|---|
| [`java/`](java) | kod w drodze, teoria w `dokumentacja/04-java/` |
| [`sql/`](sql) | skrypty w drodze |

## Docs i inne

| Folder | Co tam jest |
|---|---|
| [`notatki/`](notatki) | algorytmy |
| [`dokumentacja/`](dokumentacja) | start od zera dla debili (C++, Java, JS, PHP, SQL, C#, HTML, CSS) + poradniki |

---

<details>
<summary><b>Jak pobrac bez gita</b></summary>

1. Zielony przycisk `<> Code` -&gt; `Download ZIP`
2. Rozpakuj, otwierasz `.cpp` w VS Code, `.html` dwuklikiem w przegladarce

```powershell
git clone https://github.com/blackwallsupport-arch/szkola-4TIOPW.git
cd szkola-4TIOPW
```

</details>

<details>
<summary><b>Jak uruchomic C++</b></summary>

VS Code + MinGW-w64, terminal `Ctrl + ~`:

```powershell
g++ "cpp\33-tablice\33_06_losowanie_suma.cpp" -std=c++17 -o przyklad.exe
./przyklad.exe
```

Pliki z `cpp/36-pliki/` odpalaj z tego folderu (tworza `dane.txt`, `liczby.txt` obok exe):

```powershell
cd cpp\36-pliki
g++ 36_01_zapis_do_pliku.cpp -std=c++17 -o przyklad.exe
./przyklad.exe
```

</details>

<details>
<summary><b>Jak uruchomic JS</b></summary>

`javascript/` -> podfolder -> dwuklik w `.html`. Nic nie instalujesz.

</details>

<details>
<summary><b>Jak uruchomic PHP</b></summary>

1. Zainstaluj **XAMPP** (Apache + PHP + MySQL) i uruchom Apache + MySQL w panelu.
2. Skopiuj folder `php/` do `C:\xampp\htdocs\` (np. `C:\xampp\htdocs\php\`).
3. W przegladarce wejdz na `http://localhost/php/46-struktura/46_01_pierwszy.php`.
4. Pliki z bazami (`51-bazy/`) i sesjami (`52-cookies-sesje/`) wymagaja dzialajacego MySQL w XAMPP.
5. Alternatywa bez XAMPP: w terminalu w folderze z plikiem `php -S localhost:8000` i otworz `http://localhost:8000/...`.

</details>

## Licencja i odpowiedzialnosc

Apache-2.0 - patrz `LICENSE`. Kod jest udostepniony w stanie "as is" (tak jak jest),
bez gwarancji. Autor nie ponosi odpowiedzialnosci za to, jak wykorzystasz te pliki -
w tym za oddawanie ich jako wlasne prace szkolne i konsekwencje z tym zwiazane.
Uzywasz na wlasna odpowiedzialnosc.
