#include "Factorial.h"
#include <iostream>
using namespace std;


Factorial::Factorial(){
    number=0;
    factorial=0;
}

Factorial::~Factorial(){}

int Factorial::getNumber(){
    return number;
}


int Factorial::getWithFor(){
    factorial = 1; //Starts at 1  

    for(int contador = number; contador>1; --contador){
       factorial *= contador;
    } 
    /**
     * initialization = (contador=number)
     * condition = (contador>1)
     * decrement = (--contador)
     * 
     * Ej: number=5
     * (5 ; 5>1; --5) --> factorial = 1*5
     * (4; 4>1; --4) --> factorial = 5*4
     * (3; 3>1; --3) --> factorial = 20*3
     * (2; 2>1; --2) --> factorial = 60*2
     * (1; 1>1; --1) 1>1 Stop condition. 
     * factorial = 120
     */
    return factorial;
};

int Factorial::getWithWhile(){
    factorial=1; //Starts at 1
    int contador =1; //Initial value of contador
    while (contador <= number){
        factorial *= contador;
        contador ++;
    }
    /**
     * (1 <= 5) --> factorial = 1 * 1; 1++
     * (2 <= 5) --> factorial = 1 * 2; 2++
     * (3 <= 5) --> factorial = 2 * 3; 3++
     * (4 <= 5) --> factorial = 6 * 4; 4++
     * (5 <= 5) --> factorial = 24 * 5; 5++
     * (6 <= 5) Stop condition. 
     * factorial = 120
     */
    return factorial;
};

void Factorial::setNumber(double num){
    number=num;
}
