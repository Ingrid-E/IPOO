#include "Number.h"
#include "Pension.h"
#include "Bigger.h"
#include <iostream>
using namespace std;

int main(){
    //Indique si un número ingresado por la consola es positivo, negativo o cero.
    Number numero;
    numero.setNum(5);
    cout << numero.PositiveNegativeZero()<< endl;
    numero.setNum(-5);
    cout << numero.PositiveNegativeZero() << endl;
    numero.setNum(0);
    cout << numero.PositiveNegativeZero() << endl;
    //Indique si tiene la edad para pensionarse. (60 años o más para los hombres y 54 años o más para las mujeres).
    Pension person;
    person.setAge(34);
    person.setSex('M');
    cout << person.canPesion() << endl;
    person.setAge(78);
    person.setSex('F');
    cout << person.canPesion() << endl;
    person.setAge(60);
    person.setSex('M');
    cout << person.canPesion() << endl;
    person.setAge(56);
    person.setSex('F');
    cout << person.canPesion()<< endl;
    //Recibe 3 números e indica cual de los tres es el mayor.
    Bigger numbers;
    numbers.setNumbers(3,4,5);
    cout << numbers.biggerNumber()<<endl;
    numbers.setNumbers(78,23,16);
    cout << numbers.biggerNumber()<<endl;
    numbers.setNumbers(67,90,21);
    cout << numbers.biggerNumber()<<endl;
    numbers.setNumbers(45,2,10);
    cout << numbers.biggerNumber()<<endl;
}