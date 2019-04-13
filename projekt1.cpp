#include <iostream>
#include "nwd.cpp"
#include "dzielniki.cpp"

using namespace std;


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
                NWD(a,b);
        } else if(wybor == 2) {
            //
        } else if(wybor == 3) {
            //
        } else if(wybor == 4) {
            //
        } else if(wybor == 5) {
            dzielniki(a,b);
        } else if(wybor == 6) {
            //
        }
    } while(wybor != 0);
    return 0;
}
