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
    //Set number value in Decompose class to 3, and prints it out decomposed.
    number.setNumber(3);
    number.inFactorNumbers();
    cout<<endl;
     //Set number value in Decompose class to 8, and prints it out decomposed.
    number.setNumber(8);
    number.inFactorNumbers();
    cout<<endl;
     //Set number value in Decompose class to 216, and prints it out decomposed.
    number.setNumber(216);
    number.inFactorNumbers();
    cout<<endl;
}