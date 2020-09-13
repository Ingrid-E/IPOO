#include "Complex.h"
#include <iostream>
using namespace std;

int main(){
    Complex num(7,8);
    Complex num2(12,2);

    num.NumAndComplex();  
    num2.NumAndComplex();
    num.sumComplexNum(num2);
    num.restComplexNum(num2);

}