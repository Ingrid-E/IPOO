#ifndef _PET_H_
#define _PET_H_
#include <string>
using namespace std;
/**
*This class represents the information of a 
*pet and calculates its age.
*@author 750081m-80
*@date 
*/
class Pet {
	private:
		string name;
    string breed;
		char size; // size "s" small, m medium, b big, g giant 
		int age;
		int humanAge;
		/**
		* <setHumanAge><number> --> <void>  		// No olvidemos el contrato
		* This method allow set pet's human age
		* @param nHumanAge new pet's human age value
		* @deprecated because nobody could set human age. 
		* The human age is calculated from a table using the size.
		* @see getHumanAge 
		* @return void   												// Opcional si retorna void
		*/
		void setHumanAge(int nHumanAge);

	public:	
		/**
		*Constructor
		*/
		Pet(); // Y este se borra ?; pueden existir ambos
		/**
		*Parameterized Constructor 
		*/
		Pet(string aName, char aSize, int age);
		/**
		*Destructor
		*/
		~Pet();
		/**
		*Allows us to get dog's name?
    *@return string
		*/
		string getName();
		/**
    *Allows us to obtain the breed of the dog
		*@return string 
		*/
		string getBreed();
		/**
		*It allows us to get the dog's size
    *@return string  <--- No deberia ser un char?
		*/
		char getSize();
		/**
    *<setName><string> --> <void>
		*It allows us to set the dog's name
    *@return void
		*/
		void setName(string nName);
		/**
    *<setBreed><string> --> <void>
		*It allows us to set the dog's breed
    *@return void
		*/
		void setBreed(string nBreed);
		/**
		*<setSize><char> --> <void>
    *	This method allows you to set the size
    *@return void
		*/
		void setSize(char nSize);
    /**
		*It allows us to get the dog's age
    *@return vaid
		*/
    int getAge();
		/**
		*It allows us to get the dog's human age
    *@return int
		*/
    int getHumanAge();
		/**
		*It allows us to set the dog's age
    *@return void
		*/
    void setAge(int nAge);
};
#endif




