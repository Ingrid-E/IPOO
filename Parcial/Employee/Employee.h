#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
#include <string>
using namespace std;

/**
 * @file Employee.h
 * @author Ingrid Echeverri (ingrid.echeverri@correounivalle.edu.co)
 * @brief Creates an Employee class, and allows them to do a certain task depending
 * on their charge.
 * @version 0.1
 * @date 5/10/2020
 */


class Employee
{
private:
    /** @brief atributes */
    string name;
    string charge;
    double salary;
    string location;

public:
    /**
     * @brief Construct a new Employee object
     * 
     */
    Employee();
    /**
     * @brief Construct a new Employee object
     * 
     * @param nName //Name of the Employee
     * @param nCharge //Charge (Boss, Supervisor, Guard, Accountant)
     */
    Employee(string nName, string nCharge);
    /**
     * @brief Destroy the Employee object
     * 
     */
    ~Employee();
    /**
     * @brief Sets the salary for the employee that is picked, 
     * only the boss can set the salary.
     * 
     */
    void setSalario();
    /**
     * @brief Checks the locations of one of the employees. Only the supervisior
     * can check the location.
     * 
     */
    void checkLocation();
    /**
     * @brief Opens anc closes Doors.
     * 1- Open
     * 0 -Close
     * Only the Guard can open and close doors.
     * 
     */
    void openCloseDoor();
    /**
     * @brief Pays the employee picked. Only the
     * Accountant can pay employees.
     * 
     */
    void payEmployee();
};

#endif
