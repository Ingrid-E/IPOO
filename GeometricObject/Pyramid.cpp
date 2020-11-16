#include "Pyramid.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

Pyramid::Pyramid(){
    this->lenght = 0;
    this->height = 0;
    this->width = 0;
}

Pyramid::Pyramid(char operation){
    if(operation == 'a'){
        cin >> this->lenght;
        cin >> this->width;
        cin >> this->height;
        this->getArea();
    }else if(operation == 'v'){
        cin >> this->lenght;
        cin >> this->width;
        cin >> this->height;
        this->getVolume();
    }else{
        cout << "Letra incorrecta no es 'a' o 'v' " << endl;
    }
}

double Pyramid::getArea(){
    double base = this->lenght * this->width;
    area = (base/2)*this->height*4;
    cout << setprecision(10) << area << endl;
    return area;
}

double Pyramid::getVolume(){
    double base = this->lenght * this->width;
    volume = (base*this->height)/3;
    cout << setprecision(10) << volume << endl;
    return volume;

}