/**
 * @file Animal.h
 * @author Ingrid Echeverri Montoya (ingrid.echeverri@correounivalle.edu.co)
 * @brief Base class Animal that has a derived class named Dog.
 * @version 0.1
 * @date 2020-11-15
 * 
 */

#ifndef ANIMAL_H_
#define ANIMAL_H_
#include <string>
using namespace std;


class Animal
{
    protected:
    string name;
    public:
    /** @brief Construct a new Animal object */
    Animal();
    /**
     * @brief Returns the animal speak
     * @return string 
     */
    virtual string speak();
    /**
     * @brief Get the Name object
     * @return string 
     */
    virtual string getName();

};

#endif