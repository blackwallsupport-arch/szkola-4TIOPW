# Podstawy HTML

## Czym jest HTML?
HTML (HyperText Markup Language) - język znaczników do tworzenia struktur stron internetowych.

## Podstawowa struktura dokumentu HTML
```html
<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Moja strona</title>
</head>
<body>
    <h1>Witaj na mojej stronie!</h1>
    <p>To jest pierwszy akapit.</p>
</body>
</html>
```

## Podstawowe znaczniki

### Struktura strony
```html
<!DOCTYPE html>     <!-- Deklaracja typu dokumentu -->
<html>              <!-- Element główny -->
<head>              <!-- Nagłówek (metadane, tytuł) -->
<body>              <!-- Treść widoczna na stronie -->
```

### Nagłówki i akapity
```html
<h1>Nagłówek 1</h1>    <!-- Najważniejszy -->
<h2>Nagłówek 2</h2>
<h3>Nagłówek 3</h3>
<h4>Nagłówek 4</h4>
<h5>Nagłówek 5</h5>
<h6>Nagłówek 6</h6>

<p>Akapit tekstu</p>   <!-- Paragraf -->
```

### Formatowanie tekstu
```html
<strong>pogrubienie</strong>     <!-- Ważny tekst -->
<em>kursywa</em>                <!-- Podkreślony tekst -->
<br>                            <!-- Złamanie linii -->
<hr>                            <!-- Linia pozioma -->
```

### Listy
```html
<!-- Lista nieuporządkowana -->
<ul>
    <li>Punkt 1</li>
    <li>Punkt 2</li>
</ul>

<!-- Lista uporządkowana -->
<ol>
    <li>Pierwszy</li>
    <li>Drugi</li>
</ol>
```

### Linki
```html
<!-- Link do strony -->
<a href="https://google.com">Google</a>

<!-- Link do fragmentu strony -->
<a href="#sekcja2">Przejdź do sekcji 2</a>

<!-- Link w nowej karcie -->
<a href="https://google.com" target="_blank">Google (nowa karta)</a>
```

### Obrazki
```html
<!-- Podstawowy obrazek -->
<img src="obrazek.jpg" alt="Opis obrazka">

<!-- Obrazek z rozmiarem -->
<img src="obrazek.jpg" alt="Opis" width="300" height="200">
```

### Tabele
```html
<table>
    <thead>
        <tr>
            <th>Imię</th>
            <th>Nazwisko</th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td>Jan</td>
            <td>Kowalski</td>
        </tr>
        <tr>
            <td>Anna</td>
            <td>Nowak</td>
        </tr>
    </tbody>
</table>
```

### Formularze
```html
<form action="/wyslij" method="POST">
    <label for="imie">Imię:</label>
    <input type="text" id="imie" name="imie" required>

    <label for="email">Email:</label>
    <input type="email" id="email" name="email" required>

    <label for="wiadomosc">Wiadomość:</label>
    <textarea id="wiadomosc" name="wiadomosc"></textarea>

    <button type="submit">Wyślij</button>
</form>
```

### Div i Span
```html
<!-- Div - kontener blokowy -->
<div class="kontener">
    <p>Treść wewnątrz div</p>
</div>

<!-- Span - kontener inline -->
<p>Tekst <span class="podkreslenie">zaznaczony</span> tekst</p>
```

## Ćwiczenie 1
Stwórz plik `index.html` z:
1. Nagłówkiem "Moja pierwsza strona"
2. Trzema akapitami tekstu
3. Listą trzech ulubionych rzeczy
4. Linkiem do dowolnej strony

## Ćwiczenie 2
Stwórz formularz kontaktowy z:
1. Polem na imię
2. Polem na email
3. Polem na wiadomość
4. Przyciskiem "Wyślij"

## Następny krok
Przejdź do `podstawy-css.md` aby nauczyć się stylować strony.
