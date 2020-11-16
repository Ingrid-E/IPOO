#include "Cone.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


Cone::Cone(){
    this->radio = 0;
    this->height = 0;
    this->lenght = 0;
}

Cone::Cone(char operation){
    if(operation == 'a'){
        cin >> this->radio;
        cin >> this->lenght;
        this->getArea();
    }else if(operation == 'v'){
        cin >> this->height;
        cin >> this->radio;
        this->getVolume();
    }else{
        cout << "Letra incorrecta no es 'a' o 'v' " << endl;
    }
}

double Cone::getArea(){
    area = (pi*pow(this->radio,2))+(pi*this->radio*this->lenght);
    cout << setprecision(10) << area << endl;
    return area;
}

double Cone::getVolume(){
    volume = (this->height*pi*pow(this->radio,2))/3;
    cout << setprecision(10) << volume << endl;
    return volume;
}