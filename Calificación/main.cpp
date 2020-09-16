#include "Grade.h"
#include <iostream>
#include <typeinfo>
using namespace std;

/**
 * @file main.cpp
 * @author Ingrid Echeverri (ingrid.echeverri@correounivalle.edu.co)
 * @brief Returns Volume, Lateral Area, Total Area of Cylinder objects.
 * @version 0.1
 * @date 2020-09-12
 */


int main(){
    //Employee object made from Grade class.
    Grade employee;
    // Sets note to a, and prints out "aceptable"
    employee.setNote("a");
    employee.showNote();
    // Sets note to b, and prints out "bueno"
    employee.setNote("b");
    employee.showNote();
    // Sets note to Ab, and prints out "no se califico"
    employee.setNote("Ab");
    employee.showNote();
    // Sets note to e, and prints out "excelente"
    employee.setNote("e");
    employee.showNote();
}