#ifndef _PYRAMID_H_
#define _PYRAMID_H_

/**
 * @file Pyramid.h
 * @author Ingrid Echeverri (ingrid.echeverri@correounivalle.edu.co)
 * @brief Builds a pyramid of asterisks.
 * @version 0.1
 * @date 2020-09-18
 */


class Pyramid
{
private:
    /** @brief variable inputted by the user to know pyramid height*/
    int altura;

public:
    /** @brief Construct a new Pyramid object*/
    Pyramid();
    /** @brief Destroy the Pyramid object */
    ~Pyramid();
    /**
     * @brief Get the Number value
     * @return int 
     */
    int getNumber();
    /**
     * @brief Set the Number value
     * @param newNumber 
     */
    void setNumber(int newNumber);
    /**
     * @brief Build the pyramid using for method.
     * 
     */
    void buildPyramid();
};

#endif