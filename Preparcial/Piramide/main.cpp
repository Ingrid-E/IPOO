#include "Pyramid.h"
#include <iostream>
using namespace std;

int main(){
    double height;
    double base;
    cout << "Introduce height: ";
    cin >> height;
    cout << "Introduce base: ";
    cin >> base;
    Pyramid piramide(base, height);
    cout << "Area: " << piramide.getArea() << endl;
    cout << "Volume: " << piramide.getVolume() << endl;
}