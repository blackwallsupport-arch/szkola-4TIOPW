# SQL od zera (dla debili)

## 1. Co to jest SQL?

SQL to jezyk do gadania z baza danych (tabelami). Pytasz: "daj mi wszystkich uczniow z klasy 4",
a baza odpowiada wierszami. Tabele to jak arkusze Excela: kolumny (id, imie, klasa) i wiersze.

## 2. Co zainstalowac

1. Zainstaluj **XAMPP** i wystartuj **MySQL** w panelu (Start przy MySQL).
2. W przegladarce wejdz na `http://localhost/phpmyadmin` - to graficzny panel bazy.
3. Albo nic nie instaluj do nauki skladni: wejdz na **sqliteonline.com** i cwicz w przegladarce.

## 3. Pierwsze zapytania (kopiuj-wklej)

```sql
-- stworz tabele
CREATE TABLE uczniowie (
    id INT PRIMARY KEY AUTO_INCREMENT,
    imie VARCHAR(50),
    klasa VARCHAR(10),
    srednia DECIMAL(3,2)
);

-- dodaj wiersze
INSERT INTO uczniowie (imie, klasa, srednia) VALUES ('Ala', '4TI', 4.5);
INSERT INTO uczniowie (imie, klasa, srednia) VALUES ('Ola', '4TI', 3.2);
INSERT INTO uczniowie (imie, klasa, srednia) VALUES ('Jan', '3LO', 5.0);

-- pokaz wszystko
SELECT * FROM uczniowie;
```

## 4. Skladnia w skrocie

**SELECT (czytanie):**
```sql
SELECT imie, srednia FROM uczniowie;             -- wybrane kolumny
SELECT * FROM uczniowie WHERE klasa = '4TI';    -- tylko 4TI
SELECT * FROM uczniowie WHERE srednia >= 4 ORDER BY srednia DESC;  -- sortuj malejaco
SELECT COUNT(*) FROM uczniowie;                 -- ile wierszy
```

**INSERT / UPDATE / DELETE (pisanie):**
```sql
INSERT INTO uczniowie (imie, klasa) VALUES ('Ewa', '4TI');
UPDATE uczniowie SET srednia = 5.0 WHERE imie = 'Ola';  -- bez WHERE zmienisz WSZYSTKIM!
DELETE FROM uczniowie WHERE id = 3;                     -- bez WHERE usuniesz WSZYSTKO!
```

**Laczenie tabel (JOIN):**
```sql
SELECT uczniowie.imie, oceny.przedmiot
FROM uczniowie
JOIN oceny ON oceny.uczen_id = uczniowie.id;
```

## 5. Najczestsze bledy debila

1. **UPDATE/DELETE bez WHERE** - zmienisz albo usuniesz cala tabele. Zawsze najpierw `SELECT` z tym samym WHERE zeby sprawdzic co trafisz.
2. **Cudzyslow dla tekstu** - `WHERE klasa = 4TI` to blad, musi byc `WHERE klasa = '4TI'`. Liczb sie nie cytuje.
3. **Srednik** - kazde zapytanie koncz `;`.
4. **Wielkosc liter w nazwach** - na Linuxie `Uczniowie` i `uczniowie` to rozne tabele. Pisz wszystko malymi.
5. **NULL to nie zero** - `WHERE srednia = NULL` nie zadziala, uzywaj `WHERE srednia IS NULL`.

## 6. Podsumowanie w skrocie

- `CREATE TABLE` - stworz, `INSERT` - dodaj, `SELECT` - czytaj, `UPDATE` - popraw, `DELETE` - usun
- `WHERE` - filtr, `ORDER BY ... ASC/DESC` - sortowanie, `COUNT/SUM/AVG` - liczenie
- `JOIN ... ON` - laczenie tabel

## 7. Co dalej

Polacz z PHP: `mysqli_connect` -&gt; `mysqli_query("SELECT ...")` -&gt; petla `while` po wynikach -&gt; `echo` do HTML.
Uwaga na bezpieczenstwo: dane z formularza wpinaj przez prepared statements, nigdy prosto do zapytania.
