#include "Week.h"
#include <string>
using namespace std;

Week::Week(){
    num = 0; // Initial value of 0
    day = ""; //Intial value of string
}

Week::~Week(){}

string Week::getDay(){
    return day; //Returns value of day
}

int Week::getNum(){
    return num; //Returns value of num.
}
void Week::setDay(string newDay){
    day = newDay; //Sets day value
}

void Week::setNum(int newNum){
    num = newNum; //Sets num value
}

string Week::WeekDay(){

    switch(num){
        case 1:
            return "Lunes";
            break;
        case 2:
            return "Martes";
            break;
        case 3: 
            return "Miércoles";
            break;
        case 4:
            return "Jueves";
            break;
        case 5:
            return "Viernes";
            break;
        case 6:
            return "Sábado";
            break;
        case 7:
            return "Domingo";
            break;
    }
    return "No es un dia de la Semana";
}



