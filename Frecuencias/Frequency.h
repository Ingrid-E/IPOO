#ifndef FREQUENCY_H_
#define FREQUENCY_H_
#include <string>
using namespace std;

/**
 * @file Frequency.h
 * @author Ingrid Echeverri (ingrid.echeverri@correounivalle.edu.co)
 * @brief Calculate the frequency in which a number repeats on a string.
 * @version 0.1
 * @date 2020-09-19
 */

class Frequency
{
private:
    /** @brief string of numbers up to 10.*/
    string numeros;

public:
    /** @brief Construct a new Frequency object*/
    Frequency();
    /** @brief Destroy the Frequency object*/
    ~Frequency();
    /**
    * @brief Set the Numeros new value.
    * 
    * @param newNumeros 
    */
    void setNumeros(string newNumeros);
    /**
    * @brief Returns the frequency of each number in the string of numeros.
    * 
    */
    void numFrequency();
};

#endif