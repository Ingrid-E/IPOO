#include "Operate.h"
#include <iostream>
using namespace std;

int main(){
    //Creating Operate object.
    Operate numeros;
    //Variable A.
    int numberA;
    cin >> numberA;
    numeros.setA(numberA);
    //Variable B
    int numberB;
    cin >> numberB;
    numeros.setB(numberB);
    //Variable C
    int numberC;
    cin >> numberC;
    numeros.setC(numberC);
    //Resolve the product between A and B.
    cout << numeros.resolve();
}