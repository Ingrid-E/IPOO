#include "Pairs.h"
#include <iostream>
using namespace std;

Pairs::Pairs(){
    range:0;
}

Pairs::~Pairs(){}

void Pairs::setRange(double num){
    range = num;
}

int Pairs::getWithFor(){
    int i = 1;
    for(i; i <= range; ++i){
        if(i%2==0){
            cout << i <<", ";
        }
    }
    return 0;
}

int Pairs::getWithWhile(){
    int i = 1;
    while(i<= range){
        if(i%2==0){
            cout << i <<", ";
            i++;
        }
        i++;
    }
    return 0;
}

int Pairs::getwithDoWhile(){
    int i =1;
    do {
        if(i%2==0){
             cout << i <<", ";
             i++; 
        }
        i++;
    }while (i<=range);
    return 0;
}