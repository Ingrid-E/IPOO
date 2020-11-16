/**
 * @file Sphere.h
 * @author Ingrid Echeverri Montoya (ingrid.echeverri@correounivalle.edu.co)
 * @brief Sphere class derived from GeometricObject class
 * Creates a sphere object to calculate area or volume.
 * @version 0.1
 * @date 2020-11-15
 * 
 */

#ifndef SPHERE_H_
#define SPHERE_H_
#include "GeometricObject.h"

class Sphere:public GeometricObject {
    private:
    double radio;
    public:
    /** @brief Construct a new Sphere object*/
    Sphere();
    /**
     * @brief Construct a new Sphere object
     * @param operation 
     */
    Sphere(char operation);
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
