/**
 * @file Pyramid.h
 * @author Ingrid Echeverri Montoya (ingrid.echeverri@correounivalle.edu.co)
 * @brief Pyramid class derived from GeometricObject class
 * Creates a pyramid object to calculate area or volume.
 * @version 0.1
 * @date 2020-11-15
 * 
 */

#ifndef PYRAMID_H_
#define PYRAMID_H_
#include "GeometricObject.h"

class Pyramid:public GeometricObject {
    private:
    double lenght;
    double width;
    double height;
    public:
    /** @brief Construct a new Pyramid object*/
    Pyramid();
    /**
     * @brief Construct a new Pyramid object
     * @param operation 
     */
    Pyramid(char operation);
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
