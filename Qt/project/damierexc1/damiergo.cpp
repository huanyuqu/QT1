#include "damiergo.h"

DamierGo::DamierGo(int x, int y, int v) : DamierExc(x, y, v){}

void DamierGo::Initjeu()
{
    Alloc(19,19);
    for(int i=0; i<L; i++){
        for(int j=0; j<C; j++){
            if (i==0 || j==0){
                T[i][j]=3;
            }
            if (i>0 && j>0 && i%2==j%2){
                T[i][j]=1;
            }
            if (i>0 && j>0 && i%2!=j%2){
                T[i][j]=2;
            }
            if (i==L-1 || j==C-1){
                T[i][j]=3;
            }
        }
    }
}
