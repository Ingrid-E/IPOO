#ifndef SMALL_H_
#define SMALL_H_


/**
 * @file Small.h
 * @author Ingrid Echeverri (ingrid.echeverri@correounivalle.edu.co)
 * @brief Sets an array with x length, and finds the smallest missing number in that array.
 * @version 0.1
 * @date 2020-09-28
 */

class Small{
    private:
    /** @brief number array with default length of 10000 */
    int numeros[10000];
    /** @brief size of the array of numbers */
    int size;
    /** @brief position where the last number was added, default position
     * set to 0 */
    int pivot;
    public:
    /** @brief Construct a new Small object*/
    Small();
    /** @brief Destroy the Small object */
    ~Small();
    /**
     * @brief Finds the smallest number missing in the array
     * 
     * @return int 
     */
    int find();
    /**
     * @brief Appends a number to the array in the last position set by pivot
     * 
     * @param newNum // New number to input in the array 
     */
    void append(int newNum);
    /**
     * @brief Get the Pivot object
     * 
     * @return int // Last position where a number was set.
     */
    int getPivot();
    /**
     * @brief Get the Size object
     * 
     * @return int // Size of the Array
     */
    int getSize();
    /**
     * @brief Set the Size object
     * 
     * @param newSize 
     */
    void setSize(int newSize);
    /**
     * @brief Find the smallest number in the array.
     * 
     * @return int // Returns the smallest.
     */
    int smallest();
};


#endif