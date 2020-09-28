#include "Array.h"
#include <string>
#include <iostream>
using namespace std;

Array::Array()
{
    size = 1000;
    pivot = 0;
}

Array::Array(int newSize)
{
    size = newSize;
    pivot = 0;
}

int Array::getPivot()
{
    return pivot;
}

int Array::getSize()
{
    return size;
}

void Array::append(int newNum)
{
    numbers[getPivot()] = newNum;
    pivot = getPivot() + 1;
}

void Array::orderNumbers(string direction)
{
    if (direction == "asc")
    {
        for (int pos = 0; pos < getSize(); pos++)
        {
            for (int index = 0; index < getSize(); index++)
            {
                if (numbers[index] > numbers[index + 1] && (index + 1) != getSize())
                {
                    int change = numbers[index];
                    numbers[index] = numbers[index + 1];
                    numbers[index + 1] = change;
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
                if (numbers[index] < numbers[index + 1] && (index + 1) != getSize())
                {
                    int change = numbers[index];
                    numbers[index] = numbers[index + 1];
                    numbers[index + 1] = change;
                }
            }
        }
    }

    for (int i = 0; i < getSize(); i++)
    {
        cout << numbers[i] << endl;
    }
}
