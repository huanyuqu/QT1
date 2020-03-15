#include "damierdyn.h"
#include <iostream>
using namespace std;

DamierDyn::DamierDyn(int r, int c, int v) //不重复给出默认值
{
    p = nullptr;
    Redim(r,c);
    Init(v);
}

DamierDyn::~DamierDyn(){
    Free();
}

DamierDyn::DamierDyn(const DamierDyn &d){
    p = nullptr;
    Redim(d.row, d.column);
    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            p[i][j]=d.p[i][j];
        }
    }
}

DamierDyn& DamierDyn::operator=(const DamierDyn &d){
    if (this != &d){
        Redim(d.row, d.column);
        for (int i = 0; i < row; i++){
            for (int j = 0; j < column; j++){
                p[i][j]=d.p[i][j];
            }
        }
        return *this;
    }
}

void DamierDyn::Free(){
    for (int i=0; i < row; i++){
        delete []p[i];
    }
    delete []p;
    p = nullptr;
}

void DamierDyn::Redim(int r, int c){
    row = r;
    column = c;
    if (p != nullptr){
        Free();
    }
    p = new int *[row];
    for (int i = 0; i < row; i++){
        p[i] = new int [column];
    }

    Init(0);
}

void DamierDyn::Init(int value){
    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            p[i][j]=value;
        }
    }
}
void DamierDyn::Set(int x, int y, int value){
    p[x][y]=value;
}
void DamierDyn::Print(){
    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
}
