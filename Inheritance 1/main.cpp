/**
 * @file main.cpp
 * @author Ingrid Echeverri Montoya (ingrid.echeverri@correounivalle.edu.co)
 * @brief Create Dog class objects.
 * @version 0.1
 * @date 2020-11-15
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include <iostream>
using namespace std;
#include "Dog.h"

int main(){
    Dog *small = new Dog("Danger");
    Dog *medium = new Dog("Lassie");
    Dog *big  =  new Dog("Trusky");
}