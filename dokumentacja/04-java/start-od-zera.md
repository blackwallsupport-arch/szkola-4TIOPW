# Java od zera (dla debili)

## 1. Co to jest Java?

Java to jezyk, w ktorym piszesz klasy i obiekty. Program dziala na "maszynie wirtualnej" (JVM),
wiec ten sam program pojdzie na Windows i Linux. W szkole: applety, aplikacje, matura, studia.

## 2. Co zainstalowac

1. Sciagnij **JDK 17+** (np. Temurin / Oracle JDK) i zainstaluj.
2. Sprawdz w terminalu:
   ```powershell
   java -version
   javac -version
   ```
   Oba maja wypisac wersje. Jak nie, to dodaj Jave do PATH i restart.
3. Edytor: VS Code + rozszerzenie **Extension Pack for Java**.

## 3. Pierwszy program

Plik musi sie nazywac tak jak klasa: `Witaj.java`:
```java
public class Witaj {
    public static void main(String[] args) {
        System.out.println("Siema!");
    }
}
```
Kompilacja i start:
```powershell
javac Witaj.java
java Witaj
```
Wazne: `javac` tworzy `Witaj.class`, a `java Witaj` odpalasz BEZ `.class`.

## 4. Skladnia w skrocie

**Wypisywanie i wczytywanie:**
```java
System.out.println("tekst");   // z enterem
System.out.print("tekst");     // bez entera
Scanner sc = new Scanner(System.in);
int x = sc.nextInt();          // wczytaj liczbe
String s = sc.nextLine();      // wczytaj linie
```

**Zmienne i typy:**
```java
int a = 5;
double b = 3.14;
char c = 'A';
String s = "tekst";   // duze S!
boolean t = true;
```

**If / switch:**
```java
if (x % 2 == 0) {
    System.out.println("parzysta");
} else {
    System.out.println("nieparzysta");
}
switch (dzien) {
    case 1: System.out.println("pon"); break;
    default: System.out.println("zly dzien");
}
```

**Petle:**
```java
for (int i = 0; i < 5; i++) {
    System.out.println(i);
}
while (i < 5) {
    System.out.println(i);
    i++;
}
```

**Tablice:**
```java
int[] tab = {1, 2, 3, 4, 5};
for (int i = 0; i < tab.length; i++) {
    System.out.println(tab[i]);
}
```

**Funkcje (metody):**
```java
static int suma(int a, int b) {
    return a + b;
}
```

**Klasa i obiekt:**
```java
class Pies {
    String imie;
    void szczekaj() {
        System.out.println(imie + ": Hau!");
    }
}
Pies p = new Pies();
p.imie = "Reksio";
p.szczekaj();
```

## 5. Najczestsze bledy debila

1. **Zla nazwa pliku** - plik musi sie nazywac jak klasa publiczna (`Witaj.java` dla `class Witaj`).
2. **`String` z malej litery** - w Javie tekst to `String` (duze S), nie `string`.
3. **`==` na stringach** - `a == b` porownuje adresy. Teksty porownuj `a.equals(b)`.
4. **`nextInt` + `nextLine`** - po `nextInt` zostaje enter, wiec dodaj puste `sc.nextLine()` przed czytaniem linii.
5. **Srednik i wielkosc liter** - `system.out.println` nie zadziala, musi byc `System.out.println`.

## 6. Podsumowanie w skrocie

- `System.out.println` - wypisz, `Scanner` + `nextInt/nextLine` - wczytaj
- `int double char String boolean` - typy
- `if/else, switch, for, while` - sterowanie
- `.length` dla tablic, `.length()` dla stringow, `.equals()` do porownan tekstu

## 7. Co dalej

Teoria w `dokumentacja/04-java/podstawy-java.md`. Kod w C++ z folderu `cpp/` przepisuj 1:1 na Jave -
skladnia petli i ifow jest prawie identyczna, roznice to `System.out.println` i `String`.
