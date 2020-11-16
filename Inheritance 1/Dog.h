/**
 * @file Dog.h
 * @author Ingrid Echeverri Montoya (ingrid.echeverri@correounivalle.edu.co)
 * @brief Dog class derived from Animal, contains 3 different breeds. 
 * @version 0.1
 * @date 2020-11-15
 */

#ifndef DOG_H_
#define DOG_H_
#include "Animal.h"

class Dog : public Animal{
protected:
    string bark;
    string breed;
public:
    /** @brief Construct a new Dog object */
    Dog();
    /**
     * @brief Construct a new Dog object
     * @param dogName 
     */
    Dog(string dogName);
    /**
     * @brief Animal sound
     * @return string 
     */
    string speak();
    /**
     * @brief Get the Name object
     * @return string 
     */
    string getName();
    /**
     * @brief Get the Breed object
     * @param dogName 
     * @return string 
     */
    string getBreed(string dogName);
};

#endif