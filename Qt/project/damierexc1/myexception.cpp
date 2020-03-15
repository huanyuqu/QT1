#include "myexception.h"
#include <string>
using namespace std;

MyException::MyException(int v, int b, string f, string fct) throw()
{
    value=v;
    V=b;
    file=f;
    function=fct;

    Answer+="\n";
    Answer+="Borne: "+to_string(V)+"\n";
    Answer+="Valeur rejetée: "+to_string(value)+"\n";
    Answer+="Ficher: "+file+"\n";
    Answer+="Function: "+function+"\n";
}

const char* MyException::what() const throw(){
    return Answer.c_str(); // string --> char*
}
