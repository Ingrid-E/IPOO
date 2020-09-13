#include <iostream>
#include <iomanip>
#include "Point.h"
using namespace std;

/**
 * @file main.cpp
 * @author Ingrid Echeverri (ingrid.echeverri@correounivalle.edu.co)
 * @brief Returns coordinates, dimension, and distance of given points created in Points.
 * @version 0.1
 * @date 2020-09-13
 */

int main()
{
    Point coord1(5, 7, 2);
    Point coord2(9, 1, 5);
    Point coord3(8, 6);
    Point coord4(8, 8);
    Point p1(1, 2, 1);
    Point p2(5, 2, 7);

    coord1.getCoords();
    coord2.getCoords();
    coord3.getCoords();
    coord4.getCoords();
    cout << "p1";
    p1.getPoint();
    cout << "p2";
    p2.getPoint();
    cout << setprecision(12);
    cout << p2.getDistance(p1);
}