#include <iostream>
#include "Person.h"
#include "Pet.h"

int main() {
  Person aGrandpa;
	aGrandpa.setName("Abraham");
	aGrandpa.setLastName("Simpson");
	aGrandpa.setAge(89);

	Person aMan;
	aMan.setName("Homer");
	aMan.setLastName("Simpson");
	aMan.setAge(40);	

	Person aWoman;
	aWoman.setName("Marge");
	aWoman.setLastName("Simpson");
	aWoman.setAge(38);	

	Person aBoy;
	aBoy.setName("Bart");
	aBoy.setLastName("Simpson");
	aBoy.setAge(12);	
	
	Person aGirl;
	aGirl.setName("Lisa");
	aGirl.setLastName("Simpson");
	aGirl.setAge(10);

	Person aBaby;
	aBaby.setName("Maggie");
	aBaby.setLastName("Simpson");
	aBaby.setAge(4);		

	cout << "De la familia "<<aGrandpa.getLastName()<< " el " << aGrandpa.getClassification()<< " se llama "<<aGrandpa.getName()<<endl;

  cout << "De la familia "<<aBoy.getLastName()<< " el " << aBoy.getClassification()<< " se llama "<<aBoy.getName()<<endl;

  cout << "De la familia "<<aMan.getLastName()<< " el " << aMan.getClassification()<< " se llama "<<aMan.getName()<<endl;

  cout << "De la familia "<<aWoman.getLastName()<< " el " << aWoman.getClassification()<< " se llama "<<aWoman.getName()<<endl;

	// --- 
	Pet aDog("Lassie", 's', 5);
	cout <<"Hola, soy "<< aDog.getName() <<" un perro de tamanio "<< aDog.getSize()<<" tengo "<<aDog.getAge()<< " anios, que en humanos es "<< aDog.getHumanAge()<<" anios. "<<endl;

	Pet otherDog;
	otherDog.setName("Troski");
	otherDog.setSize('s');
	otherDog.setAge(5);
	cout <<"Hola, soy "<< otherDog.getName() <<" un perro de tamanio "<< otherDog.getSize()<<" tengo "<<otherDog.getAge()<< " anios, que en humanos es "<< otherDog.getHumanAge()<<" anios. "<<endl;



}