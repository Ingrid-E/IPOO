#ifndef CYLINDER_H
#define CYLINDER_H

/**
 * @file Cylinder.h
 * @author Ingrid Echeverri (ingrid.echeverri@correounivalle.edu.co)
 * @brief Calcule Volume, Lateral Area, and Total Area of a Cylinder.
 * @version 0.1
 * @date 2020-09-12
 */

class Cylinder {
    private:
        /** @brief Radius value of the Cylinder*/
        int radius;
        /** @brief Height value of the Cylinder*/
        int height;
        /** @brief Volume result of the Cylinder*/
        int volume;
        /** @brief Lateral Surface Area result of the Cylinder*/
        int areaLat;
        /** @brief Total Area of the Cylinder*/
        int AreaTotal;
        /** @brief PI value*/
        double PI = 3.1415926;

    public:
        /** @brief Construct a new Cylinder object*/
        Cylinder();
        /** @brief Destroy the Cylinder object */
        ~Cylinder();
        /**
         * @brief Set the Radius value
         * @param radiusNum // number set to Radius
         */
        void setRadius(int radiusNum);
        /**
         * @brief Get the volume result of the cylinder.
         * @return double 
         */
        double getVolume();
        /**
         * @brief Get the Lateral Surface Area result of the cylinder.
         * @return double 
         */
        double getAreaLat();
        /**
         * @brief Get the Total area result of the cylinder.
         * @return double 
         */
        double getAreaTotal();
        /**
         * @brief Set the Height value
         * @param heightNum // number set to Height
         */
        void setHeight(int heightNum);
};

#endif