#define _USE_MATH_DEFINES
#include "Cylinder.h"
#include <cmath>

Cylinder::Cylinder(){
    radius = 0; //Initial value of radius
    height = 0; //Initial value of height
}

Cylinder::~Cylinder(){}


void Cylinder::setRadius(int radiusNum){
    radius = radiusNum; //Set the Radius value
}

void Cylinder::setHeight(int heightNum){
    height = heightNum; //Set the Height value
}

double Cylinder::getVolume(){ 

return PI * pow(radius, 2) * height; //Formula to get Cylinder volume

}

double Cylinder::getAreaLat(){
    return 2*(PI*radius*height);  //Formula to get the Lareral Sufrace Area of a Cylinder
}

double Cylinder::getAreaTotal(){
   return 2*(PI*radius*(height+radius)); //Formula to get Total Area of a Cylinder
}