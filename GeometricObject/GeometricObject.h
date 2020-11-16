/**
 * @file GeometricObject.h
 * @author Ingrid Echeverri Montoya (ingrid.echeverri@correounivalle.edu.co)
 * @brief Geometric object class, that contains different types of objects like cone, cube, cylinder etc...
 * Use to find the volume,area of a geometric object.
 * @version 0.1
 * @date 2020-11-15
 * 
 */


#ifndef GEOMETRICOBJECT_H_
#define GEOMETRICOBJECT_H_

class GeometricObject{
    protected:
        double pi;
        double area;
        double volume;
    public:
        /** @brief Construct a new Geometric Object object*/
        GeometricObject();
        /**
         * @brief Get the Area object
         * @return double 
         */
        virtual double getArea();
        /**
         * @brief Get the Volume object
         * @return double 
         */
        virtual double getVolume();
};

#include "Cube.h"
#include "Sphere.h"
#include "Pyramid.h"
#include "Cylinder.h"
#include "Cone.h"


#endif