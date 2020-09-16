#include "Person.h"
#include <string>
#include <iostream>
using namespace std;

Person::Person(string personName, int personAge){
	name = personName; 
	age = personAge;
}

Person::~Person(){}

int Person::getAge(){
	return age;
}

string Person::getName(){
	return name;
}

void Person::classifyByAge(){
	if(age>=1 && age<10){
		cout << "niño" << endl;
	}else if(age>=10 && age<18){
		cout << "adolescente" << endl;
	}else if(age>=18 && age<60){
		cout << "adulto" << endl;
	}else if(age>=60){
		cout << "adulto mayor" << endl;
	}
}
