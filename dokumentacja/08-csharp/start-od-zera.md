# C# od zera (dla debili)

## 1. Co to jest C#?

C# (czytaj "si szarp") to jezyk Microsoftu, podobny do Javy. Piszesz aplikacje na Windows,
gry w Unity, strony (ASP.NET). Jak umiesz Jave/C++, to C# wejdzie sam.

## 2. Co zainstalowac

1. Sciagnij **.NET SDK** (dotnet.microsoft.com) - wersja LTS.
2. Sprawdz:
   ```powershell
   dotnet --version
   ```
3. Edytor: VS Code + rozszerzenie **C# Dev Kit**, albo pelne **Visual Studio**.

## 3. Pierwszy program

```powershell
dotnet new console -n Witaj
cd Witaj
dotnet run
```
Zobaczysz `Hello, World!`. Plik `Program.cs`:
```csharp
Console.WriteLine("Siema!");
```
Kazdy kolejny przyklad: edytujesz `Program.cs`, odpalasz `dotnet run`.

## 4. Skladnia w skrocie

**Wypisywanie i wczytywanie:**
```csharp
Console.WriteLine("tekst");       // z enterem
Console.Write("tekst");           // bez entera
string imie = Console.ReadLine(); // wczytaj linie
int x = int.Parse(Console.ReadLine()); // wczytaj liczbe
```

**Zmienne i typy:**
```csharp
int a = 5;
double b = 3.14;
char c = 'A';
string s = "tekst";   // male s (inaczej niz w Javie!)
bool t = true;
```

**If / switch / petle - tak samo jak w Javie:**
```csharp
if (x % 2 == 0) {
    Console.WriteLine("parzysta");
} else {
    Console.WriteLine("nieparzysta");
}
for (int i = 0; i < 5; i++) {
    Console.WriteLine(i);
}
```

**Tablice i listy:**
```csharp
int[] tab = {1, 2, 3};
Console.WriteLine(tab[0]);
Console.WriteLine(tab.Length);   // duze L!
List<int> lista = new List<int>();
lista.Add(5);
```

**Klasa:**
```csharp
class Pies {
    public string Imie;
    public void Szczekaj() {
        Console.WriteLine(Imie + ": Hau!");
    }
}
```

## 5. Najczestsze bledy debila

1. **`string` vs `String`** - w C# piszesz male `string` (w Javie duze).
2. **`Length` z duzej** - tablica ma `tab.Length`, nie `length`.
3. **`Parse` wywala sie na glupotach** - `int.Parse("abc")` rzuca blad. Bezpieczniej:
   ```csharp
   if (int.TryParse(Console.ReadLine(), out int x)) { ... }
   ```
4. **Zapomniales `dotnet run` w dobrym folderze** - odpalasz tam gdzie jest `.csproj`.
5. **Srednik i klamry** - jak w C++/Javie, kompilator pokaze linie bledu.

## 6. Roznice C# vs Java w skrocie

- `Console.WriteLine` zamiast `System.out.println`
- `string` (male), `tab.Length` (duze L)
- `dotnet new console` + `dotnet run` zamiast `javac/java`
- Reszta (if, for, klasy) prawie 1:1

## 7. Co dalej

Przepisz przyklady z `cpp/32-podstawy/` na C# - petle i ify sa identyczne,
zmieniasz tylko `cout` na `Console.WriteLine` i `cin` na `Console.ReadLine`.
