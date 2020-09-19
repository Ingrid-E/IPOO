#include "Frequency.h"
#include <iostream>
using namespace std; 

/**
 * @file main.cpp
 * @author Ingrid Echeverri (ingrid.echeverri@correounivalle.edu.co)
 * @brief Prints out the frequency of the numbers inputted by the user.
 * @version 0.1
 * @date 2020-09-19
 */

int main(){
    Frequency pruebas;
    string numeros = "";
    getline(cin, numeros);
    pruebas.setNumeros(numeros);
    pruebas.numFrequency();
}