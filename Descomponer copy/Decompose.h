#ifndef DECOMPOSE_H
#define DECOMPOSE_H
#include <string>
using namespace std;

/**
 * @file Decompose.h
 * @author Ingrid Echeverri (ingrid.echeverri@correounivalle.edu.co)
 * @brief Descompone a number in factors. 
 * @version 0.1
 * @date 2020-09-18
 */

class Decompose
{
private:
    /** @brief Number given to descompone*/
    int number;

public:
    /** @brief Construct a new Decompose object */
    Decompose();
    /** @brief Destroy the Decompose object */
    ~Decompose();
    /**
     * @brief Get the Number value.
     * @return int 
     */
    int getNumber();
    /**
     * @brief Set the Number value.
     * @param num // Number
     */
    void setNumber(int num);
    /**
     * @brief Returns the number deconstructed in prime factors. 
     */
    void inFactorNumbers();
};

#endif