#include <iostream>
#include "Operation.h"
#include <string>
#include <iomanip>

using namespace std;

/**
* @brief Prints out the add,max,min,avg of an array of Numbers using the Numbers class.
* @date 27-09-2020
* @author Ingrid Echeverri Montoya (ingrid.echeverri@correounivalle.edu.co)
* @file main.cpp
*/

int main (){
cout << fixed << setprecision(1);

int size;
cin >> size;
Operation numeros(size);

for(int inicio = 0; inicio<=size; inicio++){
    int number;
    string operacion;
    if(inicio == size){
        cout<<fixed<<setprecision(1);
        cin >> operacion;
        cout << numeros.resultado(operacion) << endl;
    }else 
    cin >> number;
    numeros.append(number);

};

}

 