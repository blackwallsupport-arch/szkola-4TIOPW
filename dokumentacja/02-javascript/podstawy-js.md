# Podstawy JavaScript

## Czym jest JavaScript?
JavaScript - język programowania do tworzenia interaktywnych stron internetowych. Działa w przeglądarce i na serwerze (Node.js).

## Hello World
```javascript
console.log("Hello World!");
document.write("Hello World!");
alert("Hello World!");
```

## Zmienne

```javascript
// var - przestarzałe, nie używaj
var zmienna1 = 5;

// let - zmienna bloczkowa
let zmienna2 = 10;

// const - stała
const STALA = 100;
```

## Typy danych

```javascript
// Prymitywne
let tekst = "Hello";           // string
let liczba = 42;               // number
let prawda = true;             // boolean
let nic = null;                // null
let niezdefiniowane;           // undefined

// Złożone
let tablica = [1, 2, 3];       // array
let obiekt = {a: 1, b: 2};    // object
let funkcja = function() {};   // function
```

## Operatory

```javascript
// Arytmetyczne
let a = 10 + 5;   // 15
let b = 10 - 5;   // 5
let c = 10 * 5;   // 50
let d = 10 / 5;   // 2
let e = 10 % 3;   // 1
let f = 2 ** 3;   // 8 (potęgowanie)

// Porównania
let g = (a == b);   // false (równość wartości)
let h = (a === b);  // false (równość wartości i typu)
let i = (a != b);   // true
let j = (a > b);    // true
let k = (a < b);    // false

// Logiczne
let l = (true && false);  // false (AND)
let m = (true || false);  // true (OR)
let n = !true;            // false (NOT)
```

## Funkcje

```javascript
// Deklaracja funkcji
function dodaj(a, b) {
    return a + b;
}

// Wyrażenie funkcji
const dodaj = function(a, b) {
    return a + b;
};

// Funkcja strzałkowa (ES6)
const dodaj = (a, b) => a + b;

// Funkcja z domyślnymi parametrami
function powitanie(imie = "Świecie") {
    return `Cześć, ${imie}!`;
}

// Funkcja z rest parameters
function sumuj(...liczby) {
    return liczby.reduce((a, b) => a + b, 0);
}
```

## Tablice

```javascript
// Deklaracja
let liczby = [1, 2, 3, 4, 5];

// Dostęp do elementów
liczby[0];  // 1
liczby[4];  // 5

// Właściwości
liczby.length;  // 5

// Metody
liczby.push(6);           // Dodaj na koniec
liczby.pop();             // Usuń ostatni
liczby.unshift(0);        // Dodaj na początek
liczby.shift();           // Usuń pierwszy
liczby.splice(2, 1);      // Usuń element na indeksie 2
liczby.includes(3);       // Sprawdź czy zawiera 3
liczby.indexOf(3);        // Znajdź indeks elementu 3
liczby.reverse();         // Odwróć kolejność
liczby.sort();            // Sortuj
liczby.map(x => x * 2);  // Mapuj每个元素
liczby.filter(x => x > 2); // Filtruj
liczby.reduce((a, b) => a + b, 0); // Redukuj
```

## Obiekty

```javascript
// Deklaracja
let osoba = {
    imie: "Jan",
    nazwisko: "Kowalski",
    wiek: 25,
    
    // Metoda
    wyswietlInfo: function() {
        return `${this.imie} ${this.nazwisko}, ${this.wiek} lat`;
    }
};

// Dostęp do właściwości
osoba.imie;           // "Jan"
osoba["nazwisko"];    // "Kowalski"

// Dodawanie właściwości
osoba.email = "jan@example.com";

// Usuwanie właściwości
delete osoba.email;

// Pętla po obiekcie
for (let klucz in osoba) {
    console.log(`${klucz}: ${osoba[klucz]}`);
}
```

## Klasy (ES6)

```javascript
class Osoba {
    constructor(imie, nazwisko) {
        this.imie = imie;
        this.nazwisko = nazwisko;
    }
    
    // Metoda
    wyswietlInfo() {
        return `${this.imie} ${this.nazwisko}`;
    }
    
    // Getter
    get pelneImie() {
        return `${this.imie} ${this.nazwisko}`;
    }
    
    // Setter
    set imie(imie) {
        this._imie = imie;
    }
}

// Dziedziczenie
class Pracownik extends Osoba {
    constructor(imie, nazwisko, stanowisko) {
        super(imie, nazwisko);
        this.stanowisko = stanowisko;
    }
    
    wyswietlInfo() {
        return `${super.wyswietlInfo()} - ${this.stanowisko}`;
    }
}
```

## Obsługa DOM

```javascript
// Pobieranie elementów
const element = document.getElementById('mojId');
const elementy = document.getElementsByClassName('mojaKlasa');
const elementy2 = document.querySelectorAll('.mojaKlasa');

// Tworzenie elementów
const nowyDiv = document.createElement('div');
nowyDiv.innerHTML = '<p>Nowa treść</p>';
document.body.appendChild(nowyDiv);

// Zmiana treści
element.textContent = "Nowa treść";
element.innerHTML = "<p>HTML treść</p>";

// Zmiana stylów
element.style.color = "red";
element.style.fontSize = "20px";

// Zmiana klas
element.classList.add("nowaKlasa");
element.classList.remove("staraKlasa");
element.classList.toggle("toggleKlasa");

// Zdarzenia
element.addEventListener('click', function() {
    alert('Kliknięto!');
});

// Obsługa formularzy
const form = document.querySelector('form');
form.addEventListener('submit', function(e) {
    e.preventDefault();
    const dane = new FormData(form);
    console.log(dane.get('imie'));
});
```

## AJAX i Fetch

```javascript
// Fetch API (nowoczesne)
fetch('https://api.example.com/dane')
    .then(response => response.json())
    .then(data => console.log(data))
    .catch(error => console.error('Błąd:', error));

// Async/Await
async function pobierzDane() {
    try {
        const response = await fetch('https://api.example.com/dane');
        const data = await response.json();
        console.log(data);
    } catch (error) {
        console.error('Błąd:', error);
    }
}

// Wysyłanie danych
fetch('https://api.example.com/dane', {
    method: 'POST',
    headers: {
        'Content-Type': 'application/json'
    },
    body: JSON.stringify({
        imie: 'Jan',
        nazwisko: 'Kowalski'
    })
});
```

## Local Storage

```javascript
// Zapis
localStorage.setItem('uzytkownik', JSON.stringify({
    imie: 'Jan',
    wiek: 25
}));

// Odczyt
const uzytkownik = JSON.parse(localStorage.getItem('uzytkownik'));

// Usuwanie
localStorage.removeItem('uzytkownik');

// Czyszczenie
localStorage.clear();
```

## Ćwiczenie 1
Stwórz prostą aplikację TODO:
1. Formularz do dodawania zadań
2. Lista zadań
3. Możliwość usuwania zadań
4. Zapis do localStorage

## Ćwiczenie 2
Stwórz grę "Zgadnij liczbę":
1. Losowa liczba 1-100
2. Pole do wpisywania liczb
3. Informacje "za dużo/za mało"
4. Licznik prób
