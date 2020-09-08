/**
 * Calculates the area of a circle and the volume of a sphere.
 * @file sphere.cpp
 * @author Ingrid Echeverri Montoya Estudiante
 * @version 9/3/2020
 */


#include <iostream>
using namespace std;
#include "Box.h"


/**
 * Prints out the values of the box
 * @param box Object from the Box class
 */

void show(Box box){
  cout << "width: " << box.getWidth()<<endl; 
  cout << "height: " << box.getHeight()<<endl; 
  cout << "lenght: " << box.getLength()<<endl; 

  cout << "volume: " << box.getVolume()<<endl; 
  cout << "area: " << box.getArea()<<endl; 
}

int main(){
  Box aBox;

  aBox.setWidth(23);
  aBox.setHeight(5);
  aBox.setLength(10);

  //int w=aBox.getWidth();
  //int h=aBox.getHeight();
  //int l=aBox.getLength();

  //aBox.setVolume(h*w*l);

  show(aBox);

};