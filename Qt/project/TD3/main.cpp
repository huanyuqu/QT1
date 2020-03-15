#include <iostream>
#include "damier.h"

using namespace std;

int main()
{
    Damier<float> D1(4);
    D1.set(1,1,2.2);
    Damier<float> D2(6);
    float n=3.3;
    D2+=n;
    Damier<float> D3(6);
    D3=D1+D2;
    cout<<D3;
}

