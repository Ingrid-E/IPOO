#ifndef PERSON_H_
#define PERSON_H_
#include <string>
using namespace std;
/**
* Thhis class represent a Person and allow 
* get a classification accorndint to your age
* @author 750081M-80
* @date 04-09-2020
*/
class Person{
  private:
		string name;
    string lastName;
    string classification;
    int age;

  public:
		// Contructor
  	Person();
		// Destructor
  	~Person();
		/**
		* @brief Get the name of a person
		* <getName>: <> --> <str>
		* @return the person's name
		*/
		string getName();
		/**
		* Get the last name of a person
		* <getName>: <> --> <str>
		* @return the person's last name
		*/
		string getLastName();
		/** 
		* @brief This method allow obtain the Pe4rson age
		*
		* @return the person's age
		*/ 
		int getAge();
		/**
		* Allow set a Classification for a Person
		* <getClassification>: <>  --> <string>
		* @date 4-09-2020
		* @return the person's classification
		*/
		string getClassification();
		/**
		* Allow set a new name for a Person
		* <setName>: <string>  --> <void>
		* @param newName is the person's name
		*/
		void setName(string newName);
		/**
    *Allow set a new lastname for a Person
		*@param newLastName is the person's lastname
		*/
		void setLastName(string newLastName);
		/**
		*Allow set age value the person
		*@param newAge is the person's age
		*return void
		*/
		void setAge(int newAge);
		/**
		* Allow set a Classification for a Person
		* <getClassification>: <int> --> string
		* @date 4-09-2020
		* @return the person's classification
		*/
		void setClassification( int age );

};
#endif