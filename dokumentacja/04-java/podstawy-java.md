# Podstawy Java

## Czym jest Java?
Java - obiektowy, przenośny język programowania. Działa na zasadzie "napisz raz, uruchom wszędzie" (dzięki JVM).

## Instalacja
1. Pobierz JDK z https://adoptium.net/
2. Zainstaluj i dodaj do PATH

## Hello World
```java
public class Main {
    public static void main(String[] args) {
        System.out.println("Hello World!");
    }
}
```

### Kompilacja i uruchomienie
```bash
javac Main.java
java Main
```

## Zmienne i typy danych

```cpp
// Typy całkowite
byte liczba1 = 127;        // 8 bitów
short liczba2 = 32767;     // 16 bitów
int liczba3 = 2147483647;  // 32 bity
long liczba4 = 9223372036854775807L;  // 64 bity

// Typy zmiennoprzecinkowe
float liczba5 = 3.14f;     // 32 bity
double liczba6 = 3.14159;  // 64 bity

// Inne typy
char znak = 'A';           // Znak Unicode
boolean prawda = true;     // true/false
String tekst = "Hello";    // Tekst (klasa, nie typ)
```

## Stałe
```java
final int STALA = 100;
static final double PI = 3.14159;
```

## Operatory
```cpp
// Arytmetyczne
int a = 10 + 5;   // 15
int b = 10 - 5;   // 5
int c = 10 * 5;   // 50
int d = 10 / 5;   // 2
int e = 10 % 3;   // 1 (reszta)

// Porównania
boolean f = (a == b);  // false
boolean g = (a != b);  // true
boolean h = (a > b);   // true

// Logiczne
boolean i = (true && false);  // false
boolean j = (true || false);  // true
boolean k = !true;            // false
```

## Warunki

```java
int wiek = 18;

if (wiek >= 18) {
    System.out.println("Pełnoletni");
} else if (wiek >= 16) {
    System.out.println("Prawie pełnoletni");
} else {
    System.out.println("Niepełnoletni");
}

// Switch
int dzien = 3;
switch (dzien) {
    case 1:
        System.out.println("Poniedziałek");
        break;
    case 2:
        System.out.println("Wtorek");
        break;
    case 3:
        System.out.println("Środa");
        break;
    default:
        System.out.println("Inny dzień");
}

// Ternary operator
String status = (wiek >= 18) ? "Dorosły" : "Dziecko";
```

## Pętle

```java
// For
for (int i = 0; i < 10; i++) {
    System.out.println(i);
}

// While
int i = 0;
while (i < 10) {
    System.out.println(i);
    i++;
}

// Do-while
int i = 0;
do {
    System.out.println(i);
    i++;
} while (i < 10);

// For-each (po kolekcji)
int[] liczby = {1, 2, 3, 4, 5};
for (int liczba : liczby) {
    System.out.println(liczba);
}
```

## Tablice

```java
// Deklaracja
int[] liczby = new int[5];      // Tablica 5 elementów
int[] liczby = {1, 2, 3, 4, 5}; // Z inicializacją

// Dostęp
liczby[0] = 10;  // Ustaw wartość
int pierwszy = liczby[0];  // Pobierz wartość

// Rozmiar
int rozmiar = liczby.length;

// Pętla
for (int i = 0; i < liczby.length; i++) {
    System.out.println(liczby[i]);
}
```

## Klasy i obiekty

```java
// Definicja klasy
public class Osoba {
    // Pola (zmienne)
    private String imie;
    private int wiek;
    
    // Konstruktor
    public Osoba(String imie, int wiek) {
        this.imie = imie;
        this.wiek = wiek;
    }
    
    // Metody
    public String getImie() {
        return imie;
    }
    
    public void setImie(String imie) {
        this.imie = imie;
    }
    
    public int getWiek() {
        return wiek;
    }
    
    public void wyswietlInfo() {
        System.out.println("Imię: " + imie + ", Wiek: " + wiek);
    }
}

// Użycie klasy
public class Main {
    public static void main(String[] args) {
        Osoba osoba1 = new Osoba("Jan", 25);
        osoba1.wyswietlInfo();  // Imię: Jan, Wiek: 25
        
        osoba1.setImie("Adam");
        System.out.println(osoba1.getImie());  // Adam
    }
}
```

## Dziedziczenie

```java
// Klasa bazowa
public class Zwierze {
    protected String imie;
    
    public Zwierze(String imie) {
        this.imie = imie;
    }
    
    public void glos() {
        System.out.println("Dźwięk zwierzęcia");
    }
}

// Klasa pochodna
public class Pies extends Zwierze {
    public Pies(String imie) {
        super(imie);
    }
    
    @Override
    public void glos() {
        System.out.println("Hau hau!");
    }
}

// Użycie
Pies pies = new Pies("Burek");
pies.glos();  // Hau hau!
```

## Interfejsy

```java
// Definicja interfejsu
public interface Serializable {
    void serialize();
    void deserialize();
}

// Implementacja
public class User implements Serializable {
    private String name;
    
    @Override
    public void serialize() {
        // Implementacja zapisu
    }
    
    @override
    public void deserialize() {
        // Implementacja odczytu
    }
}
```

## Obsługa wyjątków

```java
public class Main {
    public static void main(String[] args) {
        try {
            int wynik = 10 / 0;
        } catch (ArithmeticException e) {
            System.out.println("Dzielenie przez zero!");
        } finally {
            System.out.println("Blok finally");
        }
    }
}
```

## Kolekcje

```java
import java.util.ArrayList;
import java.util.HashMap;

// ArrayList (dynamiczna tablica)
ArrayList<String> lista = new ArrayList<>();
lista.add("Element 1");
lista.add("Element 2");
String element = lista.get(0);

// HashMap (słownik)
HashMap<String, Integer> mapa = new HashMap<>();
mapa.put("klucz1", 100);
mapa.put("klucz2", 200);
int wartosc = mapa.get("klucz1");
```

## Ćwiczenie 1
Stwórz klasę `Kalkulator` z metodami:
1. `dodaj(a, b)` - dodawanie
2. `odejmij(a, b)` - odejmowanie
3. `mnoz(a, b)` - mnożenie
4. `dziel(a, b)` - dzielenie (z obsługą dzielenia przez zero)

## Ćwiczenie 2
Stwórz klasę `Student` z polami:
1. imie
2. nazwisko
3. sredniaOcen
4. Metoda `czyZdaje()` - zwraca true jeśli średnia >= 3.0

## Następny krok
Przejdź do `../05-typescript/podstawy-ts.md` aby nauczyć się TypeScript.
