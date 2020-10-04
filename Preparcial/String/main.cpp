#include "String.h"
#include <iostream>
using namespace std;
/**
 * @file String.h
 * @author Ingrid Echeverri (ingrid.echeverri@correounivalle.edu.co)
 * @brief Recives a "string" and to stop you have to put
 * . Enter and then it will change a letter, return length etc.
 * @version 0.1
 * @date 2020-09-18
 */
int main(){
    cout <<"Poner . al final de la palabra y dar enter"<< endl;
    char word = '-';
    cin >> word;
    String myString(word);
    cout << myString.length() << endl;
    myString.insert('n',1);
    myString.printString();

}