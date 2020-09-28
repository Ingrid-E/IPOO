#ifndef ARRAY_H_
#define ARRAY_H_
#include <string>
using namespace std;

/**
 * @file Array.h
 * @author Ingrid Echeverri (ingrid.echeverri@correounivalle.edu.co)
 * @brief Creates an array of certain length, and orders it in ascending or descending.
 * @version 0.1
 * @date 2020-09-28
 */

class Array
{
private:
    /** @brief Array of Numbers, default length set to 1000*/
    int numbers[1000];
    /** @brief Size of the array*/
    int size;
    /** @brief The last position of a number in the array */
    int pivot;
    /** @brief Construct a new Array object*/
    Array();

public:
    /**
    * @brief Construct a new Array object
    * @param newSize 
    */
    Array(int newSize);
    /**
     * @brief Appends a new number to the last position of the Array
     * that there is a number. 
     * 
     * @param newNum 
     */
    void append(int newNum);
    /**
     * @brief Get the Pivot object
     * 
     * @return int 
     */
    int getPivot();
    /**
     * @brief Get the Size object
     * 
     * @return int 
     */
    int getSize();
    /**
     * @brief Orders the numbers in the array lenght in:
     * asc = ascending
     * desc = descending 
     * 
     * @param direction 
     */
    void orderNumbers(string direction);


};

#endif