#include "Person.h"
#include <string>
using namespace std;

Person::Person(){
	name="";
  lastName="";
  classification="";
  age = 0;
}
Person::~Person(){}

string Person::getName(){
  return name;
}

string Person::getLastName(){
  return lastName;
}

int Person::getAge(){
  return age;
}

void Person::setName(string nombreIngresado){
	name = nombreIngresado;
}

void Person::setLastName(string apellidoIngresado){
	lastName = apellidoIngresado;
}

void Person::setAge(int edad){
	age = edad;
}

//Se crea getClassification donde se clasifica en alguna categoria nuestro Person

string Person::getClassification(){
	if(age < 0){
    return "Dato invalido.";
	}
	else if((age >= 1) && (age <= 10)){
		return "Es un niño.";
	}
	else if ((age > 10) && (age <= 18)){
		return "Es un adolescente.";
	}
  else if ((age >= 18 && age < 60)){
		return "Es un adulto.";
	}
  else if(age > 60 && age <= 100){
		return "Es un adulto de la tercera edad.";
	}
  else{
    return " Como sigues con vida"; 
  }
	
}



//switch(age){
 //* default: cout<< "ingrese una edad válida"<<endl;
  
 //* case ((age>1) &&(age<18)):
  //*  cout<<"Es un "

  //*break;

//  case  :

//  break;


//return ;

//*/  
//}

