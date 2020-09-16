#include "Number.h"
#include <string>
using namespace std;

Number::Number()
{
    num = 0;
}

Number::~Number() {}

int Number::getNum()
{
    return num;
}

void Number::setNum(int number)
{
    num = number;
}

string Number::PositiveNegativeZero()
{
    if (num > 0)
        return "positivo";
    if (num < 0)
        return "negativo";
    if (num == 0)
        return "cero";
    return "no es numero";
}
