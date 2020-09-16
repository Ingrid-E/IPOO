#include "Operate.h"
#include <iostream>
using namespace std;

Operate::Operate(){
    a = 0; //Intial value of a
    b = 0; //Initial value of b
    c = 0; //Initial value of c
}

Operate::~Operate(){}

int Operate::getA(){
    return a; //Returns value of a.
}

void Operate::setA(int newA){
    a = newA; //Sets value of a.
}

int Operate::getB(){
    return b; //Returns value of b.
}

void Operate::setB(int newB){
    b = newB; //Sets value of b.
}

int Operate::getC(){
    return c; //Returns value of c.
}

void Operate::setC(int newC){
    c = newC; //Sets value of c.
}

double Operate::resolve(){
/*
Escriba un programa OO que pida tres valores (a, b y c) por la o de manera individual utilizando cin por consola/terminal (ingreso por teclado).

    a y b seran los operandos,
    c el operador a utilizar(1=suma, 2=resta, 3=multiplicación, 4=división).
*/  
    if(getC()==1) return getA()+getB();
    if(getC()==2) return getA()-getB();
    if(getC()==3) return getA()*getB();
    if(getC()==4) return getA()/getB();
    return 0;
    
}