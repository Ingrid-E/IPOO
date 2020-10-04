#include "String.h"
#include <iostream>
using namespace std;

String::String(){
    //Default values of variables
    pivot = 0;
    stringLength = 0;
}

String::String(char newWord){
    pivot = 0;
    stringLength = 0;
    
    for (int i = 0; i<=100; i++){
        if(i == 0){
            word[pivot] = newWord;
            pivot = pivot+1;
        }
        cin >> word[pivot];
        pivot = pivot+1;
        //cout << word[i] << endl;
        if(word[i+1] == '.'){
            i = 101;
        }
    }
}

String::~String(){}

int String::length(){

    for(int i= 0; i<=100; i++){
        if(word[i]=='.'){
            stringLength = i;
            i = 101;
        }
    }
    return stringLength;
}

void String::insert(char letter, int index){
    word[index] = letter;
}

void String::printString(){
    for(int i=0; i<length();i++){
        cout << word[i];
    }
}
