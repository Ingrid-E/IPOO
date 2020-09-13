#include "Complex.h"
#include <iostream>
using namespace std;

Complex::Complex(int num, int num2){
    number = num;
    complexNumber = num2;
}

void Complex::NumAndComplex(){
    cout << number << " + " << complexNumber << "i" << endl;
}

int Complex::getNumber(){
    return number;
}

int Complex::getComplexNumber(){
    return complexNumber;
}

void Complex::sumComplexNum(Complex num){
    // (7+8i)  (12+2i)
    //cout << number; <-- 7
    //cout << complexNumber; cout << "i"; <-- 8i
    //cout << num.getNumber(); <-- 12
    //cout << num.getComplexNumber();

    cout << (number+num.getNumber()) << " + " <<(complexNumber+num.getComplexNumber())<< "i" <<endl;
}

void Complex::restComplexNum(Complex num){
    cout << (number-num.getNumber()) << " + ";
    if(complexNumber-num.getComplexNumber()!=0){
        cout << (complexNumber-num.getComplexNumber());
    } cout << "i"<<endl;
}

