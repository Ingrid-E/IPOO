#include "Function.h"
#include <cmath>
#include <iostream>
#include <string>
using namespace std;

const double PI = 3.141592653589793238463;

int main(){
    cout << "f(x) = "; //0.5 * Sen(3x);
    string funcion;
    cin >> funcion;
    Function prueba(funcion);
    prueba.points();
    

    


}