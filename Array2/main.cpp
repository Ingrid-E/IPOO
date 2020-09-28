#include "Array.h"
#include <iostream>
#include <string>
using namespace std;

/**
 * @file main.h
 * @author Ingrid Echeverri (ingrid.echeverri@correounivalle.edu.co)
 * @brief Receives a set of numbers, and if inputted asc or desc it will sort
 * the order of the numbers. The first number is the lenght of the array of numbers.
 * @version 0.1
 * @date 2020-09-28
 */

int main(){
    int size;
    cin >> size;
    Array arreglo(size);

    for(int input = 0; input<size; input++){
        int number;
        cin >> number;
        arreglo.append(number);
        if(input == (size-1)){
            string direcion;
            cin >> direcion;
            arreglo.orderNumbers(direcion);
        }
    }
}