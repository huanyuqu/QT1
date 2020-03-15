#include <iostream>
#include "damierdyn.h"
using namespace std;

int main(){
    DamierDyn D1(4,5);
    D1.Init(7);
    D1.Set(2, 4, -2);
    DamierDyn D2=D1;
    D2.Set(0,0,1);
    D1.Print();
    D2.Print();
}
