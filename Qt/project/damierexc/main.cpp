#include <iostream>
#include "damierexc.h"

using namespace std;

int main()
{
    DamierExc D(3,5);
    try {
        D.Set(2,-1,8);
    } catch (char* m) {
        cout<<m;
    }
}
