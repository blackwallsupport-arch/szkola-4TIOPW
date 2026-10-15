# Struktura projektu - Dynamiczna strona w C++

## Architektura aplikacji

```
┌─────────────────────────────────────────────────────────────┐
│                      PRZEGLĄDARKA                          │
│  ┌─────────────────────────────────────────────────────┐   │
│  │                    HTML/CSS/JS                      │   │
│  │              (Frontend - strona)                    │   │
│  └─────────────────────────────────────────────────────┘   │
│                          │                                  │
│                          ▼                                  │
│  ┌─────────────────────────────────────────────────────┐   │
│  │                   SERWER C++                        │   │
│  │            (Backend - logika serwera)               │   │
│  └─────────────────────────────────────────────────────┘   │
│                          │                                  │
│                          ▼                                  │
│  ┌─────────────────────────────────────────────────────┐   │
│  │                    BAZA DANYCH                      │   │
│  │              (SQLite/MySQL/PostgreSQL)              │   │
│  └─────────────────────────────────────────────────────┘   │
└─────────────────────────────────────────────────────────────┘
```

## Struktura katalogów

```
moj-projekt/
├── main.cpp                    # Główny plik serwera
├── CMakeLists.txt              # Konfiguracja CMake
├── README.md                   # Dokumentacja projektu
│
├── include/                    # Pliki nagłówkowe
│   ├── server.h               # Klasa serwera
│   ├── database.h             # Obsługa bazy danych
│   └── models/                # Modele danych
│       ├── user.h
│       └── post.h
│
├── src/                       # Pliki źródłowe
│   ├── server.cpp
│   ├── database.cpp
│   └── models/
│       ├── user.cpp
│       └── post.cpp
│
├── public/                    # Pliki statyczne (frontend)
│   ├── index.html             # Strona główna
│   ├── css/
│   │   └── style.css          # Style
│   ├── js/
│   │   └── app.js             # JavaScript
│   └── images/                # Obrazki
│
└── tests/                     # Testy
    ├── test_server.cpp
    └── test_database.cpp
```

## Przykład: Prosty blog

### 1. main.cpp (Serwer)
```cpp
#include "crow.h"
#include "database.h"
#include <vector>
#include <string>

int main() {
    // Inicjalizacja bazy danych
    Database db("blog.db");
    db.createTables();
    
    crow::SimpleApp app;
    
    // Strona główna
    CROW_ROUTE(app, "/")
    ([](){
        std::ifstream file("public/index.html");
        std::stringstream buffer;
        buffer << file.rdbuf();
        return crow::response(buffer.str());
    });
    
    // API - lista postów
    CROW_ROUTE(app, "/api/posts")
    ([&db](){
        auto posts = db.getAllPosts();
        crow::json::wvalue result;
        crow::json::wvalue::list postList;
        
        for (auto& post : posts) {
            crow::json::wvalue::list item;
            item.push_back(post.id);
            item.push_back(post.title);
            item.push_back(post.content);
            item.push_back(post.author);
            item.push_back(post.createdAt);
            postList.push_back(std::move(item));
        }
        
        result["posts"] = std::move(postList);
        return result;
    });
    
    // API - dodaj post
    CROW_ROUTE(app, "/api/posts")
    .method("POST")
    ([&db](const crow::request& req){
        auto body = crow::json::load(req.body);
        if (!body) {
            return crow::response(400, "Invalid JSON");
        }
        
        Post post;
        post.title = body["title"].s();
        post.content = body["content"].s();
        post.author = body["author"].s();
        
        db.addPost(post);
        return crow::response(201, "Post dodany");
    });
    
    // Serwowanie plików CSS
    CROW_ROUTE(app, "/css/<string>")
    ([](const std::string& filename){
        std::ifstream file("public/css/" + filename);
        if (!file.good()) {
            return crow::response(404);
        }
        std::stringstream buffer;
        buffer << file.rdbuf();
        crow::response res(buffer.str());
        res.set_header("Content-Type", "text/css");
        return res;
    });
    
    // Serwowanie plików JS
    CROW_ROUTE(app, "/js/<string>")
    ([](const std::string& filename){
        std::ifstream file("public/js/" + filename);
        if (!file.good()) {
            return crow::response(404);
        }
        std::stringstream buffer;
        buffer << file.rdbuf();
        crow::response res(buffer.str());
        res.set_header("Content-Type", "application/javascript");
        return res;
    });
    
    std::cout << "Serwer uruchomiony na porcie 8080" << std::endl;
    app.port(8080).multithreaded().run();
}
```

### 2. include/database.h
```cpp
#pragma once
#include <string>
#include <vector>
#include <sqlite3.h>

struct Post {
    int id;
    std::string title;
    std::string content;
    std::string author;
    std::string createdAt;
};

class Database {
private:
    sqlite3* db;
    
public:
    Database(const std::string& filename);
    ~Database();
    
    void createTables();
    void addPost(const Post& post);
    std::vector<Post> getAllPosts();
    Post getPostById(int id);
    void deletePost(int id);
};
```

