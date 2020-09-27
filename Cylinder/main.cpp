#include <iostream>
#include "Cylinder.h"
#include <iomanip>
using namespace std;

/**
 * @file main.cpp
 * @author Ingrid Echeverri (ingrid.echeverri@correounivalle.edu.co)
 * @brief Returns Volume, Lateral Area, Total Area of Cylinder objects.
 * @version 0.1
 * @date 2020-09-12
 */

int main()
{
    cout << setprecision(12);

    Cylinder c1;
    c1.setRadius(8);
    c1.setHeight(15);

    Cylinder c2;
    c2.setRadius(5);
    c2.setHeight(30);

    Cylinder c3;
    c3.setRadius(8);
    c3.setHeight(15);

    Cylinder c4;
    c4.setRadius(5);
    c4.setHeight(30);

    cout << c1.getVolume() << endl;

    cout << c2.getVolume() << endl;

    cout << c3.getAreaLat() << endl;

    

    cout << c4.getAreaLat() << endl;

    cout << c1.getAreaTotal() << endl;

    cout << c2.getAreaTotal() << endl;
}
