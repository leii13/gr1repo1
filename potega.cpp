#include<iostream>
using namespace std;

int potega(int n, int pow)
{
    int wynik = 1;
while (pow--) wynik *= n;

return wynik;
}
