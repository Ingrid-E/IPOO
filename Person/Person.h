#ifndef PERSON_H_
#define PERSON_H_
#include <string>
using namespace std;
/**
 * @file Person.h
 * @brief This class represents a Person and allows to get
 * classification according to given age.
 * @author Ingrid Echeverri (ingrid.echeverri@correounivalle.edu.co)
 * @version 0.1
 * @date 2020-09-14
 */

class Person{
  private:
	/** @brief name of the person*/
	string name;
	/** @brief age of the person*/
	int age;
  public:
	/**
	 * @brief Construct a new Person object
	 * 
	 * @param personName // Sets Name of the Person to prrivate variable
	 * @param personAge // Sets Age of the Person to prrivate variable
	 */
  	Person(string personName, int personAge); 
	/** @brief Destroy the Person object*/
  	~Person();
	/**
	 * @brief Returns the name of the person.
	 * @return string 
	 */
	string getName();
	/**
	 * @brief Returns the age of the person.
	 * @return int 
	 */
	int getAge();
	/**
	 * @brief Prints out the persons age classified in words.
	 * 1<age<10 <-- "niño"
	 * 11<age<18 <-- "adolescente"
	 * 18<age<60 <-- "adult"
	 * 60<age <-- "adult mayor"
	 */
	void classifyByAge();
};
#endif