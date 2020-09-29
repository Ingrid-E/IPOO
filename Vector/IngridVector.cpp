#include "IngridVector.h"
#include <string>
#include <iostream>
using namespace std;

IngridVector::IngridVector(){
    int size = 1000;
    int pivot = 0;
}

IngridVector::~IngridVector(){}

void IngridVector::setSize(int newSize){
    size = newSize;
}

int IngridVector::getSize(){
    return size;
}

int IngridVector::getPivot(){
    return pivot;
}

void IngridVector::append(int newNum){
    vector[getPivot()]= newNum;
    pivot = getPivot() + 1;
}

void IngridVector::sort(string direction)
{
    if (direction == "asc")
    {
        for (int pos = 0; pos < getSize(); pos++)
        {
            for (int index = 0; index < getSize(); index++)
            { 
                if (vector[index] > vector[index + 1] && (index + 1) != getSize())
                {
                    int change = vector[index];
                    vector[index] = vector[index + 1];
                    vector[index + 1] = change;
                }
            }
        }
    }
    if (direction == "desc")
    {
        for (int pos = 0; pos < getSize(); pos++)
        {
            for (int index = 0; index < getSize(); index++)
            {
                if (vector[index] < vector[index + 1] && (index + 1) != getSize())
                {
                    int change = vector[index];
                    vector[index] = vector[index + 1];
                    vector[index + 1] = change;
                }
            }
        }
    }
    
}

void IngridVector::remove(int index){
    for(int pos = index; pos<getSize(); pos++){
        if(pos == index){
            vector[index] = vector[index+1];
        }else {
            vector[pos]=vector[pos+1];
        }
    }

    size = getSize() - 1;
}

void IngridVector::set(int number, int index){
    vector[index]=number;
}

double IngridVector::get(int index){
    return vector[index];
}

