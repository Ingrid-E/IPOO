#ifndef FACTORIAL_H_
#define FACTORIAL_H_

/**
 * @file Factorial.h
 * @author Ingrid Echeverri (ingrid.echeverri@correounivalle.edu.co)
 * @brief Calculate the factorial of a number. 
 * @version 0.1
 * @date 2020-09-11
 */

class Factorial
{
private:
    /** @brief Number given by the user */
    int number;
    /** @brief Factorial result using While*/
    int withWhile;
    /** @brief Factorial result using For*/
    int withFor;
    /** @brief Resultado del factorial*/
    int factorial;

public:
    /** @brief Construct a new Factorial object */
    Factorial();
    /** @brief Destroy the Factorial object*/
    ~Factorial();
    /** 
     * @brief Get the Number inputted by the user.
     * @return int 
     */
    int getNumber();
    /**
     * @brief Sets the inputted number by the user to the variable 
     * number
     * @param num 
     */
    void setNumber(double num);
    /**
     * @brief Get the result of the Factorial by using while
     * @return int 
     */
    int getWithWhile();
    /**
     * @brief Get the result of the Factorial by using For
     * @return int 
     */
    int getWithFor();
};

#endif