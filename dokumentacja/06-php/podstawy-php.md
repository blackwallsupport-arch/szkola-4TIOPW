# Podstawy PHP

## Czym jest PHP?
PHP to język wykonywany po stronie serwera. Serwer uruchamia kod PHP, a przeglądarka otrzymuje wygenerowany wynik, najczęściej w postaci HTML. PHP może więc obsługiwać formularze, przygotowywać treść strony i komunikować się z bazą danych.

Plik z kodem PHP zapisujemy z rozszerzeniem `.php`. Samo otwarcie pliku w przeglądarce nie uruchomi PHP: potrzebny jest serwer z obsługą tego języka.

## Instalacja i uruchomienie

Możesz zainstalować PHP osobno albo skorzystać z pakietu XAMPP, który zawiera PHP i serwer Apache. Po instalacji PHP dostępnego w terminalu przejdź do folderu projektu i uruchom wbudowany serwer:

```bash
php -S localhost:8000
```

Następnie otwórz adres `http://localhost:8000` w przeglądarce. Zatrzymasz serwer skrótem `Ctrl+C` w terminalu.

## Pierwszy program

Kod PHP umieszczamy między znacznikami `<?php` i `?>`. Gdy plik zawiera wyłącznie PHP, końcowy znacznik `?>` zwykle pomijamy.

```php
<?php

 echo "Witaj, świecie!";
```

Zapisz program jako `index.php` i uruchom serwer w folderze, w którym znajduje się ten plik.

## Zmienne i typy danych

Nazwy zmiennych zaczynają się od znaku `$`. PHP rozpoznaje wielkość liter w nazwach zmiennych, więc `$imie` i `$Imie` to różne zmienne.

```php
<?php

$imie = "Anna";       // tekst
$wiek = 17;            // liczba całkowita
$cena = 12.50;         // liczba zmiennoprzecinkowa
$czyAktywny = true;    // wartość logiczna

$rok = 2026;
$rok = $rok + 1;

echo "Cześć, $imie! Masz $wiek lat.";
```

PHP ma typowanie dynamiczne, ale można też deklarować typy parametrów i wyników funkcji. Przy większych programach pomaga to wykrywać pomyłki.

## Operatory i warunki

```php
<?php

$liczba = 12;

if ($liczba % 2 === 0) {
    echo "Liczba parzysta";
} else {
    echo "Liczba nieparzysta";
}
```

Do porównywania wartości używaj zwykle `===` i `!==`: oprócz wartości sprawdzają one także typ. Operator `%` oblicza resztę z dzielenia.

## Pętle

```php
<?php

for ($i = 1; $i <= 5; $i++) {
    echo $i . " ";
}

$liczby = [3, 6, 9];
foreach ($liczby as $liczba) {
    echo $liczba . " ";
}
```

Pętla `for` sprawdza się, gdy znasz liczbę powtórzeń. `foreach` służy do przechodzenia po elementach tablicy.

## Tablice

Tablica indeksowana przechowuje kolejne wartości, a tablica asocjacyjna przypisuje wartości do nazwanych kluczy.

```php
<?php

$owoce = ["jabłko", "gruszka", "śliwka"];
echo $owoce[0]; // jabłko

$uczen = [
    "imie" => "Ola",
    "klasa" => "2A",
];

echo $uczen["imie"];
```

Indeksy tablic indeksowanych zaczynają się od `0`.

## Funkcje

```php
<?php

function dodaj(int $a, int $b): int
{
    return $a + $b;
}

$wynik = dodaj(4, 5);
echo $wynik;
```

Parametry `int` i typ wyniku `int` określają, że funkcja przyjmuje i zwraca liczby całkowite.

## PHP i HTML

PHP może generować fragmenty HTML. Wstawiając do strony tekst pochodzący od użytkownika, zawsze koduj go jako HTML. Zapobiega to potraktowaniu wpisanego tekstu jak kodu strony.

Poniższy przykład zapamiętuje imię przesłane metodą `POST`, sprawdza, czy nie jest puste, i bezpiecznie wyświetla wynik:

```php
<?php

$imie = "";
$blad = "";

if ($_SERVER["REQUEST_METHOD"] === "POST") {
    $wartoscImienia = $_POST["imie"] ?? "";
    $imie = is_string($wartoscImienia) ? trim($wartoscImienia) : "";

    if ($imie === "") {
        $blad = "Wpisz imię.";
    }
}

function escapuj(string $tekst): string
{
    return htmlspecialchars($tekst, ENT_QUOTES | ENT_SUBSTITUTE, "UTF-8");
}
?>
<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Powitanie</title>
</head>
<body>
    <form method="post">
        <label for="imie">Twoje imię:</label>
        <input id="imie" name="imie" value="<?= escapuj($imie) ?>" required>
        <button type="submit">Przywitaj</button>
    </form>

    <?php if ($blad !== ""): ?>
        <p><?= escapuj($blad) ?></p>
    <?php elseif ($imie !== ""): ?>
        <p>Cześć, <?= escapuj($imie) ?>!</p>
    <?php endif; ?>
</body>
</html>
```

Atrybut `name` formularza określa klucz dostępny w `$_POST`. Atrybut `method="post"` przesyła dane w treści żądania. Walidacja sprawdza, czy dane mają oczekiwaną postać, a `htmlspecialchars()` zabezpiecza ich wyświetlenie w HTML. To różne kroki i oba są ważne.

## Komentarze

```php
<?php

// Komentarz w jednej linii

/*
   Komentarz w kilku liniach
*/
```

## Ćwiczenia

1. Napisz skrypt, który oblicza pole prostokąta na podstawie dwóch zmiennych.
2. Utwórz tablicę z pięcioma ulubionymi filmami i wyświetl każdy tytuł w osobnym elemencie listy HTML.
3. Rozbuduj formularz powyżej o pole e-mail i sprawdź, czy zostało wypełnione.

## Co dalej?

- [Podstawy HTML](../01-html-css/podstawy-html.md) opisują strukturę formularzy i stron.
- [Podstawy C++](../03-cpp/podstawy-cpp.md) wprowadzają do programowania w C++.
- Po opanowaniu podstaw PHP możesz uczyć się obsługi baz danych i budowania aplikacji webowych.
