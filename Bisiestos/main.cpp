#include "Bisiestos.h"
#include <iostream>
using namespace std;

/**
 * @file main.h
 * @author Ingrid Echeverri (ingrid.echeverri@correounivalle.edu.co)
 * @brief Prints out "Bisiestos años" in a range of years.
 * @version 0.1
 * @date 2020-09-19
 */

int main(){
    //No mostrar el final
    Bisiestos years;
    int range1;
    cin >> range1;
    years.setYear1(range1);
    int range2;
    cin >> range2;
    years.setYear2(range2);
    years.aniosBisiestos();
};