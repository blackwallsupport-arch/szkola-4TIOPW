# HTML od zera (dla debili)

## 1. Co to jest HTML?

HTML to szkielet strony: naglowki, teksty, obrazki, linki, formularze.
To nie programowanie - to znaczniki (tagi) w nawiasach `<>`. Przegladarka je czyta i rysuje strone.
W repo: `html-css/strona/` i przyklady w `dokumentacja/01-html-css/`.

## 2. Co musisz miec

NIC. Notatnik + przegladarka wystarcza. Do wygody: VS Code + dodatek **Live Server**
(prawy klik na pliku - Open with Live Server, strona sama sie odswieza po zapisie).

## 3. Pierwsza strona

Plik `test.html`, dwuklik:
```html
<!DOCTYPE html>
<html>
<head>
<meta charset="utf-8">
<title>Moja strona</title>
</head>
<body>
<h1>Siema!</h1>
<p>To moj pierwszy tekst.</p>
</body>
</html>
```
Zasada: `head` to ustawienia (tytul, kodowanie), `body` to to co widac.

## 4. Najwazniejsze tagi

```html
<h1>Najwiekszy naglowek</h1>   <!-- h1..h6, maleje -->
<p>Paragraf tekstu</p>
<a href="https://google.com">Link</a>
<img src="kot.jpg" alt="kot">
<ul><li>lista</li><li>kropki</li></ul>
<ol><li>lista</li><li>numery</li></ol>
<table><tr><td>komorka</td></tr></table>
<div>blok (do grupowania)</div>
<span>kawalek w linii</span>
```

**Formularz (wazne pod JS/PHP):**
```html
<form method="post" action="witaj.php">
<input type="text" id="d1" name="imie">
<input type="button" value="Klik" onclick="przelicz()">
</form>
```
- `id` - do JS (`getElementById`), `name` - do PHP (`$_POST["imie"]`).

## 5. Najczestsze bledy debila

1. **Brak `meta charset="utf-8"`** - polskie znaki (ą, ł) beda krzakami.
2. **Niezamkniety tag** - kazdy `<p>` potrzebuje `</p>`. Przegladarka wybacza, ale uklad sie sypie.
3. **Zla sciezka do obrazka** - `src="kot.jpg"` szuka obok pliku html. Jak obrazek w podfolderze, to `src="img/kot.jpg"`.
4. **`id` vs `name`** - `id` dla JS, `name` dla PHP. Do formularzy z JS daj oba albo chociaz `id`.
5. **Otwieranie PHP przez dwuklik** - pliki `.php` musza leciec przez serwer (`http://localhost/`), nie z dysku.

## 6. Podsumowanie w skrocie

- `<!DOCTYPE html>` + `<html><head><body>` - szkielet kazdej strony
- `h1-h6, p, a, img, ul/ol/li, table, div, form/input` - 90% stron to te tagi
- `F12` w przegladarce - podglad bledow i struktury

## 7. Co dalej

1. Przerob `dokumentacja/01-html-css/podstawy-html.md`.
2. Potem CSS (kolory i uklad) - plik obok.
3. Potem JS (`javascript/38-start/`): ozywianie strony.
