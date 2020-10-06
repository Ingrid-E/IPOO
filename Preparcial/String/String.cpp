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
    cout << endl;
}

char String::getWord(int index){
    return word[index];
}

void String::compare(String secondWord){
int same = 0;
    for(int i = 0; i<= length(); i++){
        if( getWord(i) == secondWord.getWord(i)){

        }else same = same+1;
    }
    if(same>0){
        cout << "No son iguales" << endl;
    }else cout << "Son iguales"<< endl;
};

void String::delet(String secondWord){
    for(int a=0; a<length(); a++){
    for(int i=0; i<secondWord.length(); i++){
        cout << word[a] << "==" << secondWord.getWord(i) << endl;
        if(word[a] == secondWord.getWord(i)){
            for(int index=a; index<length(); index++){
                word[index]=word[index+1];
            }
        }
    }
    }
}