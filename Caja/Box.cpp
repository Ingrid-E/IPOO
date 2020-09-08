#include "Box.h"

Box::Box(){
  length = 0;
  width = 0;
  height = 0;
  volume = -1;
  area = -1;
}

Box::~Box(){}

double Box::getLength(){
  return length;
}

double Box::getWidth(){
  return width;
}

double Box::getHeight(){
  return height;
}

void Box::setLength(double l){
  length = l;
}

void Box::setWidth(double w){
  width = w;
}

void Box::setHeight(double h){
  height = h;
}

double Box::getVolume(){
  setVolume(width*length*height);
  return volume;
}
double Box::getArea(){
  setArea(2*((width*length)+(width*height)+(length*height)));
  return area;
}
void Box::setVolume(double v){
  volume = v;
}
void Box::setArea(double a){
  area = a;
};
