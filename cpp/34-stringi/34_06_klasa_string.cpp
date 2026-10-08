#include <iostream>
#include <string>
using namespace std;

// PRZYKLAD 34.6 - klasa string
// size/length, append, assign, insert, swap, replace, copy, compare
int main() {
    string tekst = "Ala ma kota";

    cout << "Tekst: " << tekst << endl;
    cout << "Dlugosc (size): " << tekst.size() << endl;
    cout << "Dlugosc (length): " << tekst.length() << endl;

    // append - dodanie do stringa kolejnego lancucha
    string t2 = tekst;
    t2.append(" i psa");
    cout << "Po append: " << t2 << endl;

    // + - konkatenacja
    string t3 = tekst + " i ptaka";
    cout << "Po + : " << t3 << endl;

    // assign - podstawienie
    string s;
    s.assign("nowy tekst");
    cout << "Po assign: " << s << endl;

    // insert - wstawienie
    string s2 = "Ala kota";
    s2.insert(4, "ma ");
    cout << "Po insert: " << s2 << endl;

    // replace - podmiana
    string s3 = "Ala ma kota";
    s3.replace(0, 3, "Ola");
    cout << "Po replace: " << s3 << endl;

    // compare - porownanie (0 = rowne)
    cout << "compare Ala/Ala: " << string("Ala").compare("Ala") << endl;
    cout << "compare Ala/Ola: " << string("Ala").compare("Ola") << endl;

    // [] - dostep do pojedynczego znaku
    cout << "Pierwszy znak: " << tekst[0] << endl;
    cout << "Ostatni znak: " << tekst[tekst.size() - 1] << endl;

    return 0;
}
