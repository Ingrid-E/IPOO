/**
 * @description: LightBulb object creation, to identify if it's turned on or off.
 * @file main.cpp
 * @author Ingrid Echeverri Montoya (ingrid.echeverri@correounivalle.edu.co)
 * @date 2020-09-07
 * @version 0.1
 */

#include <iostream>
#include "LightBulb.h"
using namespace std;


int main (){
    /**
     * @brief Created an object from LightBulb class
     */
    LightBulb bombillo;
    /**
     * @brief Console out object current state. 
     */
    cout << "El bombillo esta " << bombillo.getState() << endl;
    /**
     * @brief Changing the object state to 1 = Turned on.
     */
    bombillo.turnOn();
    /**
     * @brief Console out object current state. 
     */
    cout << "El bombillo esta " << bombillo.getState() << endl;

}
