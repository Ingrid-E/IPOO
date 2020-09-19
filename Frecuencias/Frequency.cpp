#include "Frequency.h"
#include <string>
#include <iostream>
using namespace std;

Frequency::Frequency(){
    numeros = "";
}

Frequency::~Frequency(){}

void Frequency::setNumeros(string newNumeros){
    numeros = newNumeros;
}

void Frequency::numFrequency(){
    int zero = 0;
    int one = 0;
    int two = 0;
    int three = 0;
    int four = 0;
    int five = 0;
    int six = 0;
    int seven = 0;
    int eight = 0;
    int nine = 0;

    string stringNumeros = numeros;

    for(int i = 0; i<=9; i++){
        if(stringNumeros[i]=='0'){
            zero = zero +1;
        }
        if(stringNumeros[i]=='1'){
            one = one +1;
        }
        if(stringNumeros[i]=='2'){
            two = two +1;
        }
        if(stringNumeros[i]=='3'){
            three = three +1;
        }
        if(stringNumeros[i]=='4'){
            four = four +1;
        }
        if(stringNumeros[i]=='5'){
            five = five +1;
        }
        if(stringNumeros[i]=='6'){
            six = six +1;
        }
        if(stringNumeros[i]=='7'){
            seven = seven +1;
        }
        if(stringNumeros[i]=='8'){
            eight = eight +1;
        }
        if(stringNumeros[i]=='9'){
            nine = nine +1;
        }
    }

    cout << "0 = " << zero << endl;
    cout << "1 = " << one << endl;
    cout << "2 = " << two << endl;
    cout << "3 = " << three << endl;
    cout << "4 = " << four << endl;
    cout << "5 = " << five << endl;
    cout << "6 = " << six << endl;
    cout << "7 = " << seven << endl;
    cout << "8 = " << eight << endl;
    cout << "9 = " << nine << endl;

}