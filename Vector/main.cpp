#include "IngridVector.h"
#include <iostream>
#include <string>
using namespace std;

/**
 * @file main.h
 * @author Ingrid Echeverri (ingrid.echeverri@correounivalle.edu.co)
 * @brief Creates a IngridVector object and uses the sort method to order a vector like array.
 * @version 0.1
 * @date 2020-09-28
 */

int main(){
    IngridVector vector;
    int newSize;
    cin >> newSize;
    vector.setSize(newSize);
    for(int input = 0; input<vector.getSize(); input++){
        int number;
        cin >> number;
        vector.append(number);
        if(input == (vector.getSize()-1)){
            string newDirection;
            cin >> newDirection;
            vector.sort(newDirection);
        }
        
    }

    for(int index = 0; index<vector.getSize(); index++){
        cout << vector.get(index) << endl; 
    }

}