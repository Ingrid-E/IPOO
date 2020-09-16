#include "Bigger.h"

Bigger::Bigger()
{
    number1 = 0;
    number2 = 0;
    number3 = 0;
}

Bigger::~Bigger() {}

void Bigger::setNumbers(int num1, int num2, int num3)
{
    number1 = num1;
    number2 = num2;
    number3 = num3;
}

int Bigger::biggerNumber()
{
    if (number1 > number2 && number1 > number3)
        return number1;
    if (number2 > number1 && number2 > number3)
        return number2;
    else
        return number3;
}