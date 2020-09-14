#include "Complex.h"
#include <iostream>
using namespace std;

Complex::Complex(int num, int num2){
    number = num; //Sets normal number
    complexNumber = num2; //Sets complex number 
}

Complex::~Complex(){} 

void Complex::NumAndComplex(){
    //Prints out complex number 
    //Ej: num(1,2) --> 1+2i
    cout << number << " + " << complexNumber << "i" << endl;
}

int Complex::getNumber(){
    return number; //Returns number
}

int Complex::getComplexNumber(){
    return complexNumber; //Returns complex Number
}

void Complex::sumComplexNum(Complex num){
    //Prints out sum between two complex numbers.

    // (7+8i)  (12+2i)
    //cout << number; <-- 7
    //cout << complexNumber; cout << "i"; <-- 8i
    //cout << num.getNumber(); <-- 12
    //cout << num.getComplexNumber();

    cout << (number+num.getNumber()) << " + " <<(complexNumber+num.getComplexNumber())<< "i" <<endl;
}

void Complex::restComplexNum(Complex num){
     //Prints out rest between two complex numbers.
    cout << (number-num.getNumber()) << " + ";
    if(complexNumber-num.getComplexNumber()!=1){
        cout << (complexNumber-num.getComplexNumber());
    } cout << "i"<<endl;
}

