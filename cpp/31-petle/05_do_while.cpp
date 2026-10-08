#include <iostream>
using namespace std;

int main() {
    // 7. Petla do-while - wykona sie ZAWSZE przynajmniej raz
    int i = 0;
    do {
        cout << "i = " << i << endl;
        i++;
    } while (i < 5);

    // 8. Przyklad: nawet jak warunek falszywy od poczatku
    int x = 100;
    do {
        cout << "To sie wydrukuje raz mimo ze x > 10! x = " << x << endl;
    } while (x < 10);

    return 0;
}
