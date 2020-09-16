#ifndef BIGGER_H
#define BIGGER_H

/**
 * @file Bigger.h
 * @author Ingrid Echeverri (ingrid.echeverri@correounivalle.edu.co)
 * @brief Gives the biggest number between 3 numbers.
 * @version 0.1
 * @date 2020-09-14
 */

class Bigger
{
private:
    /** @brief number 1 of the 3 numbers to compare*/
    int number1;
    /** @brief number 2 of the 3 numbers to compare*/
    int number2;
    /** @brief number 3 of the 3 numbers to compare*/
    int number3;

public:
    /** @brief Construct a new Bigger object */
    Bigger();
    /** @brief Destroy the Bigger object */
    ~Bigger();
    /**
 * @brief Set the 3 numbers to the numbers values.
 * 
 * @param num1 // Number set to number1
 * @param num2 // Number set to number2
 * @param num3 // Number set to number3
 */
    void setNumbers(int num1, int num2, int num3);
    /**
 * @brief Returns the biggest number between 3 numbers.
 * @return int 
 */
    int biggerNumber();
};
#endif