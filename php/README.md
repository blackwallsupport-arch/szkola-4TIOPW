# PHP (rozdzialy 46-53)

Przyklady z podrecznika. Uruchamiasz przez serwer (XAMPP): pliki wrzucasz do
`C:\xampp\htdocs\`, w przegladarce wchodzisz na `http://localhost/...`.
Szczegoly w `dokumentacja/06-php/start-od-zera.md`.

## 46-struktura - pierwszy skrypt

- `46_01_pierwszy.php` - `echo`, pierwszy skrypt w HTML.
- `46_02_komentarze.php` - komentarze `//`, `/* */`, `#`.

## 47-zmienne - zmienne i typy

- `47_01_zmienne.php` - `$x`, interpolacja w cudzyslowie.
- `47_02_int.php` - liczby calkowite.
- `47_03_float.php` - liczby zmiennoprzecinkowe.
- `47_04_string.php` - lancuchy znakow.
- `47_05_kropka.php` - kropka `.` laczy teksty.
- `47_06_heredoc.php` - skladnia heredoc (`<<<`).
- `47_07_nowdoc.php` - skladnia nowdoc (bez interpolacji).
- `47_08_tablica.php` - `array(...)`.
- `47_09_tablica_auto.php` - automatyczne indeksy.
- `47_10_asocjacyjna.php` - tablica asocjacyjna (`klucz => wartosc`).
- `47_11_arytmetyczne.php` - operatory arytmetyczne.
- `47_12_bitowe.php` - operatory bitowe.
- `47_13_przesuniecie.php` - przesuniecia bitowe.

## 48-instrukcje - if, switch, petle

- `48_01_if.php` - `if`.
- `48_05_switch.php` - `switch`.
- `48_06_elseif.php` - `elseif`.
- `48_07_ternary.php` - operator `? :`.
- `48_08_for_parzyste.php` - `for` (parzyste).
- `48_09_for_rand.php` - `for` + `rand`.
- `48_13_while_nwd.php` - `while` (NWD).
- `48_14_do_while.php` - `do...while`.
- `48_15_foreach.php` - `foreach` po tablicy.

## 49-funkcje - funkcje i daty

- `49_01_wyrazenie.php` - definicja funkcji.
- `49_02_return.php` - `return`.
- `49_03_lokalny_blad.php` - zasieg lokalny (typowy blad).
- `49_04_global.php` - `global`.
- `49_05_globals.php` - tablica `$GLOBALS`.
- `49_06_przez_wartosc.php` - przekazywanie przez wartosc.
- `49_07_przez_referencje.php` - przekazywanie przez referencje (`&$x`).
- `49_08_domyslne.php` - domyslne wartosci argumentow.
- `49_09_funkcje.php` - funkcje wbudowane.
- `49_10_count.php` - `count()` na tablicy.
- `49_11_sort.php` - `sort()`.
- `49_12_asort_ksort.php` - `asort()` / `ksort()`.
- `49_13_getdate.php` - `getdate()`.
- `49_14_date.php` - `date()`.
- `49_15_mktime.php` - `mktime()`.
- `49_16_stringformat.php` - formatowanie stringow.
- `49_17_porownanie.php` - porownania (`==` vs `===`).

## 50-formularze - formularze i walidacja

- `50_01_index.html` + `50_01_oblicz.php` - formularz + `$_POST`.
- `50_02_zgloszeniowy.php` - formularz zgloszeniowy.
- `50_03_isset.php` - `isset()`.
- `50_04_empty.php` - `empty()`.
- `50_05_walidacja.php` - `isset` + `is_numeric`, bilety 27/18 zl.

## 51-bazy - MySQL (mysqli i PDO)

- `51_01_connect.php` - `mysqli_connect(host, user, pass, baza)`.
- `51_02_test_close.php` - test polaczenia + `mysqli_close`.
- `51_03_query_lista.php` - `mysqli_query`, lista wynikow.
- `51_04_tabela.php` - wynik w tabeli HTML.
- `51_05_insert.php` - `INSERT`.
- `51_06_hurtownia.php` - przyklad hurtowni.
- `51_07_pdo_connect.php` - polaczenie przez PDO.
- `51_08_pdo_query.php` - zapytanie przez PDO.

## 52-cookies-sesje - cookies i sesje

- `52_01_setcookie.php` - `setcookie()`.
- `52_02_cookie_isset.php` - `isset($_COOKIE)`.
- `52_03_cookie_usun.php` - usuwanie cookie.
- `52_04_sesja_id.php` - `session_start()`, `session_id()`.
- `52_05_licznik.php` - licznik odwiedzin w `$_SESSION`.
- `52_06_logowanie.php` + `52_06_logowanie_form.html` - logowanie na sesji.

## 53-pliki - pliki w PHP

- `53_01_fwrite.php` - `fopen` + `fwrite` + `fclose`.
- `53_02_rand_zapis.php` - losowanie + zapis do pliku.
- `53_03_fread.php` - `fread()`.
- `53_04_feof.php` - petla z `feof()`.
