#include <iostream>
using namespace std;

#include "Factorial.h"

/**
 * @file Factorial.h
 * @author Ingrid Echeverri (ingrid.echeverri@correounivalle.edu.co)
 * @brief Calculate the factorial of a number, using While and For methods.
 * @version 0.1
 * @date 2020-09-11
 */

int main(){
    Factorial fb;
    int value;
    cout << "Esta es la implementancion de factorial. Ingrese un numero" << endl;
    cin >> value;
    fb.setNumber(value);

    cout<<"Resultado con while: "<< fb.getWithWhile() << endl;
    cout<<"Resultado con for: " <<fb.getWithFor() << endl;
    
}