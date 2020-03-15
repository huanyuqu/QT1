#ifndef DAMIERGO_H
#define DAMIERGO_H
#include "damierexc.h"

class DamierGo : public DamierExc
{
public:
    DamierGo(int x=1, int y=1, int v=1);
    void Initjeu();
};

#endif // DAMIERGO_H
