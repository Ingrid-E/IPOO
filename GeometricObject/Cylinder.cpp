#include "Cylinder.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

Cylinder::Cylinder(){
    this->radio = 0;
    this->height = 0;
}

Cylinder::Cylinder(char operation){
    if(operation == 'a'){
        cin >> this->radio;
        cin >> this->height;
        this->getArea();
    }else if(operation == 'v'){
        cin >> this->radio;
        cin >> this->height;
        this->getVolume();
    }else{
        cout << "Letra incorrecta no es 'a' o 'v' " << endl;
    }
}

double Cylinder::getArea(){
    area = (2*pi*pow(this->radio,2))+(2*pi*this->radio*this->height);
    cout << setprecision(10) << area << endl;
    return area;
}

double Cylinder::getVolume(){
    volume = pow(this->radio,2) * pi * this->height;
    cout << setprecision(10) << volume << endl;
    return volume;

}