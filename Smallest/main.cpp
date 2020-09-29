#include "Small.h"
#include <iostream>
using namespace std;

/**
 * @file main.h
 * @author Ingrid Echeverri (ingrid.echeverri@correounivalle.edu.co)
 * @brief Creates a Small object, with certain size. Prints out the smallest
 * missing number using the Small method find();
 * @version 0.1
 * @date 2020-09-28
 */

int main(){
    Small conjunto;
    int size;
    cin >> size;
    size = size - 1;
    conjunto.setSize(size);
    for(int input = 0; input<size; input++){
        int number;
        cin >> number;
        conjunto.append(number);
    }
    
    cout << conjunto.find() << endl;

}