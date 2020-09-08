
#include "Pet.h"
#include <string>
using namespace std;
//Aqui no iban los metodos?si aqui se implementan ;si listo :)
Pet::Pet(){
  name="";
	breed="";
  age=0; 
  size=' ';
	humanAge = 0;
}
Pet::Pet(string aName, char aSize, int age){
  name=aName;
	breed="";
  age=age; 
  size=aSize;
	humanAge = 0;
}

Pet::~Pet(){}

string Pet::getName(){
  return name;
}

string Pet::getBreed(){
  return breed;
}

char Pet::getSize(){
	return size;
}  

int Pet::getAge(){
	return age;  
}

int Pet::getHumanAge(){
 	char value = size;
	int humanAge=0;
	switch(value){
		default:
			humanAge =  36+(4*(age-5));
			break;
		case 's':
			humanAge = 36+(4*(age-5));
			break;
		case 'm':
			humanAge =  37+(5*(age-5));	
			break;
		case 'b':
			humanAge =  (age > 8) ? 40+(6*(age-6)) : 40+(5*(age-5));	
			break;
		case 'g':
			humanAge =  42+(7*(age-7));
			break;
	}
	return humanAge;
}

void Pet::setName(string nName){
	name= nName;
}

void Pet::setAge(int nAge){
	if(nAge >= 5 && nAge <= 15) age = nAge;
}

void Pet::setBreed(string nBreed){
  breed = nBreed;
}

void Pet::setSize(char nSize){
  size = nSize;
}