# Serwer Web w C++

## Czym jest serwer web?
Serwer web - program, który nasłuchuje na żądania HTTP i zwraca odpowiedzi (strony HTML, pliki, dane JSON).

## Popularne biblioteki

### 1. Crow (najłatwiejsza dla początkujących)
```bash
# Instalacja (z GitHuba)
git clone https://github.com/CrowCpp/Crow.git
```

### 2. Boost.Beast (zaawansowana)
### 3. Drogon (pełnaframework)

## Przykład serwera z Crow

### main.cpp
```cpp
#include "crow.h"

int main() {
    crow::SimpleApp app;

    // Strona główna
    CROW_ROUTE(app, "/")
    ([](){
        return "Witaj na moim serwerze!";
    });

    // Strona HTML
    CROW_ROUTE(app, "/hello")
    ([](){
        crow::response res;
        res.set_header("Content-Type", "text/html");
        res.body = R"(
            <!DOCTYPE html>
            <html>
            <head>
                <title>Serwer C++</title>
            </head>
            <body>
                <h1>Witaj z serwera C++!</h1>
                <p>Ta strona jest generowana przez C++</p>
            </body>
            </html>
        )";
        return res;
    });

    // API JSON
    CROW_ROUTE(app, "/api/data")
    ([](){
        crow::json::wvalue result;
        result["wiadomosc"] = "Hello API!";
        result["liczba"] = 42;
        return result;
    });

    // Parametry URL
    CROW_ROUTE(app, "/user/<int>")
    ([](int id){
        return "Użytkownik ID: " + std::to_string(id);
    });

    // Uruchom serwer na porcie 8080
    app.port(18080).multithreaded().run();
}
```

### Kompilacja
```bash
g++ main.cpp -o serwer -std=c++17 -lcrow -lpthread
```

### Uruchomienie
```bash
./serwer
```

Otwórz przeglądarkę i przejdź do `http://localhost:18080`

## Obsługa żądań HTTP

### Metody HTTP
```cpp
// GET - pobieranie danych
CROW_ROUTE(app, "/pobierz")
([](){
    return "Dane pobrane";
});

// POST - wysyłanie danych
CROW_ROUTE(app, "/wyslij")
.method("POST")
([](const crow::request& req){
    auto body = req.body;
    return "Otrzymano: " + body;
});
```

## Serwowanie plików statycznych

```cpp
#include "crow.h"
#include <fstream>
#include <sstream>

int main() {
    crow::SimpleApp app;

    // Serwowanie HTML
    CROW_ROUTE(app, "/")
    ([](){
        std::ifstream file("public/index.html");
        std::stringstream buffer;
        buffer << file.rdbuf();
        return crow::response(buffer.str());
    });

    // Serwowanie CSS
    CROW_ROUTE(app, "/style.css")
    ([](){
        std::ifstream file("public/style.css");
        std::stringstream buffer;
        buffer << file.rdbuf();
        crow::response res(buffer.str());
        res.set_header("Content-Type", "text/css");
        return res;
    });

    app.port(8080).multithreaded().run();
}
```

## Struktura projektu web w C++

```
moj-projekt/
├── main.cpp              # Główny plik serwera
├── CMakeLists.txt        # Plik konfiguracyjny CMake
├── public/               # Pliki statyczne
│   ├── index.html
│   ├── style.css
│   └── script.js
└── include/              # Pliki nagłówkowe
    └── crow/
        └── crow.h
```

## Przykład: Prosty blog

### main.cpp
```cpp
#include "crow.h"
#include <vector>
#include <string>

struct Post {
    int id;
    std::string tytul;
    std::string tresc;
};

std::vector<Post> posts = {
    {1, "Pierwszy post", "Treść pierwszego posta"},
    {2, "Drugi post", "Treść drugiego posta"}
};

int main() {
    crow::SimpleApp app;

    // Lista postów (JSON)
    CROW_ROUTE(app, "/api/posts")
    ([](){
        crow::json::wvalue result;
        crow::json::wvalue::list posty;
        for (auto& post : posts) {
            crow::json::wvalue::list item;
            item.push_back(post.id);
            item.push_back(post.tytul);
            item.push_back(post.tresc);
            posty.push_back(std::move(item));
        }
        result["posts"] = std::move(posty);
        return result;
    });

    // Dodaj post
    CROW_ROUTE(app, "/api/posts")
    .method("POST")
    ([](const crow::request& req){
        auto body = crow::json::load(req.body);
        if (!body) {
            return crow::response(400, "Invalid JSON");
        }
        
        Post nowy;
        nowy.id = posts.size() + 1;
        nowy.tytul = body["tytul"].s();
        nowy.tresc = body["tresc"].s();
        posts.push_back(nowy);
        
        return crow::response(201, "Post dodany");
    });

    app.port(8080).multithreaded().run();
}
```

## Ćwiczenie 1
Stwórz serwer z:
1. Stroną główną z powitaniem
2. Endpointem `/czas` zwracającym aktualny czas
3. Endpointem `/losowa` zwracającym losową liczbę

## Ćwiczenie 2
Rozbuduj serwer o:
1. Serwowanie plików statycznych (HTML, CSS, JS)
2. Formularz kontaktowy na stronie
3. Zapisywanie wiadomości z formularza

## Następny krok
Przejdź do `../04-java/podstawy-java.md` aby nauczyć się Javy.
