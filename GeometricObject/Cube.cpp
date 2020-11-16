#include "Cube.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

Cube::Cube(){
    this->lenght = 0;
}

Cube::Cube(char operation){
    if(operation == 'a'){
        cin >> this->lenght;
        this->getArea();
    }else if(operation == 'v'){
        cin >> this->lenght;
        this->getVolume();
    }else{
        cout << "Letra incorrecta no es 'a' o 'v' " << endl;
    }
}

double Cube::getArea(){
    area = 6*pow(this->lenght,2);
    cout << setprecision(10) << area << endl;
    return area;
}

double Cube::getVolume(){
    volume = pow(this->lenght,3);
    cout << setprecision(10) << volume << endl;
    return volume;

}