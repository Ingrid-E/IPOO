#include "Pairs.h"
#include <iostream>
using namespace std;

/**
 * @file main.h
 * @author Ingrid Echeverri (ingrid.echeverri@correounivalle.edu.co)
 * @brief Returns the pair number of a range value given by the user.
 * @version 0.1
 * @date 2020-09-11
 */


int main(){
    int rango;
    Pairs pair;
    cout << "Input number: " << endl;
    cin >> rango;
    pair.setRange(rango);

    //cout << "Los numeros pares que existen en el rango son: \n" << pair.getWithFor() << endl; 
    //cout << "Los numeros pares que existen en el rango son: \n" << pair.getWithWhile() << endl; 
    cout << "Los numeros pares que existen en el rango son: \n" << pair.getWithFor() << endl;
    
};