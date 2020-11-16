/**
 * @file main.cpp
 * @author Ingrid Echeverri Montoya (ingrid.echeverri@correounivalle.edu.co)
 * @brief Include the GeometricObject class to call different objects like cube, sphere, pyramid, cylinder, cone.
 * @version 0.1
 * @date 2020-11-15
 */

#include <iostream>
#include <string>
using namespace std;
#include "GeometricObject.h"

int main()
{
    char object;
    char operation;
    cin >> object;
    cin >> operation;

    switch (object)
    {
    case 'c':
        {Cube *c = new Cube(operation);
        break;}
    case 's':
        {Sphere *s = new Sphere(operation);
        break;}
    case 'p':
        {Pyramid *p = new Pyramid(operation);
        break;}
    case 'y':
        {Cylinder *y = new Cylinder(operation);
        break;}
    case 'n':
        {Cone *n = new Cone(operation);
        break;}
    }

}
