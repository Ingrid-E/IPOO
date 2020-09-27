#include "Operation.h"
#include <string>
using namespace std;

Operation::Operation(){
    pivot = 0;
    size = 10000000;
}

Operation::Operation(int nSize){
    size = nSize;
    pivot = 0;
    for(int array = 0; array<nSize; array++){
        numeros[array]=0;
    }
}

Operation::~Operation(){}

int Operation::getSize(){
    return size;
}

int Operation::getPivot(){
    return pivot;
}
void Operation::append(int newNum){
    numeros[pivot] = newNum;
    pivot = pivot + 1;
}

double Operation::resultado(string operacion){
int sumar = 0;
int max = 1;
int min = 0;
double resultado = 0;
  if(operacion == "sum"){
   for(int i=1; i<getSize(); i++){
     sumar =  numeros[i];
     resultado = resultado + sumar;
   }return resultado;
 }
  if(operacion == "avg"){
   for(int i=1; i<getSize(); i++){
     sumar =  getSize()+sumar;

   }return resultado = sumar/getSize();
 }

  if(operacion == "max"){
   for(int i=1; i<getSize(); i++){
     if(max<numeros[i]){
       max = numeros[i];
     }

   }return max;
 }

  if(operacion == "min"){
   for(int i=1; i<getSize(); i++){
     if(min>numeros[i]){
       min = numeros[i];
     }

   }return min;
 }
  return resultado;  
}
