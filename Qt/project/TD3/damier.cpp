#include "damier.h"
#include <iostream>
using namespace std;

template<class T>
Damier<T>::Damier(int taille)
{
    if (taille > 1)
        fTaille = taille;
    else
        fTaille = 4;

    AlloueDamier();
    InitDamierZero();
}

template<class T>
Damier<T>::~Damier()
{
    DeleteDamier();
}

template<class T>
void Damier<T>::DeleteDamier()
{
    for (int i = 0; i < fTaille; i++)
        delete [] fDamier[i];
    delete [] fDamier;
}

template<class T>
Damier<T>& Damier<T>::operator=(const Damier<T>& D)
{
    if (this != &D)
    {
        DeleteDamier();
        fTaille = D.fTaille;
        AlloueDamier();
        for (int i = 0; i < fTaille; i++)
        {
            for (int j = 0; j < fTaille; j++)
            {
                fDamier[i][j]=D.fDamier[i][j];
            }
        }
    }
    return *this;
}

template<class A>
Damier<A> operator+(const Damier<A>& D1, const Damier<A>& D2)
{
    if (D1.fTaille==D2.fTaille)
    {
        int Taille=D1.fTaille;
        Damier<A> D(Taille);
        for (int i = 0; i < Taille; i++)
        {
            for (int j = 0; j < Taille; j++)
            {
                D.fDamier[i][j]=D1.fDamier[i][j]+D2.fDamier[i][j];
            }
        }
        return D;
    }
    else
    {
        int Taille=0;
        if (D1.fTaille<D2.fTaille)
        {
            Taille=D1.fTaille;
        }
        else
        {
            Taille=D2.fTaille;
        }
        Damier<A> D(Taille);
        for (int i = 0; i < Taille; i++)
        {
            for (int j = 0; j < Taille; j++)
            {
                D.fDamier[i][j]=D1.fDamier[i][j]+D2.fDamier[i][j];
            }
        }
        return D;
    }
}

template<class T>
Damier<T>& Damier<T>::operator+=(T n)
{
    for (int i = 0; i < fTaille; i++)
    {
        for (int j = 0; j < fTaille; j++)
        {
            fDamier[i][j]+=n;
        }
    }
    return *this;
}

template<class B>
ostream& operator<< (ostream& O, Damier<B>& D)
{
    for (int i=0; i<D.fTaille; i++)
    {
        for (int j=0; j<D.fTaille; j++)
        {
            O<<D.fDamier[i][j]<<" ";
        }
        O<<endl;
    }
    O<<endl;
    return O;
}

template<class T>
void Damier<T>::AlloueDamier()
{
    fDamier = new T* [fTaille];
    for (int i = 0; i < fTaille; i++)
        fDamier[i] = new T[fTaille];
}

template<class T>
void Damier<T>::InitDamierZero()
{
    for (int i = 0; i < fTaille; i++)
        for (int j = 0; j < fTaille; j++)
        fDamier[i][j] = 0;
}

template<class T>
void Damier<T>::Redimensionnement(int newTaille)
{
    DeleteDamier();

    if (newTaille > 1)
        fTaille = newTaille;
    else
        fTaille = 4;

    AlloueDamier();
    InitDamierZero();
}

template<class T>
void Damier<T>::set(int x, int y, T value)
{
    fDamier[x][y]=value;
}

template class Damier<float>;
template class Damier<int>;
template class Damier<char>;
template class Damier<bool>;

template Damier<float> operator+(const Damier<float>& D1, const Damier<float>& D2);
template Damier<int> operator+(const Damier<int>& D1, const Damier<int>& D2);
template Damier<char> operator+(const Damier<char>& D1, const Damier<char>& D2);
template Damier<bool> operator+(const Damier<bool>& D1, const Damier<bool>& D2);

template ostream& operator<< (ostream& O, Damier<float>& D);
template ostream& operator<< (ostream& O, Damier<int>& D);
template ostream& operator<< (ostream& O, Damier<char>& D);
template ostream& operator<< (ostream& O, Damier<bool>& D);

