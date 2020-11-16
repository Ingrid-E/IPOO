#include "Dog.h"
#include <iostream>
using namespace std;

Dog::Dog()
{
    this->bark = "woof";
    this->breed = "";
};

Dog::Dog(string dogName)
{
   name = dogName;
   this->breed = this->getBreed(dogName);
   this->bark = this->speak();
   cout << name << " a " << this->breed << this->bark << endl;
}

string Dog::speak()
{
    if(this->breed == "Chihuahua"){
        return " say woof";
    }else if(this->breed == "Collie"){
        return " say Woof";
    }else return " bark WOOF";
}

string Dog::getName()
{
    return name;
}

string Dog::getBreed(string dogName)
{
    if(dogName == "Danger"){
        return "Chihuahua";
    }else if(dogName == "Lassie"){
        return "Collie";
    }else{
        return "Rottweiler";
    }
}
