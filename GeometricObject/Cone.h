/**
 * @file Cone.h
 * @author Ingrid Echeverri Montoya (ingrid.echeverri@correounivalle.edu.co)
 * @brief Cube class derived from GeometricObject class
 * Creates a cube object to calculate area or volume.
 * @version 0.1
 * @date 2020-11-15
*/ 


#ifndef CONE_H_
#define CONE_H_
#include "GeometricObject.h"

class Cone:public GeometricObject {
    private:
    double height;
    double radio;
    double lenght;
    public:
    /** @brief Construct a new Cone object*/
    Cone();
    /**
     * @brief Construct a new Cone object
     * @param operation 
     */
    Cone(char operation);
    /**
     * @brief Get the Area object
     * @return double 
     */
    double getArea();
    /**
     * @brief Get the Volume object
     * @return double 
     */
    double getVolume();
};


#endif
