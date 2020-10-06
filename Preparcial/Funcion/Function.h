#ifndef FUNCTION_H_
#define FUNCTION_H_
#include <string>
using namespace std;
/*
PREPARCIALUsando su propio TAD string.
–Cree un método que permita verificar 
si dos cadenas son iguales.
–Cree un método que permita restar dos
 cadenas, 
 ●Ej. dada dos cadenas s1=”chair” 
 y s2=”car” el programa OO deberá 
 retornar una cadena s3=hi
*/
class Function{
    private:
    const double PI = 3.141592653589793238463;
    double intervalos;
    string functionToGraph;
    double amplitude;
    double period;
    string type;
    

    public:
    Function();
    Function(string newFunction);
    ~Function();
    void graphic();
    void points();
    double getPeriod();
    double getAmplitude();
    double getIntervalos();
    string getType();
};

#endif