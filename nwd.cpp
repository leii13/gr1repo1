#include <iostream>
#include<cstdlib>

using namespace std;

void NWD(int a, int b)
{
    while(a!=b)
    {
        if (a>b)
        {
            a-=b;
        }
        else
        {
            b-=a;
        }
    }

    cout<< "NWD: " << a <<endl;
}
