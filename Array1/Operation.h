#ifndef OPERATION_H_
#define OPERATION_H_
#include <string>
using namespace std;


/**
 * @file Operation.h
 * @author Ingrid Echeverri (ingrid.echeverri@correounivalle.edu.co)
 * @brief Creates an array of numbers, that can calculate the sum, average, max, min of that array. 
 * @version 0.1
 * @date 2020-09-19
 */

class Operation{
    private:
    /** @brief Base array, default size set to 1000 */
    int numeros[1000];
    /** @brief index number of the last position of a value in the array */
    int pivot;
    /** @brief size value of the array */
    int size;
    /** @brief Default constructor of Operation object */
    Operation();
    public:
    /**
     * @brief Construct a new Operation object.
     * 
     * @param nSize // Sets size of the array.
     */
    Operation(int nSize);
    /** @brief Default deconstructor of Operation object */
    ~Operation();
    /**
     * @brief Get the Size object
     * 
     * @return int 
     */
    int getSize();
    /**
     * @brief Get the Pivot object
     * 
     * @return int 
     */
    int getPivot();
    /**
     * @brief Appends a number to the last position where a number is set in the array Numbers
     * 
     * @param newNum //New number to add to the array
     */
    void append(int newNum);
    /**
     * @brief Returns the result of sum,avg,max,min of an array of numbers given by the user.
     * 
     * @param operacion // String that identifys the operation to be done with the numbers in the array.
     * 
     * @return double 
     */
    double resultado(string operacion);

};

#endif
