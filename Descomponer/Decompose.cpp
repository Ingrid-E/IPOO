#include "Decompose.h"
#include <iostream>
#include <string>
using namespace std;

Decompose::Decompose()
{
    number = 0; // Initial number value
}

Decompose::~Decompose(){}

int Decompose::getNumber()
{
    return number; // Returns number value
}

void Decompose::setNumber(int num)
{
    number = num; // Sets new value for number
}

int Decompose::inFactorNumbers(){

    /*Checks if number can be divided by prime numbers.
    * If it can, it will print out that specific prime number and divide the number by the prime number.
    * If not, then it will go to the next prime number and so on. 
    */
    do {
        if(number%2==0){
             cout << 2;
            number = number/2;
        }else{
            if(number%3==0){
                cout << 3;
                number = number/3;
            }else{
                if(number%5==0){
                    cout << 5;
                    number = number/5;
                }else{
                    if(number%7==0){
                        cout << 7;
                        number = number/7;
                    }else{
                        if(number%11==0){
                            cout << 11;
                            number = number/11;
                        }
                    }
                }
            }
        }
        if(number >= 2){cout << " * ";}
        
    }while (number>1); 
    
    return 0;
}

string Decompose::probando(){

    for(int i = 2; number> 1; i++){
        while(number%i == 0){
            number = number/i;
            if(number>=2) {
                cout << i << " * ";
            }else {
                cout << i;
            }
        }
    }
    return "";
}
