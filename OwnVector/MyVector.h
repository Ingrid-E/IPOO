#ifndef MYVECTOR_H_
#define MYVECTOR_H_
#include <string>
using namespace std;
/**
 * @brief Create a vector-like class as a Dynamic array
 * @author Ingrid Echeverri Montoya
 * @date 11/11/2020
 * @version 1.0
 */
class MyVector
{

private:
    /*Current position of the vector, and size*/
    int pivot;
    /*Dynamic Array to act like a Vector*/
    int *vector = new int[1000];

public:
    /**
     * @brief Construct a new My Vector object
     * 
     */
    MyVector();
    /**
     * @brief Destroy the My Vector object
     * 
     */
    ~MyVector();
    /**
     * @brief Append a number to the last position of the array.
     * @param number New number to append
     */
    void append(int);
    /**
     * @brief Size of the Vector
     * 
     * @return int -> size
     */
    int size();
    /**
     * @brief Get value in a certain position
     * @param position
     * @return int value
     */
    int get(int);
    /**
     * @brief Sorts the array in asc or desc order
     * @param order -> asc/dsc
     * 
     */
    void sort(string);
    /**
     * @brief Sets a new value in a position of the vector
     * @param number <- New Num
     * @param position <- New Position
     */
    void set(int, int);
    /**
     * @brief Removes a number from a position
     * @param position
     */
    void remove(int);
};

#endif