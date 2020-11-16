/**
 * @file Cylinder.h
 * @author Ingrid Echeverri Montoya (ingrid.echeverri@correounivalle.edu.co)
 * @brief  Cylinder class derived from GeometricObject class
 * Creates a cylinder object to calculate area or volume.
 * @version 0.1
 * @date 2020-11-15
 * 
 */


#ifndef CYLINDER_H_
#define CYLINDER_H_
#include "GeometricObject.h"

class Cylinder:public GeometricObject {
    private:
    double radio;
    double height;

    public:
    /** @brief Construct a new Cylinder object*/
    Cylinder();
    /**
     * @brief Construct a new Cylinder object
     * @param operation 
     */
    Cylinder(char operation);
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
