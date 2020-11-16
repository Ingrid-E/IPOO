#include "Sphere.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

Sphere::Sphere(char operation){
    if(operation == 'a'){
        cin >> this->radio;
        this->getArea();
    }else if(operation == 'v'){
        cin >> this->radio;
        this->getVolume();
    }else{
        cout << "Letra incorrecta no es 'a' o 'v' " << endl;
    }
}

double Sphere::getArea(){
    area = 4 * pi * pow(this->radio,2);
    cout << area << endl;
    return area;
}

double Sphere::getVolume(){
    volume = (4* pi * pow(this->radio,3))/3;
    cout << setprecision(10) << volume << endl;
    return volume;
}

