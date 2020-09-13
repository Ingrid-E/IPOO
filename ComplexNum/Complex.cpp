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

int Complex::sumComplexNum(Complex num){
    num.NumAndComplex();
    cout << number;
    return 1;
}
