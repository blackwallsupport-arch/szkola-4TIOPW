#include <iostream>
using namespace std;

int main() {
    // 3. Petla for z krokiem co 2 (liczby parzyste)
    for (int i = 0; i <= 20; i += 2) {
        cout << i << " ";
    }
    cout << endl;

    // 4. Liczby nieparzyste od 1 do 19
    for (int i = 1; i < 20; i += 2) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
