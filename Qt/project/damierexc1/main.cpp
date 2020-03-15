#include <iostream>
#include "damiergo.h"
#include <myexception.h>

using namespace std;

int main()
{
//    DamierExc D(3,5,4);
//    try {
//        D.Set(2,-1,3);
//    } catch (const char* m) {
//        cout<<endl;
//        cout<<m<<endl;
//    }
//    try {
//        D.Init(5);
//    } catch (const MyException& e) {
//        cerr<<e.what()<<endl;
//    }
//    cout<<"OK"<<endl;
    DamierGo D;
    D.Initjeu();
    D.Print();
}
