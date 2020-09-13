#ifndef POINT_H
#define POINT_H

/**
 * @file Point.h
 * @author Ingrid Echeverri (ingrid.echeverri@correounivalle.edu.co)
 * @brief Contains methods for returning the coordinates given, if it is in 2d-2d dimension and distance.
 * @version 0.1
 * @date 2020-09-13
 */

class Point
{
private:
    /** @brief point X of given coordinates*/
    int pointX;
    /** @brief point Y of given coordinates*/
    int pointY;
    /** @brief point Z of given coordinates*/
    int pointZ;

public:
    /**
     * @brief Construct a new Point object
     * 
     * @param x // Point x
     * @param y // Point y
     * @param z // Point z 
     */
    Point(int x, int y, int z = 0);
    /**
     * @brief Destroy the Point object
     * 
     */
    ~Point();

    /** @brief Returns the coordinates, and if it is in 
     * 2d-3d dimension.*/
    void getCoords();
    /** @brief Returns the coordinates*/
    void getPoint();
    /**
     * @brief Get the Distance of the Points given.
     * 
     * @param punto // A punto object 
     * @return double 
     */
    double getDistance(Point punto);
    /**
     * @brief Returns the Point X of Point object. 
     * @return int 
     */
    int getPointX();
    /**
     * @brief Returns the Point Y of Point object. 
     * @return int 
     */
    int getPointY();
    /**
     * @brief Returns the Point Z of Point object. 
     * @return int 
     */
    int getPointZ();
};

#endif