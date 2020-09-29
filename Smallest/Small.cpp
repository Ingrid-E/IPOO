#include "Small.h"
#include <iostream>
using namespace std;
Small::Small(){
    size = 10000;
    pivot = 0;
}

Small::~Small(){}

int Small::getPivot(){
    return pivot;
}

int Small::getSize(){
    return size;
}

void Small::setSize(int newSize){
    size = newSize;
}

void Small::append(int newNum){
    numeros[getPivot()] = newNum;
    pivot = getPivot() +1;
}

int Small::find(){
    int missing = smallest() + 1;
    for(int index = 0; index<getSize(); index++){
        if(missing == numeros[index]){
            missing = missing +1;
        }
    } return missing; 
}

int Small::smallest(){
    int smallest = numeros[0];
    for(int index = 0; index<getSize(); index++){
        if(smallest > numeros[index+1] && (index+1) != getSize()){
            smallest = numeros[index+1];
        }
    }
    
    return smallest;
}