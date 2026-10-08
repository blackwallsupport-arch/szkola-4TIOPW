# CSS od zera (dla debili)

## 1. Co to jest CSS?

CSS to makijaz strony: kolory, rozmiary, ulozenie. HTML to szkielet, CSS to wyglad.
Bez CSS strona wyglada jak dokument z lat 90. W repo: `html-css/strona/style.css`.

## 2. Jak podpiac (3 sposoby, uzywaj 3.)

```html
<!-- 1. osobny plik (TAK ROB): -->
<link rel="stylesheet" href="style.css">
<!-- 2. w head (awaryjnie): -->
<style>p { color: red; }</style>
<!-- 3. przy tagu (unikaj): -->
<p style="color: red;">tekst</p>
```

## 3. Skladnia w skrocie

```css
/* selektor { wlasciwosc: wartosc; } */
p { color: red; }              /* wszystkie paragrafy czerwone */
#wynik { background: blue; }  /* element o id="wynik" */
.przycisk { font-size: 20px; } /* elementy o class="przycisk" */
```

**Najczesciej uzywane:**
```css
body {
    font-family: Arial;
    background: #0d1117;   /* tlo */
    color: white;          /* tekst */
}
#formularz {
    width: 330px;          /* szerokosc */
    margin: auto;          /* wysrodkuj */
    padding: 20px;         /* odstep w srodku */
    text-align: center;
}
```

**Uklad (musisz znac):**
```css
/* pudelka obok siebie: */
.kontener {
    display: grid;
    grid-template-columns: 1fr 1fr;  /* 2 kolumny */
    gap: 10px;
}
```

## 4. Najczestsze bledy debila

1. **Zla sciezka w `href`** - `href="style.css"` szuka obok html. Jak CSS w podfolderze, to `href="css/style.css"`. Strona bez styli = ten blad w 90%.
2. **`#` vs `.`** - `#wynik` to id, `.wynik` to class. Pomylisz i nic sie nie pokoloruje.
3. **Brak srednika** - `color: red background: blue` padnie. Kazda linia ze srednikiem.
4. **Cache przegladarki** - zmieniles CSS a nic sie nie zmienia? Twardy refresh `Ctrl+Shift+R`.
5. **Kolory bez `#`** - `color: ff0000` nie zadziala, musi byc `color: #ff0000`.

## 5. Wlasciwosci w skrocie

- `color` - tekst, `background` - tlo
- `font-size`, `font-family`, `text-align`
- `width`, `height`, `margin` (na zewnatrz), `padding` (w srodku)
- `border: 1px solid red` - ramka
- `display: grid/flex` - uklad

## 6. Jak debuggowac

`F12` -&gt; zakladka Elements/Inspector, klikasz element i widzisz jakie style sie nalozyly
(przekreslone = przegraly z innym selektorem).

## 7. Co dalej

1. Przerob `dokumentacja/01-html-css/podstawy-css.md`.
2. Otworz `html-css/strona/` i zmien kolory/rozmiary na wlasne.
3. Dopisz style do przykladow z `javascript/45-formularze/` (te niebieskie formularze to wlasnie CSS).
