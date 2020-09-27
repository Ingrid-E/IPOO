#include "Pyramid.h"
#include <iostream>
using namespace std;



/**
 * @file main.cpp
 * @author Ingrid Echeverri (ingrid.echeverri@correounivalle.edu.co)
 * @brief Prints out a pyramid of asterisks with the height inputted by the user.
 * @date 2020-09-18
 */

int main(){
   Pyramid piramide;
   int numero;
   cin >> numero;
   piramide.setNumber(numero);
   piramide.buildPyramid(); 
}