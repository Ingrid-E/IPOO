#include "Decompose.h"
#include <iostream>
using namespace std;

/**
 * @file main.cpp
 * @author Ingrid Echeverri (ingrid.echeverri@correounivalle.edu.co)
 * @brief Prints out decomposed numbers. 
 * @version 0.1
 * @date 2020-09-14
 */

int main(){
    //Numbers made in the Decompose class.
    Decompose number;
    number.setNumber(75); //2 · 2 · 2 · 2 · 5 · 5 
    cout << number.probando(); 
    cout<<endl;
    number.setNumber(270); //2 · 3 · 3 · 3 · 5
    cout << number.probando(); 
    cout<<endl;
    number.setNumber(300); //2 · 2 · 3 · 5 · 5 
    cout << number.probando(); 
    cout<<endl;



}