# Podstawy TypeScript

## Czym jest TypeScript?
TypeScript - typowany nadzbiór JavaScript. Dodaje statyczne typowanie do JS, co ułatwia pisanie i debugowanie kodu.

## Instalacja
```bash
npm install -g typescript
```

## Hello World
```typescript
const wiadomosc: string = "Hello TypeScript!";
console.log(wiadomosc);
```

### Kompilacja
```bash
tsc main.ts
node main.js
```

## Typy danych

```typescript
// Podstawowe typy
let tekst: string = "Hello";
let liczba: number = 42;
let prawda: boolean = true;
let nic: null = null;
let niezdefiniowane: undefined = undefined;

// Tablice
let liczby: number[] = [1, 2, 3];
let teksty: Array<string> = ["a", "b", "c"];

// Krotki (tuple)
let krotka: [string, number] = ["Jan", 25];

// Enum
enum Kolor {
    Czerwony = "RED",
    Zielony = "GREEN",
    Niebieski = "BLUE"
}
let mojKolor: Kolor = Kolor.Czerwony;

// Any (dla nieznanych typów)
let cokolwiek: any = "może być cokolwiek";

// Union types
let zmienna: string | number = "tekst";
zmienna = 42;  // Też działa
```

## Interfejsy

```typescript
// Definicja interfejsu
interface Uzytkownik {
    id: number;
    imie: string;
    email: string;
    wiek?: number;  // Opcjonalny
}

// Użycie
const uzytkownik: Uzytkownik = {
    id: 1,
    imie: "Jan",
    email: "jan@example.com"
};

// Funkcja z interfejsem
function wyswietlUzytkownika(user: Uzytkownik): void {
    console.log(`${user.imie} (${user.email})`);
}
```

## Funkcje

```typescript
// Podstawowa funkcja
function dodaj(a: number, b: number): number {
    return a + b;
}

// Funkcja strzałkowa
const dodaj = (a: number, b: number): number => a + b;

// Funkcja z domyślnymi parametrami
function powitanie(imie: string = "Świecie"): string {
    return `Cześć, ${imie}!`;
}

// Funkcja z opcjonalnymi parametrami
function szukaj(tekst: string, wielkieLitery?: boolean): string {
    if (wielkieLitery) {
        return tekst.toUpperCase();
    }
    return tekst;
}

// Funkcja z rest parameters
function sumuj(...liczby: number[]): number {
    return liczby.reduce((a, b) => a + b, 0);
}
```

## Klasy

```typescript
class Samochod {
    // Pola
    private marka: string;
    private model: string;
    private rok: number;
    
    // Konstruktor
    constructor(marka: string, model: string, rok: number) {
        this.marka = marka;
        this.model = model;
        this.rok = rok;
    }
    
    // Metody
    getOpis(): string {
        return `${this.marka} ${this.model} (${this.rok})`;
    }
    
    // Getter
    get Wiek(): number {
        return new Date().getFullYear() - this.rok;
    }
    
    // Setter
    set Rok(rok: number) {
        if (rok > 1900 && rok <= new Date().getFullYear()) {
            this.rok = rok;
        }
    }
}

// Użycie
const auto = new Samochod("Toyota", "Corolla", 2020);
console.log(auto.getOpis());  // Toyota Corolla (2020)
console.log(auto.Wiek);       // 6
```

## Dziedziczenie

```typescript
class Zwierze {
    constructor(public imie: string) {}
    
    glos(): string {
        return "Dźwięk zwierzęcia";
    }
}

class Pies extends Zwierze {
    constructor(imie: string, private rasa: string) {
        super(imie);
    }
    
    glos(): string {
        return "Hau hau!";
    }
    
    info(): string {
        return `${this.imie} - ${this.rasa}`;
    }
}

const pies = new Pies("Burek", "Labrador");
console.log(pies.glos());  // Hau hau!
console.log(pies.info());  // Burek - Labrador
```

## Generics

```typescript
// Funkcja generyczna
function identyfikator<T>(arg: T): T {
    return arg;
}

const num = identyfikator<number>(123);
const str = identyfikator<string>("hello");

// Interfejs generyczny
interface Para<T, U> {
    pierwszy: T;
    drugi: U;
}

const para: Para<string, number> = {
    pierwszy: "tekst",
    drugi: 42
};

// Klasa generyczna
class Stos<T> {
    private elementy: T[] = [];
    
    push(element: T): void {
        this.elementy.push(element);
    }
    
    pop(): T | undefined {
        return this.elementy.pop();
    }
    
    peek(): T | undefined {
        return this.elementy[this.elementy.length - 1];
    }
}

const stos = new Stos<number>();
stos.push(1);
stos.push(2);
console.log(stos.pop());  // 2
```

## Typy inline i Alias

```typescript
// Typ inline
function drukujPerson(osoba: { imie: string; wiek: number }): void {
    console.log(`${osoba.imie}, ${osoba.wiek} lat`);
}

// Alias typu
type Osoba = {
    imie: string;
    wiek: number;
    email?: string;
};

function drukujOsobe(osoba: Osoba): void {
    console.log(`${osoba.imie}, ${osoba.wiek} lat`);
}
```

## Typowanie warunkowe

```typescript
typewynik<T> = T extends string ? "tekst" : "liczba";

function sprawdz<T>(arg: T): wynik<T> {
    if (typeof arg === "string") {
        return "tekst" as wynik<T>;
    }
    return "liczba" as wynik<T>;
}

const a = sprawdz("hello");  // typ: "tekst"
const b = sprawdz(123);      // typ: "liczba"
```

## Async/Await

```typescript
async function pobierzDane(): Promise<string> {
    const odpowiedz = await fetch("https://api.example.com/data");
    const dane = await odpowiedz.json();
    return dane;
}

// Użycie
pobierzDane().then(dane => console.log(dane));
```

## TSX (React z TypeScript)

```tsx
import React from 'react';

// Interfejs props
interface Props {
    tytul: string;
    opis?: string;
}

// Komponent funkcyjny
const Komponent: React.FC<Props> = ({ tytul, opis }) => {
    return (
        <div>
            <h1>{tytul}</h1>
            {opis && <p>{opis}</p>}
        </div>
    );
};

// Komponent z state
interface Stan {
    licznik: number;
}

class Licznik extends React.Component<{}, Stan> {
    constructor(props: {}) {
        super(props);
        this.state = { licznik: 0 };
    }
    
    zwieksz = () => {
        this.setState({ licznik: this.state.licznik + 1 });
    };
    
    render() {
        return (
            <div>
                <p>Licznik: {this.state.licznik}</p>
                <button onClick={this.zwieksz}>Zwiększ</button>
            </div>
        );
    }
}

export default Licznik;
```

## Ćwiczenie 1
Stwórz interfejs `Produkt` i funkcję `wyswietlProdukty`:
```typescript
interface Produkt {
    id: number;
    nazwa: string;
    cena: number;
    kategoria: string;
}
```

## Ćwiczenie 2
Stwórz klasę `Kalkulator` z typowaniem:
1. Metody dodawania, odejmowania, mnożenia, dzielenia
2. Obsługa błędów (dzielenie przez zero)
3. Historia obliczeń

## Porównanie z JavaScript
| JavaScript | TypeScript |
|------------|------------|
| `let x = 5` | `let x: number = 5` |
| `function foo(x) {}` | `function foo(x: number): void {}` |
| `class Foo {}` | `class Foo { x: number }` |
| Brak typów | Statyczne typowanie |
| Brak interfejsów | Interfejsy |
| Brak generyków | Generics |
