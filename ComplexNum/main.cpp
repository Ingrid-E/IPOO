#include "Complex.h"
#include <iostream>
using namespace std;

/**
 * @file main.cpp
 * @author Ingrid Echeverri (ingrid.echeverri@correounivalle.edu.co)
 * @brief Prints out complex number, sum or rest of complex numbers.
 * @version 0.1
 * @date 2020-09-13
 */

int main(){
    //Complex number objects
    Complex num1(7,8);
    Complex num2(12,2);
    Complex num3(5,3);
    Complex num4(6,5);
    Complex num5(2,4);
    Complex num6(5,2);

    //Prints out complex number 
    num1.NumAndComplex(); // 7 + 8i
    num2.NumAndComplex(); //12 + 2i
    num3.NumAndComplex(); //5 + 3i
    //Prints out rest between two complex numbers.
    num4.restComplexNum(num5); // (6+5i)-(2+4i)
    //Prints out sum between two complex numbers.
    num6.sumComplexNum(num3); // (5+2i)+(5+3i)

}