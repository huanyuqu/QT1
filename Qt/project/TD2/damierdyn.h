#ifndef DAMIERDYN_H
#define DAMIERDYN_H


class DamierDyn
{
public:
    DamierDyn(int row, int column, int value = 0);
    DamierDyn(const DamierDyn &d); //复制函数，引用但是不可更改
    DamierDyn& operator=(const DamierDyn &d);
    ~DamierDyn();

    void Init(int value);
    void Set(int x, int y, int value);
    void Redim(int row, int column);
    void Print();

private:
    int **p;
    int row;
    int column;
    void Free();
};

#endif // DAMIERDYN_H
