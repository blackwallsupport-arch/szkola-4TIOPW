# PHP od zera (dla debili)

## 1. Co to jest PHP?

PHP to jezyk, ktory dziala na serwerze i robi strony dynamiczne (np. logowanie, koszyk).
Przegladarka prosi serwer, serwer odpala PHP i odsyla gotowy HTML.
Teoria jest w `dokumentacja/06-php/podstawy-php.md`.

## 2. Co zainstalowac

Najprosciej **XAMPP** (Apache + PHP + MySQL w jednym):
1. Sciagnij XAMPP, zainstaluj, odpal panel i kliknij Start przy **Apache**.
2. Pliki strony wrzucasz do `C:\xampp\htdocs\` (np. `C:\xampp\htdocs\test\index.php`).
3. W przegladarce wchodzisz na `http://localhost/test/`.
4. Alternatywa bez XAMPP (tylko PHP): `php -S localhost:8000` w folderze ze strona.

Sprawdz wersje:
```powershell
php -v
```

## 3. Pierwszy skrypt

Plik `index.php`:
```php
<?php
echo "Siema!";
?>
```
Wazne: plik musi miec rozszerzenie `.php` i byc odpalony przez serwer (`http://localhost/...`).
Jak otworzysz go dwuklikiem z dysku, to zobaczysz kod, nie wynik.

## 4. Skladnia w skrocie

**Wszystko zaczyna sie od `<?php`, zmienne od `$`:**
```php
<?php
$imie = "Ala";      // string
$wiek = 17;         // int
$cena = 3.5;        // float
echo "Czesc " . $imie;  // kropka laczy teksty!
?>
```

**Formularz (najwazniejsze w PHP):**
```html
<form method="post" action="witaj.php">
<input type="text" name="imie">
<input type="submit" value="Wyslij">
</form>
```
```php
<?php
$imie = $_POST["imie"];   // tak odbierasz (dla method="post")
echo "Czesc " . $imie;
?>
```
`method="get"` -&gt; odbierasz `$_GET["imie"]` (widac w adresie). `post` -&gt; `$_POST` (niewidoczne).

**If / petle:**
```php
if ($wiek >= 18) {
    echo "pelnoletni";
} else {
    echo "niepelnoletni";
}
for ($i = 0; $i < 5; $i++) {
    echo $i . " ";
}
```

**Tablice:**
```php
$tab = array(1, 2, 3);
echo $tab[0];          // 1
echo count($tab);      // 3 (ilosc elementow)
foreach ($tab as $x) {
    echo $x . " ";
}
```

## 5. Najczestsze bledy debila

1. **Brak `$` przed zmienna** - `imie` to blad, `$imie` to zmienna.
2. **`+` do laczenia tekstu** - w PHP teksty laczy `.` (kropka), nie `+`.
3. **Odpalanie przez dwuklik** - PHP musi leciec przez `http://localhost/`, nie z dysku.
4. **Srednik na koncu** - jak w C++.
5. **`$_POST` vs `$_GET`** - musza pasowac do `method` w formularzu.

## 6. Podsumowanie w skrocie

- `<?php ... ?>` - kod PHP, `echo` - wypisz, `$x` - zmienna, `.` - laczenie tekstu
- `$_POST["nazwa"]` / `$_GET["nazwa"]` - dane z formularza
- `if/else, for, while, foreach` - jak w C++/JS
- `count($tab)` - rozmiar tablicy

## 7. Co dalej

Polacz z SQL: formularz (PHP) -&gt; zapytanie do bazy (rozdzial SQL) -&gt; wyswietl wynik `echo`.
Najpierw ogarnij formularze z JS (`javascript/45-formularze/`), potem to samo w PHP.
