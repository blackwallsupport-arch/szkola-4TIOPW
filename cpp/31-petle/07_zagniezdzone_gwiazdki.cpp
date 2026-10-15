#include <iostream>
using namespace std;

int main() {
    // 12. Petla zagniezdzona - trojkat z gwiazdek
    for (int i = 1; i <= 5; i++) {
        for (int j = 0; j < i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "----" << endl;

    // 13. Kwadrat 4x4
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "# ";
        }
        cout << endl;
    }

    cout << "----" << endl;

    // 14. Tabliczka mnozenia 1-5
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cout << i * j << "\t";
        }
        cout << endl;
    }
    return 0;
}
