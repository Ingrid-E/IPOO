#include "Week.h"
#include <iostream>
using namespace std;


/**
 * @file main.cpp
 * @author Ingrid Echeverri (ingrid.echeverri@correounivalle.edu.co)
 * @brief Prints out day of the week, depending on number inputted by the user.
 * @version 0.1
 * @date 2020-09-16
 */

int main(){
    //Create Week obect.
    Week daysOfWeek;
    //num variable
    int numeroDelDia;
    cin >> numeroDelDia;
    //Set number inputted by user.
    daysOfWeek.setNum(numeroDelDia);
    cout << daysOfWeek.WeekDay();
}