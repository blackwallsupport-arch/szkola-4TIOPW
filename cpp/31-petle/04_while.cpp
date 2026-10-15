#include <iostream>
using namespace std;

int main() {
    // 5. Petla while - liczy do 5
    int i = 0;
    while (i < 5) {
        cout << "i = " << i << endl;
        i++; // bez tego bylaby nieskonczona!
    }

    // 6. While - suma liczb od 1 do 100
    int suma = 0;
    int n = 1;
    while (n <= 100) {
        suma += n;
        n++;
    }
    cout << "Suma 1-100 = " << suma << endl;
    return 0;
}
