#ifndef MYEXCEPTION_H
#define MYEXCEPTION_H

#include <exception>
#include <string>
using namespace std;

class MyException : public exception
{
public:
    MyException(int value, int V, string file, string function) throw();
    const char* what() const throw(); // cette méthode ne peut pas changer les attributs de la classe
private:
    int value;
    int V;
    string file;
    string function;
    string Answer;
};


#endif // MYEXCEPTION_H
