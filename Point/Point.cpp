#include "Point.h"
#include <iostream>
#include <cmath>
using namespace std;

Point::Point(int x, int y, int z)
{
    pointX = x; // Set PointX
    pointY = y; // Set PointY
    pointZ = z; // Set PointZ
}

Point::~Point() {} //Deconstructor

void Point::getCoords()
{
    cout << "coord: ";
    if (pointZ != 0)
    {
        //Prints out coordinates and dimension if it has 3 points.
        cout << "(" << pointX << ", " << pointY << ", " << pointZ << ")" << endl;
        cout << "in dim: 3d" << endl;
    }
    else
    {
        //Prints out coordinates and dimension if it has 2 points.
        cout << "(" << pointX << ", " << pointY << ")" << endl;
        cout << "in dim: 2d" << endl;
    }
}

void Point::getPoint()
{
    //Prints out coordinates
    cout << "(" << pointX << ", " << pointY << ", " << pointZ << ")" << endl;
}

int Point::getPointX()
{
    return pointX; //Returns x
}

int Point::getPointY()
{
    return pointY; // Returns y
}

int Point::getPointZ()
{
    return pointZ; // Returns z
}

double Point::getDistance(Point punto)
{
    //Calculates the distance between 2 coordinates of 3 dimensions.
    double x = pow(pointX - punto.getPointX(), 2);
    double y = pow(pointY - punto.getPointY(), 2);
    double z = pow(pointZ - punto.getPointZ(), 2);
    double distance = sqrt(x + y + z);
    return distance;
}