#include <iostream>
using namespace std;

int main() {
    // 9. break - przerywa petle
    for (int i = 0; i < 100; i++) {
        if (i == 6) {
            break; // stop przy 6
        }
        cout << i << " ";
    }
    cout << endl;

    // 10. continue - pomija jeden obrot
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            continue; // pomin 5
        }
        cout << i << " ";
    }
    cout << endl;

    // 11. continue - tylko parzyste
    for (int i = 0; i < 10; i++) {
        if (i % 2 != 0) {
            continue; // pomin nieparzyste
        }
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
