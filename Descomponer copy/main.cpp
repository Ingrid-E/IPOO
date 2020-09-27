#include "Decompose.h"
#include <iostream>
using namespace std;

/**
 * @file main.cpp
 * @author Ingrid Echeverri (ingrid.echeverri@correounivalle.edu.co)
 * @brief Prints out decomposed numbers. 
 * @version 0.1
 * @date 2020-09-18
 */

int main(){
    //Numbers made in the Decompose class.
    Decompose number;
    int valor;
    cin >> valor;
    number.setNumber(valor);
    number.inFactorNumbers();
}

