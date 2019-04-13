#include <iostream>
<<<<<<< HEAD
#include "nwd.cpp"
#include "dzielniki.cpp"

using namespace std;

#include "silnia.cpp"
#include "potega.cpp"
=======
#include "pierwsza.cpp"
#include "suma.cpp"

using namespace std;



>>>>>>> origin/marek
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
            a = potega(a, b);

            cout << "Wynik: " << a << endl;
        } else if(wybor == 3) {
            a = silnia(a);

            cout << "Wynik: " << a << endl;
        } else if(wybor == 4) {
            //cout << pierwsza(a);
            if (pierwsza(a)==1){
                cout << "Liczba " << a << " jest pierwsza.";
            }
            else{
                 cout << "Liczba " << a << " nie jest pierwsza.";
            }
        } else if(wybor == 5) {
            dzielniki(a,b);
        } else if(wybor == 6) {
            cout << suma(a,b);
        }
    } while(wybor != 0);
    return 0;
}
