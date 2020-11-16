#include "Animal.h"

Animal::Animal(){
    this->name = " ";
}

string Animal::speak(){
    return "woof";
}

string Animal::getName(){
    return this->name;
}