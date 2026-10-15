# Przykład aplikacji - Kalkulator online

## Cel
Stworzenie prostego kalkulatora online z backendem w C++ i frontendem w HTML/CSS/JS.

## Struktura projektu
```
kalkulator/
├── main.cpp
├── public/
│   ├── index.html
│   ├── css/
│   │   └── style.css
│   └── js/
│       └── calculator.js
└── CMakeLists.txt
```

## 1. main.cpp
```cpp
#include "crow.h"
#include <cmath>
#include <sstream>

int main() {
    crow::SimpleApp app;
    
    // Strona główna
    CROW_ROUTE(app, "/")
    ([](){
        std::ifstream file("public/index.html");
        std::stringstream buffer;
        buffer << file.rdbuf();
        return crow::response(buffer.str());
    });
    
    // API kalkulatora
    CROW_ROUTE(app, "/api/calculate")
    .method("POST")
    ([](const crow::request& req){
        auto body = crow::json::load(req.body);
        if (!body) {
            return crow::response(400, "Invalid JSON");
        }
        
        std::string operation = body["operation"].s();
        double a = body["a"].d();
        double b = body["b"].d();
        double result = 0;
        
        if (operation == "add") {
            result = a + b;
        } else if (operation == "subtract") {
            result = a - b;
        } else if (operation == "multiply") {
            result = a * b;
        } else if (operation == "divide") {
            if (b == 0) {
                return crow::response(400, "Dzielenie przez zero!");
            }
            result = a / b;
        } else if (operation == "power") {
            result = std::pow(a, b);
        } else if (operation == "sqrt") {
            if (a < 0) {
                return crow::response(400, "Liczba musi być nieujemna!");
            }
            result = std::sqrt(a);
        } else if (operation == "percent") {
            result = (a * b) / 100;
        } else {
            return crow::response(400, "Nieznana operacja");
        }
        
        crow::json::wvalue response;
        response["result"] = result;
        response["operation"] = operation;
        response["a"] = a;
        response["b"] = b;
        
        return crow::response(response);
    });
    
    // Serwowanie CSS
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
    
    // Serwowanie JS
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
    
    std::cout << "Kalkulator uruchomiony na http://localhost:8080" << std::endl;
    app.port(8080).multithreaded().run();
}
```

## 2. public/index.html
```html
<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Kalkulator Online</title>
    <link rel="stylesheet" href="/css/style.css">
</head>
<body>
    <div class="calculator">
        <h1>Kalkulator</h1>
        
        <div class="display">
            <input type="text" id="display" readonly>
        </div>
        
        <div class="buttons">
            <button class="btn clear" data-action="clear">C</button>
            <button class="btn operator" data-action="backspace">←</button>
            <button class="btn operator" data-action="percent">%</button>
            <button class="btn operator" data-action="divide">÷</button>
            
            <button class="btn number" data-value="7">7</button>
            <button class="btn number" data-value="8">8</button>
            <button class="btn number" data-value="9">9</button>
            <button class="btn operator" data-action="multiply">×</button>
            
            <button class="btn number" data-value="4">4</button>
            <button class="btn number" data-value="5">5</button>
            <button class="btn number" data-value="6">6</button>
            <button class="btn operator" data-action="subtract">−</button>
            
            <button class="btn number" data-value="1">1</button>
            <button class="btn number" data-value="2">2</button>
            <button class="btn number" data-value="3">3</button>
            <button class="btn operator" data-action="add">+</button>
            
            <button class="btn number" data-value="0">0</button>
            <button class="btn number" data-value=".">.</button>
            <button class="btn equals" data-action="calculate">=</button>
            <button class="btn operator" data-action="power">xʸ</button>
        </div>
        
        <div class="history">
            <h2>Historia</h2>
            <div id="history"></div>
        </div>
    </div>
    
    <script src="/js/calculator.js"></script>
</body>
</html>
```

## 3. public/css/style.css
```css
* {
    margin: 0;
    padding: 0;
    box-sizing: border-box;
}

body {
    min-height: 100vh;
    display: flex;
    justify-content: center;
    align-items: center;
    background: linear-gradient(135deg, #667eea 0%, #764ba2 100%);
    font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
}

.calculator {
    background: white;
    border-radius: 20px;
    padding: 25px;
    box-shadow: 0 10px 40px rgba(0,0,0,0.3);
    width: 320px;
}

h1 {
    text-align: center;
    color: #333;
    margin-bottom: 20px;
}

.display {
    background: #f0f0f0;
    border-radius: 10px;
    padding: 15px;
    margin-bottom: 20px;
}

#display {
    width: 100%;
    background: transparent;
    border: none;
    font-size: 28px;
    text-align: right;
    color: #333;
    outline: none;
}

.buttons {
    display: grid;
    grid-template-columns: repeat(4, 1fr);
    gap: 10px;
    margin-bottom: 20px;
}

.btn {
    padding: 20px;
    font-size: 20px;
    border: none;
    border-radius: 10px;
    cursor: pointer;
    transition: all 0.2s;
}

.btn:hover {
    transform: translateY(-2px);
}

.btn:active {
    transform: translateY(0);
}

.number {
    background: #e0e0e0;
    color: #333;
}

.number:hover {
    background: #d0d0d0;
}

.operator {
    background: #667eea;
    color: white;
}

.operator:hover {
    background: #5a6fd6;
}

.equals {
    background: #4caf50;
    color: white;
}

.equals:hover {
    background: #45a049;
}

.clear {
    background: #f44336;
    color: white;
}

.clear:hover {
    background: #da190b;
}

.history {
    border-top: 1px solid #eee;
    padding-top: 15px;
}

.history h2 {
    font-size: 16px;
    color: #666;
    margin-bottom: 10px;
}

#history {
    max-height: 150px;
    overflow-y: auto;
    font-size: 14px;
    color: #888;
}

.history-item {
    padding: 5px 0;
    border-bottom: 1px solid #f0f0f0;
}
```

