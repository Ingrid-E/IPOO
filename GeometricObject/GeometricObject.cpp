#include "GeometricObject.h"
#include <string>
#include <iostream>
#include <cmath>
using namespace std;


GeometricObject::GeometricObject(){
    pi = 3.14159;
    area = 0;
    volume = 0;
}


double GeometricObject::getArea(){
    return this->area;
}

double GeometricObject::getVolume(){
    return this->volume;
}



