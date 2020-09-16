#ifndef WEEK_H_
#define WEEK_H_
#include <string>
using namespace std;

/**
 * @file Week.h
 * @author Ingrid Echeverri (ingrid.echeverri@correounivalle.edu.co)
 * @brief Turns number given to day of the week.
 * @version 0.1
 * @date 2020-09-16
 */

class Week{
    private:
    /** @brief String with the name of the day.*/
    string day;
    /** @brief Number of the day.*/
    int num;
    public:
    /** @brief Construct a new Week object */
    Week();
    /** @brief Destroy the Week object */
    ~Week();
    /**
     * @brief Get the Num value.
     * @return int 
     */
    int getNum();
    /**
     * @brief Set the Num value.
     * @param newNum 
     */
    void setNum(int newNum);
    /**
     * @brief Get the Day value
     * @return string 
     */
    string getDay();
    /**
     * @brief Set the Day value
     * @param newDay 
     */
    void setDay(string newDay);
    /**
     * @brief Returns string with the name of the day, the variable num is asigned to.
     * num = 1 //Lunes
     * num = 2 //Martes
     * num = 3 //Miercoles
     * num = 4 //Jueves
     * num = 5 //Viernes
     * num = 6 //Sabado
     * num = 7 //Domingo
     * @return string 
     */
    string WeekDay();

};

#endif