## 4. public/js/calculator.js
```javascript
class Calculator {
    constructor() {
        this.display = document.getElementById('display');
        this.history = document.getElementById('history');
        this.currentValue = '';
        this.previousValue = '';
        this.operation = null;
        this.shouldResetDisplay = false;
        
        this.initEventListeners();
    }
    
    initEventListeners() {
        // Przyciski liczbowe
        document.querySelectorAll('.number').forEach(button => {
            button.addEventListener('click', () => {
                this.appendToDisplay(button.dataset.value);
            });
        });
        
        // Przyciski operacji
        document.querySelectorAll('.operator').forEach(button => {
            button.addEventListener('click', () => {
                this.setOperation(button.dataset.action);
            });
        });
        
        // Przycisk obliczania
        document.querySelector('.equals').addEventListener('click', () => {
            this.calculate();
        });
        
        // Przycisk czyszczenia
        document.querySelector('.clear').addEventListener('click', () => {
            this.clear();
        });
        
        // Obsługa klawiatury
        document.addEventListener('keydown', (e) => {
            if (e.key >= '0' && e.key <= '9' || e.key === '.') {
                this.appendToDisplay(e.key);
            } else if (e.key === '+') {
                this.setOperation('add');
            } else if (e.key === '-') {
                this.setOperation('subtract');
            } else if (e.key === '*') {
                this.setOperation('multiply');
            } else if (e.key === '/') {
                e.preventDefault();
                this.setOperation('divide');
            } else if (e.key === 'Enter' || e.key === '=') {
                this.calculate();
            } else if (e.key === 'Escape') {
                this.clear();
            }
        });
    }
    
    appendToDisplay(value) {
        if (this.shouldResetDisplay) {
            this.display.value = '';
            this.shouldResetDisplay = false;
        }
        
        if (value === '.' && this.display.value.includes('.')) {
            return;
        }
        
        this.display.value += value;
    }
    
    setOperation(operation) {
        if (this.display.value === '') return;
        
        this.previousValue = this.display.value;
        this.operation = operation;
        this.shouldResetDisplay = true;
    }
    
    async calculate() {
        if (this.operation === null || this.previousValue === '') return;
        
        const a = parseFloat(this.previousValue);
        const b = parseFloat(this.display.value);
        
        try {
            const response = await fetch('/api/calculate', {
                method: 'POST',
                headers: {
                    'Content-Type': 'application/json'
                },
                body: JSON.stringify({
                    operation: this.operation,
                    a: a,
                    b: b
                })
            });
            
            const data = await response.json();
            
            if (response.ok) {
                this.display.value = data.result;
                this.addToHistory(`${a} ${this.getOperationSymbol(this.operation)} ${b} = ${data.result}`);
            } else {
                this.display.value = 'Błąd';
            }
        } catch (error) {
            this.display.value = 'Błąd połączenia';
        }
        
        this.operation = null;
        this.previousValue = '';
        this.shouldResetDisplay = true;
    }
    
    getOperationSymbol(operation) {
        const symbols = {
            'add': '+',
            'subtract': '-',
            'multiply': '×',
            'divide': '÷',
            'power': '^',
            'sqrt': '√',
            'percent': '%'
        };
        return symbols[operation] || operation;
    }
    
    clear() {
        this.display.value = '';
        this.currentValue = '';
        this.previousValue = '';
        this.operation = null;
        this.shouldResetDisplay = false;
    }
    
    addToHistory(entry) {
        const historyItem = document.createElement('div');
        historyItem.className = 'history-item';
        historyItem.textContent = entry;
        this.history.insertBefore(historyItem, this.history.firstChild);
        
        // Ograniczenie historii do 10 wpisów
        while (this.history.children.length > 10) {
            this.history.removeChild(this.history.lastChild);
        }
    }
}

// Inicjalizacja kalkulatora
document.addEventListener('DOMContentLoaded', () => {
    new Calculator();
});
```

## Kompilacja i uruchomienie

### 1. Zainstaluj zależności
```bash
# Zainstaluj Crow (Windows z MinGW)
git clone https://github.com/CrowCpp/Crow.git
cd Crow
mkdir build && cd build
cmake ..
make
make install
```

### 2. Skompiluj projekt
```bash
g++ main.cpp -o kalkulator -std=c++17 -lcrow -lpthread
```

### 3. Uruchom
```bash
./kalkulator
```

### 4. Otwórz przeglądarkę
Przejdź do `http://localhost:8080`

## Funkcjonalność
- Dodawanie, odejmowanie, mnożenie, dzielenie
- Potęgowanie
- Procent
- Historia obliczeń
- Obsługa klawiatury
- Responsywny design

## Ćwiczenia
1. Dodaj obsługę pierwiastka kwadratowego
2. Dodaj pamięć kalkulatora (MR, MC, M+, M-)
3. Dodaj tryb naukowy z funkcjami trigonometrycznymi
4. Zapisuj historię do pliku/localStorage
