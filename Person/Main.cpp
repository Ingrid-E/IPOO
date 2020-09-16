#include <iostream>
#include "Person.h"

/**
 * @file main.cpp
 * @author Ingrid Echeverri (ingrid.echeverri@correounivalle.edu.co)
 * @brief Prints out a persons age in word by classification. 
 * @version 0.1
 * @date 2020-09-12
 */

int main() {
	Person kid("Steveen", 3);
	kid.classifyByAge();
	Person teen("Hanna", 11);
	teen.classifyByAge();
	Person teen2("Fabian", 14);
	teen2.classifyByAge();
	Person adult("Omaira", 59);
	adult.classifyByAge();
	Person adultMayor("Dario", 78);
	adultMayor.classifyByAge();
}