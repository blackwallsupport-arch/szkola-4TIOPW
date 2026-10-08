# Podstawy CSS

## Czym jest CSS?
CSS (Cascading Style Sheets) - język do stylowania stron internetowych.

## Sposoby dodawania CSS

### 1. Style inline (niezalecane)
```html
<p style="color: blue; font-size: 16px;">Niebieski tekst</p>
```

### 2. Style w nagłówku (dla małych projektów)
```html
<head>
    <style>
        p {
            color: blue;
            font-size: 16px;
        }
    </style>
</head>
```

### 3. Zewnętrzny plik CSS (zalecane)
```html
<head>
    <link rel="stylesheet" href="style.css">
</head>
```

## Podstawowa składnia CSS
```css
selektor {
    wlasciwosc: wartosc;
}
```

## Selektory

### Selektory elementów
```css
p { }              /* Wszystkie paragrafy */
h1 { }             /* Wszystkie h1 */
div { }            /* Wszystkie divy */
```

### Selektory klas
```css
.klasa { }         /* Elementy z class="klasa */
.niebieski { }     /* Elementy z class="niebieski" */
```

### Selektory ID
```css
#naglowek { }      /* Element z id="naglowek" */
```

### Selektory zagnieżdżone
```css
div p { }          /* p wewnątrz div */
div > p { }        /* p bezpośredni potomek div */
```

### Selektory atrybutów
```css
a[href] { }        /* Linki z atrybutem href */
input[type="text"] { } /* Inputy typu text */
```

## Kolory

### Nazwy kolorów
```css
color: red;
color: blue;
color: green;
```

### Kod HEX
```css
color: #ff0000;    /* Czerwony */
color: #00ff00;    /* Zielony */
color: #0000ff;    /* Niebieski */
color: #333;       /* Ciemny szary (skrócony) */
```

### RGB/RGBA
```css
color: rgb(255, 0, 0);        /* Czerwony */
color: rgba(0, 0, 0, 0.5);   /* Czarny z przezroczystością */
```

## Typografia

```css
font-family: Arial, sans-serif;    /* Czcionka */
font-size: 16px;                    /* Rozmiar */
font-weight: bold;                  /* Pogrubienie */
text-align: center;                 /* Wyrównanie */
text-decoration: none;              /* Bez podkreślenia */
line-height: 1.5;                   /* Interlinia */
```

## Box Model (Model pudełkowy)

```
┌─────────────────────┐
│      margin         │
│  ┌───────────────┐  │
│  │    border     │  │
│  │  ┌─────────┐  │  │
│  │  │ padding │  │  │
│  │  │ ┌─────┐ │  │  │
│  │  │ │content│ │  │  │
│  │  │ └─────┘ │  │  │
│  │  └─────────┘  │  │
│  └───────────────┘  │
└─────────────────────┘
```

```css
/* Margines (zewnętrzny) */
margin: 10px;
margin-top: 10px;
margin-right: 20px;
margin-bottom: 10px;
margin-left: 20px;
margin: 10px 20px;           /* góra-dół, lewo-prawo */
margin: 10px 20px 30px 40px; /* góra, prawo, dół, lewo */

/* Padding (wewnętrzny) */
padding: 10px;
padding: 10px 20px;

/* Obramowanie */
border: 1px solid black;
border-radius: 10px;          /* Zaokrąglenie rogów */

/* Rozmiar */
width: 300px;
height: 200px;
max-width: 100%;
box-sizing: border-box;       /* Padding wliczony w szerokość */
```

## Pozycjonowanie

```css
/* Pozycja względna (domyślna) */
position: relative;

/* Pozycja absolutna */
position: absolute;
top: 10px;
left: 20px;

/* Pozycja stała (np. nawigacja) */
position: fixed;
top: 0;
width: 100%;

/* Flexbox */
display: flex;
justify-content: center;     /* Wyrównanie w poziomie */
align-items: center;         /* Wyrównanie w pionie */
flex-direction: row;         /* Kierunek elementów */

/* Grid */
display: grid;
grid-template-columns: 1fr 1fr 1fr;  /* 3 kolumny */
gap: 20px;                            /* Odstęp między elementami */
```

## Tła

```css
/* Kolor tła */
background-color: #f0f0f0;

/* Obrazek tła */
background-image: url('obrazek.jpg');
background-size: cover;          /* Rozciągnięcie na cały element */
background-position: center;     /* Wyśrodkowanie */
background-repeat: no-repeat;    /* Bez powtarzania */
```

## Animacje

```css
/* Podstawowa animacja */
@keyframes przyklad {
    from {
        transform: rotate(0deg);
    }
    to {
        transform: rotate(360deg);
    }
}

.element {
    animation: przyklad 2s infinite;
}
```

## Media Queries (responsywność)

```css
/* Dla ekranów mniejszych niż 768px (tablety) */
@media (max-width: 768px) {
    .kontener {
        width: 100%;
    }
}

/* Dla ekranów mniejszych niż 480px (telefony) */
@media (max-width: 480px) {
    h1 {
        font-size: 24px;
    }
}
```

## Ćwiczenie 1
Stwórz plik `style.css` i połącz go z `index.html`:
1. Ustaw czcionkę Arial dla całej strony
2. Wyśrodkuj nagłówek h1
3. Dodaj margines do akapitów
4. Ustaw niebieskie tło dla body

## Ćwiczenie 2
Stwórz prosty layout z Flexbox:
1. Nagłówek na górze (pełna szerokość)
2. Sidebar z lewej (30% szerokości)
3. Główna treść z prawej (70% szerokości)
4. Stopka na dole

## Następny krok
Przejdź do `../02-javascript/podstawy-js.md` aby dodać interaktywność.
