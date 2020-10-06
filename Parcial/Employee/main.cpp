#include <iostream>
#include <string>
#include "Employee.h"
using namespace std;

/**
 * @file main.h
 * @author Ingrid Echeverri (ingrid.echeverri@correounivalle.edu.co)
 * @brief Creates an Employee object, and depending on the user inputt of charge
 * a certain task that they can do will pop out in console.
 * @version 0.1
 * @date 5/10/2020
 */

int main() {
    cout << "Name: ";
    string name;
    cin >> name;
    cout << endl;
    cout << "Charge (Boss, Supervisor, Guard, Accountant): ";
    string charge;
    cin >> charge;
    cout << endl;
    Employee boss(name,charge);
    
}

