#include "Pyramid.h"
#include <iostream>
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

void Pyramid::buildPyramid(){

    for(int i = altura-1; i != -1; --i){
        for(int j = 1; j <= i; ++j){
            cout << " ";
        }
    for(int a = altura-i; a<= altura; ++a){
        for(int b = altura-i; b <= a-1; ++b){
            cout << "**";
        }
    }
        cout << "\n";
    }
}
/*
    8; 8<= 15; ++8
        8;8<=8; ++8
            cout <<"**"
        9
    
*/
