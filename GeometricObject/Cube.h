/**
 * @file Cube.h
 * @author Ingrid Echeverri Montoya (ingrid.echeverri@correounivalle.edu.co)
 * @brief Cube class derived from GeometricObject class
 * Creates a cube object to calculate area or volume.
 * @version 0.1
 * @date 2020-11-15

 * 
 */

#ifndef CUBE_H_
#define CUBE_H_
#include "GeometricObject.h"


class Cube:public GeometricObject {
    private:
    double lenght;

    public:
    /** @brief Construct a new Cube object */
    Cube();
    /**
     * @brief Construct a new Cube object
     * @param operation 
     */
    Cube(char operation);
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
