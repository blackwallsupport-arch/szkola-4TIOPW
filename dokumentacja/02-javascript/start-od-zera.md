# JavaScript od zera (dla debili)

## 1. Co to jest JavaScript?

JavaScript (JS) to jezyk, ktory ozywia strony internetowe. Dziala w przegladarce -
klikasz guzik i cos sie dzieje bez przeladowania strony. Nie myl z Java, to inny jezyk.
W tym repo: folder `javascript/` (rozdzialy 38-45).

## 2. Co musisz miec

NIC nie instalujesz. Wystarczy przegladarka (Chrome/Firefox).
Plik `.html` otwierasz dwuklikiem. Do pisania: VS Code.
Jak chcesz podpowiedzi i kolorki, to dodatek **Live Server** w VS Code (prawy klik - Open with Live Server).

## 3. Pierwszy skrypt

```html
<!DOCTYPE html>
<html>
<body>
<script>
document.write("Siema!");
alert("Siema!");
</script>
</body>
</html>
```
Zapisz jako `test.html`, dwuklik. `document.write` pisze na stronie, `alert` pokazuje okienko.

## 4. Skladnia w skrocie

**Zmienne:**
```js
var x = 5;        // stary sposob (tak jest w przykladach z ksiazki)
let y = 7;        // nowy sposob
const STAWKA = 35;// stala, nie zmienisz
```

**Uwaga debila - prompt zwraca TEKST:**
```js
var a = prompt("Podaj liczbe:"); // wpisales 4 i 5...
var zle = a + a;                 // da "44", nie 8!
var dobrze = Number(a) + Number(a); // da 8
```
Zasada: wszystko z `prompt` i z formularzy (`input.value`) owijaj w `Number(...)` jak liczysz.

**If / switch:**
```js
if (x % 2 == 0) {
    alert("parzysta");
} else {
    alert("nieparzysta");
}
switch (znak) {
    case '+': alert("plus"); break;
    default: alert("cos innego");
}
```

**Petle:**
```js
for (var i = 0; i < 5; i++) {
    document.write(i + " ");
}
```

**Funkcje:**
```js
function suma(a, b) {
    return a + b;
}
alert(suma(2, 3));
```

**Formularz + guzik (najwazniejsze w rozdziale 45):**
```html
<input type="text" id="d1">
<input type="button" value="Oblicz" onclick="przelicz()">
<div id="wynik"></div>
<script>
function przelicz() {
    var x = Number(document.getElementById("d1").value);
    document.getElementById("wynik").innerHTML = "Dales: " + x;
}
</script>
```

**Obiekty (rozdzial 43):**
```js
Math.max(1, 5);            // 5
new Date().getFullYear();  // rok
"ala".toUpperCase();       // "ALA"
[3, 1, 2].sort();          // [1, 2, 3]
```

## 5. Najczestsze bledy debila

1. **Brak `Number()`** - `prompt` i `input.value` to stringi. `"4" + "5"` = `"45"`.
2. **Zle ID** - `getElementById("d1")` zwroci null jak w HTML nie ma `id="d1"`. Literowka = nic nie dziala.
3. **Skrypt przed HTML** - jak skrypt szuka elementu, ktory jest nizej na stronie, to go nie znajdzie. Wstawiaj `<script>` na koncu `<body>` albo uzywaj `onload`.
4. **`=` zamiast `==/===`** - to samo co w C++.
5. **Srednik i nawiasy** - zamknietego `}` albo `)` szukaj od konca.

## 6. Jak debuggowac

W przegladarce wcisnij `F12` -&gt; zakladka **Console**. Czerwone bledy mowia ci w ktorej linii padlo.
Dopisz sobie `console.log(x);` zeby podejrzec wartosc.

## 7. Co dalej (mapa folderow)

Szczegolowa adnotacja kazdego pliku jest w `javascript/README.md`.
Kolejnosc: `38-start` -&gt; `39-zmienne` -&gt; `40-operatory` -&gt; `41-warunki-petle` -&gt; `42-funkcje` -&gt; `43-obiekty` -&gt; `44-zdarzenia` -&gt; `45-formularze`.
