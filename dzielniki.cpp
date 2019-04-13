#include <iostream>
#include<cstdlib>

using namespace std;

void dzielniki(int a, int b)
{

cout << "Dzielniki a: ";
    for(int i=1; i<=a; i++)
    {
        if ( a % i == 0 )
        {
            cout << i<<" ";
        }
    }

    cout << endl << "Dzielniki b: ";
    for(int i=1; i<=b; i++)
    {
        if ( b % i == 0 )
        {
            cout << i<<" ";
        }
    }

}
