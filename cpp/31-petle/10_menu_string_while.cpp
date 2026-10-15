#include <iostream>
#include <string>
using namespace std;

int main() {
    // 21. While nieskonczona z break - menu
    while (true) {
        cout << "1 - powitaj, 0 - wyjdz: ";
        int wybor;
        cin >> wybor;

        if (wybor == 0) {
            cout << "Koniec!" << endl;
            break;
        }
        if (wybor == 1) {
            cout << "Czesc!" << endl;
            continue;
        }
        cout << "Zly wybor!" << endl;
    }

    // 22. Petla po stringu (napisie)
    string tekst = "Hello";
    for (int i = 0; i < tekst.length(); i++) {
        cout << tekst[i] << " ";
    }
    cout << endl;

    // 23. Odliczanie while z -- 
    int n = 5;
    while (n > 0) {
        cout << n << "... ";
        n--;
    }
    cout << "BOOM!" << endl;
    return 0;
}
