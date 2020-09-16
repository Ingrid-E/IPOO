#ifndef PENSION_H
#define PENSION_H
#include <string>
using namespace std;

/**
 * @file Pension.h
 * @author Ingrid Echeverri (ingrid.echeverri@correounivalle.edu.co)
 * @brief Identify if the person is old enough to retire.
 * @version 0.1
 * @date 2020-09-14
 */

class Pension{
    private:
    /** @brief age of the person */
        int age;
    /** @brief sex of the person 
     * M = Male
     * F = Female
     * Anything else is nothing
    */
        char sex;
    public:
    /**
     * @brief Construct a new Pension object
     * 
     */
        Pension();
        /**
         * @brief Destroy the Pension object
         * 
         */
        ~Pension();
        /**
         * @brief Get the Age value of the person.
         * 
         * @return int 
         */
        int getAge();
        /**
         * @brief Set the Age value.
         * 
         * @param num // set to age.
         */
        void setAge(int num);
        /**
         * @brief Get the Sex gender
         * 
         * @return char 
         */
        char getSex();
        /**
         * @brief Set the Sex value
         * 
         * @param letter // set to sex
         */
        void setSex(char letter);
        /**
         * @brief Returns True or False if the person is old enough for pension.
         * 
         * @return string 
         */
        string canPesion();
};

#endif