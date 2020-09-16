#ifndef NUMBER_H
#define NUMBER_H
#include <string>
using namespace std;

/**
 * @file Number.h
 * @author Ingrid Echeverri (ingrid.echeverri@correounivalle.edu.co)
 * @brief Identify the number if it is positive, negative or zero.
 * @version 0.1
 * @date 2020-09-14
 */

class Number
{
private:
    /** @brief number to identify */
    int num;

public:
    /** @brief Construct a new Number object*/
    Number();
    /** @brief Destroy the Number object */
    ~Number();
    /**
     * @brief Get the Num value.
     * @return int 
     */
    int getNum();
    /**
     * @brief Set the number value to the num variable.
     * @param num 
     */
    void setNum(int num);
    /**
     * @brief Returns the string positive, negative, zero depending on the number
     * @return string 
     */
    string PositiveNegativeZero();
};

#endif