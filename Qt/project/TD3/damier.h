#ifndef DAMIER_H
#define DAMIER_H

#include <iostream>
using namespace std;

template <class T>
class Damier
{
    private:
        int fTaille;
        T** fDamier;
    public:
        Damier(int taille);
        ~Damier();
        Damier<T>& operator= (const Damier<T>& D);
        template <class A> friend Damier<A> operator+ (const Damier<A>& D1, const Damier<A>& D2);
        Damier<T>& operator+=(T n);
        template <class B> friend ostream& operator<< (ostream& O, Damier<B>& D);
        int GetTaille() {return fTaille;}
        void Redimensionnement(int newTaille);
        void set(int x, int y, T value);
    private:
        void AlloueDamier();
        void DeleteDamier();
        void InitDamierZero();
};

#endif // DAMIER_H
