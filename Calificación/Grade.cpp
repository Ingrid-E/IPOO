#include "Grade.h"
#include <iostream>
using namespace std;
#include <string>
using namespace std;

Grade::Grade(){
    note = 'a'; // Initial value of the note is aceptable
}

Grade::~Grade(){}

string Grade::getNote(){
    return note; // Returns note value in single letter.
}

void Grade::setNote(string gradeLetter){
    note = gradeLetter; // Sets note value, as given.
}

void Grade::showNote(){
    //If note value is equal to:
    //A/a = cout << aceptable
    //B/b = cout << buena
    //E/e = cout << excelente
    //Anything else = cout << no se clasifico

    if(note=="a" || note=="A"){
        cout << "aceptable" << endl;
    }else if(note=="b" || note=="B"){
        cout << "buena" << endl;
    }else if(note=="e" || note=="E"){
        cout << "excelente" << endl;
    }else{
        cout << "no se clasifico" << endl;
    }
}