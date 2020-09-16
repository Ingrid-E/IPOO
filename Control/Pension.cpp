#include "Pension.h"
#include <string>
using namespace std;

Pension::Pension(){
    age = 0;
    sex = 'N';
}

Pension::~Pension(){}

int Pension::getAge(){
    return age;
}

char Pension::getSex(){
    return sex;
}

void Pension::setAge(int num){
    age = num;
}

void Pension::setSex(char letter){
    sex = letter;
}

string Pension::canPesion(){
    if(age>=60 && sex == 'M') return "true";
    if(age>=54 && sex == 'F') return "true";
    return "false";
}