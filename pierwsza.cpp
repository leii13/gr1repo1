#include <iostream>

using namespace std;

bool pierwsza (int a){
    bool pierwsza=true;
    for (int i=2; i<a; i++){
        if (a%i==0)
            pierwsza = false;
    }
    return pierwsza;
}
