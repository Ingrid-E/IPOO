#ifndef BISIESTOS_H_
#define BISIESTOS_H_

/**
 * @file Bisiestos.h
 * @author Ingrid Echeverri (ingrid.echeverri@correounivalle.edu.co)
 * @brief Calculates the "bisiestos" years in a range of years.
 * @version 0.1
 * @date 2020-09-19
 */

class Bisiestos
{
private:
    /** @brief First year inputted by the user*/
    int year1;
    /** @brief Second year inputted by the user*/
    int year2;

public:
    /** @brief Construct a new Bisiestos object */
    Bisiestos();
    /** @brief Destroy the Bisiestos object */
    ~Bisiestos();
    /**
     * @brief Set the Year1 value.
     * 
     * @param newYear1 
     */
    void setYear1(double newYear1);
    /**
     * @brief Set the Year2 value.
     * 
     * @param newYear2 
     */
    void setYear2(double newYear2);
    /**
     * @brief Prints out "Años bisiestos" in a range of years
     * 
     */
    void aniosBisiestos();

};

#endif