#include "Bisiestos.h"
#include <iostream>
using namespace std;

Bisiestos::Bisiestos(){
    year1 = 0;
    year2 = 0;
}

Bisiestos::~Bisiestos(){}

void Bisiestos::setYear1(double newYear1){
    year1 = newYear1;
}

void Bisiestos::setYear2(double newYear2){
    year2 = newYear2;
}

void Bisiestos::aniosBisiestos(){
    cout << "Años bisiestos entre dichos años: ";
    for(year1; year1 < year2; ++year1){
        if(year1%4==0 && year1%100 != 0 || year1%400 == 0){
            cout << year1 << " ";
        }
    }
}
