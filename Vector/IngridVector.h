#ifndef INGRIDVECTOR_H_
#define INGRIDVECTOR_H_
#include <string>
using namespace std;


/**
 * @file IngridVector.h
 * @author Ingrid Echeverri (ingrid.echeverri@correounivalle.edu.co)
 * @brief Creates a vector of x length, contains methods for sort, set, append, remove
 * @version 0.1
 * @date 2020-09-28
 */

class IngridVector{
    private:
    /** @brief array of numbers with default size of 10000*/
    int vector[10000];
    /** @brief size of the array */
    int size;
    /** @brief last place where there was a number inputted in the array */
    int pivot;
    public:
    /** @brief Construct a new Ingrid Vector object */
    IngridVector();
    /** @brief Destroy the Ingrid Vector object*/
    ~IngridVector();
    /**
     * @brief Set the Size object
     * 
     * @param newSize //new size value of the array
     */
    void setSize(int newSize);
    /**
     * @brief Get the Size object
     * 
     * @return int //Returns size value
     */
    int getSize();
    /**
     * @brief Get the Pivot object
     * 
     * @return int // Returns pivot value
     */
    int getPivot();
    /**
     * @brief Appends a number to the last position that there is a number already in the vector.
     * Pivot is used to identify the last position.
     * 
     * @param newNum 
     */
    void append(int newNum);
    /**
     * @brief Sorts the number in ascending order or descending order. 
     * asc = ascending
     * desc = descending
     * 
     * @param direction 
     */
    void sort(string direction);
    /**
     * @brief Removes a number from a certain position of the list and pushes the other numbers forward.
     * and reduces the size of the vector.
     * 
     * @param index // Position to remove the number
     */
    void remove(int index);
    /**
     * @brief Sets a number in desired position in the vector.
     * 
     * @param number // new number to be set in the vector.
     * @param index // Position
     */
    void set(int number, int index);
    /**
     * @brief Returns the number in the position wanted
     * 
     * @param index // position in the array
     * @return double 
     */
    double get(int index);
};

#endif