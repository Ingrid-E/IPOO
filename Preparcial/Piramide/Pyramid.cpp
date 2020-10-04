#include "Pyramid.h"
#include <cmath>
using namespace std;

Pyramid::Pyramid(){
    base  = 0.0;
    height = 0.0;
    area = 0.0;
    volume = 0.0;
}

Pyramid::Pyramid(double newBase, double newHeight){
    base  = newBase;
    height = newHeight;
    area = 0.0;
    volume = 0.0;
}

Pyramid::~Pyramid(){}

double Pyramid::getBase(){
    return base;
};

double Pyramid::getHeight(){
    return height;
};

double Pyramid::getArea(){
   area = base * height * (4/2);
   return area;
};

double Pyramid::getVolume(){
    volume = ((sqrt(2))*(pow(base,3)))/6;
    return volume;
};
