#include <iostream>
using namespace std;
int main()
{
    int n, *t;

    cout << "Donner la dimension du tableau: ";
    cin >> n;
    t = new int[n]; // t指向动态数组的开头
    for(int i=0; i<n; i++)
    {
        cout << "Donner la valeur de t["<< i << "]: ";
        cin >> t[i];
    }
    cout << "Valeurs du tableau: " << endl;
    for (int i=0; i<n; i++)
    {
        cout << "t[" << i << "] = " << t[i] << endl;
    }

    int *p1;
    for (int i=0; i<n; i++)
    {
        for (p1=t; p1<t+n-1; p1++)
        {
            if (*p1>*(p1+1))
            {
                int temp=*p1;
                *p1=*(p1+1);
                *(p1+1)=temp;
            }
        }
    }

    cout << "Nouvelles valeurs du tableau:" << endl;
    for(int i=0; i<n; i++)
    {
        cout << "t[" << i << "] = " << t[i] << endl;
    }
}
