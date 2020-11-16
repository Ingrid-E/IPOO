#include <iostream>
#include <string>
using namespace std;
#include "MyVector.h"

MyVector::MyVector()
{
    this->pivot = 0;
}

MyVector::~MyVector() {}

void MyVector::append(int number)
{
    this->vector[this->pivot] = number;
    this->pivot = this->pivot + 1;
}

int MyVector::size()
{
    return this->pivot;
}

int MyVector::get(int position)
{
    return this->vector[position];
}

void MyVector::sort(string order)
{
    if (order == "asc")
    {
        for (int i = 0; i < this->size() * this->size(); i++)
        {

            for (int j = i + 1; j < this->size(); j++)
            {
                int first = this->vector[i];
                int next = this->vector[j];
                if (first > next)
                {
                    this->vector[i] = next;
                    this->vector[j] = first;
                }
            }
        }
    }

    if (order == "desc")
    {
        for (int i = 0; i < this->size() * this->size(); i++)
        {

            for (int j = i + 1; j < this->size(); j++)
            {
                int first = this->vector[i];
                int next = this->vector[j];
                if (first < next)
                {
                    this->vector[j] = first;
                    this->vector[i] = next;
                }
            }
        }
    }
}

void MyVector::set(int number, int position)
{
    this->vector[position] = number;
}

void MyVector::remove(int position)
{
    for (int i = position; i < this->size(); i++)
    {
        this->vector[i] = vector[i + 1];
    }
    this->pivot = this->pivot-1;
}
