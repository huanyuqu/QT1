#include "damierstat.h"
#include <iostream>
using namespace std;

DamierStat::DamierStat()
{
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 5; j++){
            mat[i][j]=0;
        }
    }
    //Init(0);
}

void DamierStat::Init(int value){
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 5; j++){
            mat[i][j]=value;
        }
    }
}

void DamierStat::Set(int x, int y, int value){
    mat[x][y]=value;
}

void DamierStat::Print(){
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 5; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}
