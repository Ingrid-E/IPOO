#include "Pyramid.h"
#include <iostream>
#include <string>
using namespace std;

Pyramid::Pyramid(){
    altura = 0;
}

Pyramid::~Pyramid(){}

int Pyramid::getNumber(){
    return altura;
}

void Pyramid::setNumber(int newNumber){
    altura = newNumber;
}

/*
Ejemplo cuando altura es 4.
for(1;1<=4;1++){
    for(3;3>=1;3--){
        cout << " ";
        for(2;2>=1;2--){
            cout << " ";
            for(1;1>=1;1--){
                cout << " ";
                for(0;0>=1; ERROR)
            }
        }
    } Salen 3 espacios.
    for(1;1<=1;1++){
        cout << "**"
        for(0;0<=1; ERROR)
    }Sale solo **
    1++ --> 2
}
*/

void Pyramid::buildPyramid(){
string asterisco = "**";
    for(int fila = 1; fila <= altura; fila++){
        for(int espacio = altura-1; espacio>=fila; espacio--){
            cout << " ";
        }
        for(int columna = 1; columna<=fila; columna++){
            cout << "**";
        }
        for(int espacio = altura-1; espacio>=fila; espacio--){
            cout << " ";
        }
        cout << endl;
    }
}
