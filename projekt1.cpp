#include <iostream>

using namespace std;

#include "silnia.cpp"
#include "potega.cpp"

int main() {
    int a, b;
    cout << "Podaj dwie liczby calkowite ";
    cin >> a >> b;
    int wybor;
    do {
        cout << endl;
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "0. Wyjscie" << endl;
        cout << "1. nwd" << endl;
        cout << "2. potega" << endl;
        cout << "3. silnia" << endl;
        cout << "4. pierwsza" << endl;
        cout << "5. dzielniki" << endl;
        cout << "6. suma" << endl;
        cin >> wybor;
        if(wybor == 1) {
            //
        } else if(wybor == 2) {
            a = potega(a, b);

            cout << "Wynik: " << a << endl;
        } else if(wybor == 3) {
            a = silnia(a);

            cout << "Wynik: " << a << endl;
        } else if(wybor == 4) {
            //
        } else if(wybor == 5) {
            //
        } else if(wybor == 6) {
            //
        }
    } while(wybor != 0);
    return 0;
}