### 3. public/index.html
```html
<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Mój Blog</title>
    <link rel="stylesheet" href="/css/style.css">
</head>
<body>
    <header>
        <h1>Mój Blog</h1>
        <nav>
            <a href="/">Strona główna</a>
            <a href="#nowy-post">Nowy post</a>
        </nav>
    </header>
    
    <main>
        <section id="posts">
            <h2>Posty</h2>
            <div id="posts-container">
                <!-- Posty werden załadowane z API -->
            </div>
        </section>
        
        <section id="nowy-post">
            <h2>Dodaj nowy post</h2>
            <form id="post-form">
                <label for="title">Tytuł:</label>
                <input type="text" id="title" name="title" required>
                
                <label for="author">Autor:</label>
                <input type="text" id="author" name="author" required>
                
                <label for="content">Treść:</label>
                <textarea id="content" name="content" required></textarea>
                
                <button type="submit">Dodaj post</button>
            </form>
        </section>
    </main>
    
    <footer>
        <p>&copy; 2026 Mój Blog</p>
    </footer>
    
    <script src="/js/app.js"></script>
</body>
</html>
```

### 4. public/css/style.css
```css
* {
    margin: 0;
    padding: 0;
    box-sizing: border-box;
}

body {
    font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
    line-height: 1.6;
    color: #333;
    background-color: #f5f5f5;
}

header {
    background: linear-gradient(135deg, #667eea 0%, #764ba2 100%);
    color: white;
    padding: 20px;
    text-align: center;
}

nav {
    margin-top: 10px;
}

nav a {
    color: white;
    text-decoration: none;
    margin: 0 15px;
    font-weight: bold;
}

nav a:hover {
    text-decoration: underline;
}

main {
    max-width: 900px;
    margin: 30px auto;
    padding: 0 20px;
}

section {
    background: white;
    border-radius: 10px;
    padding: 25px;
    margin-bottom: 30px;
    box-shadow: 0 2px 10px rgba(0,0,0,0.1);
}

h2 {
    color: #667eea;
    margin-bottom: 20px;
    border-bottom: 2px solid #667eea;
    padding-bottom: 10px;
}

.post {
    border: 1px solid #eee;
    border-radius: 8px;
    padding: 20px;
    margin-bottom: 15px;
    transition: transform 0.2s;
}

.post:hover {
    transform: translateY(-2px);
    box-shadow: 0 4px 12px rgba(0,0,0,0.1);
}

.post h3 {
    color: #333;
    margin-bottom: 10px;
}

.post .meta {
    color: #888;
    font-size: 0.9em;
    margin-bottom: 10px;
}

form {
    display: flex;
    flex-direction: column;
    gap: 15px;
}

label {
    font-weight: bold;
    color: #555;
}

input, textarea {
    padding: 12px;
    border: 1px solid #ddd;
    border-radius: 6px;
    font-size: 14px;
}

textarea {
    height: 150px;
    resize: vertical;
}

button {
    background: linear-gradient(135deg, #667eea 0%, #764ba2 100%);
    color: white;
    border: none;
    padding: 12px 25px;
    border-radius: 6px;
    cursor: pointer;
    font-size: 16px;
    font-weight: bold;
    transition: transform 0.2s;
}

button:hover {
    transform: translateY(-2px);
}

footer {
    text-align: center;
    padding: 20px;
    color: #888;
}
```

### 5. public/js/app.js
```javascript
// Ładowanie postów
async function loadPosts() {
    try {
        const response = await fetch('/api/posts');
        const data = await response.json();
        
        const container = document.getElementById('posts-container');
        container.innerHTML = '';
        
        data.posts.forEach(post => {
            const postElement = document.createElement('div');
            postElement.className = 'post';
            postElement.innerHTML = `
                <h3>${post[1]}</h3>
                <div class="meta">
                    Autor: ${post[3]} | Data: ${post[4]}
                </div>
                <p>${post[2]}</p>
            `;
            container.appendChild(postElement);
        });
    } catch (error) {
        console.error('Błąd ładowania postów:', error);
    }
}

// Dodawanie posta
document.getElementById('post-form').addEventListener('submit', async (e) => {
    e.preventDefault();
    
    const formData = new FormData(e.target);
    const data = {
        title: formData.get('title'),
        content: formData.get('content'),
        author: formData.get('author')
    };
    
    try {
        const response = await fetch('/api/posts', {
            method: 'POST',
            headers: {
                'Content-Type': 'application/json'
            },
            body: JSON.stringify(data)
        });
        
        if (response.ok) {
            e.target.reset();
            loadPosts();
        }
    } catch (error) {
        console.error('Błąd dodawania posta:', error);
    }
});

// Załadowanie postów po otwarciu strony
document.addEventListener('DOMContentLoaded', loadPosts);
```

## Ćwiczenie
Rozbuduj projekt o:
1. System komentarzy pod postami
2. Możliwość edycji postów
3. Paginację (stronicowanie) listy postów
4. Wyszukiwanie postów

## Kolejne kroki
1. Dodaj obsługę sesji/użytkowników
2. Zaimplementuj autoryzację (logowanie/rejestracja)
3. Dodaj obsługę plików (upload obrazków)
4. Wdróż system powiadomień
