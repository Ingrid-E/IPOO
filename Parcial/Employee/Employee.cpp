#include "Employee.h"
#include <iostream>
using namespace std;


Employee::Employee(){
    name = "";
    charge = "";
    salary = 0.0;
    location = "";
}

Employee::Employee(string nName, string nCharge){
    name = nName;
    charge = nCharge;
    salary = 0.0;
    location = "";
    if(charge == "Boss" || charge == "boss"){
        setSalario();
    }else if(charge == "Supervisor" || charge == "supervisor"){
        checkLocation();
    }else if(charge == "Guard" || charge == "Guard"){
        openCloseDoor();
    }else if(charge == "Accountant" || charge == "accountant"){
        payEmployee();
    }else {
        cout << "Wrong check spelling" << endl;
    }
    
}

Employee::~Employee(){}

void Employee::setSalario(){
    double personSalary;
    cout << "Current Employees: "<< endl;
    cout << endl;
    cout << "Ingrid Echeverri, Jhonatan Arias, Miguel Arana" << endl;
    cout << endl;
    cout << "Pick Employee to set salary (Write the employee name): ";
    string nameEmployee;
    cin >> nameEmployee;
    cout << endl;
    if(nameEmployee == "Ingrid"){
    cout << "Name: Ingrid Echeverri" << endl;
    cout << "Charge: Supervisor" << endl;
    cout << "Salary: ";
    cin >> personSalary;
    cout << endl;
    }
    if(nameEmployee == "Jhonatan"){
    cout << "Name: Jhonatan Arias" << endl;
    cout << "Charge: Guard" << endl;
    cout << "Salary: ";
    cin >> personSalary;
    cout << endl;
    }
    if(nameEmployee == "Miguel"){
    cout << "Name: Miguel Arana" << endl;
    cout << "Charge: Accountant" << endl;
    cout << "Salary: ";
    cin >> personSalary;
    cout << endl;
    }

    cout << nameEmployee <<" salary is: " << personSalary << endl;

}

void Employee::checkLocation(){
    cout << "Current Employees: "<< endl;
    cout << endl;
    cout << "Ingrid Echeverri, Jhonatan Arias, Miguel Arana" << endl;
    cout << endl;
    cout << "Pick Employee to check location (Write the employee name): ";
    string nameEmployee;
    cin >> nameEmployee;
    cout << endl;
    if(nameEmployee == "Ingrid"){
    cout << "Name: Ingrid Echeverri" << endl;
    cout << "Charge: Supervisor" << endl;
    cout << "Location is cameras" << endl;
    }
    if(nameEmployee == "Jhonatan"){
    cout << "Name: Jhonatan Arias" << endl;
    cout << "Charge: Guard" << endl;
    cout << "Location is front door" << endl;

    }
    if(nameEmployee == "Miguel"){
    cout << "Name: Miguel Arana" << endl;
    cout << "Charge: Accountant" << endl;
    cout << "Location is office" << endl;
    }
    
}

void Employee::openCloseDoor(){
    cout << "Doors: " << endl;
    cout << "0 =  Closed" << endl;
    cout << "1 = Open" << endl;
    cout << "Close or Open" << endl;
    int number;
    cin >> number;
    cout << endl;
    while(number == 1 || number == 0){
    
    if(number == 1){
        cout << "Doors are open" << endl;
    }else if(number == 0){
        cout << "Doors are closed" << endl;
    }
    cout << endl;
    cout << "Number: " << endl;
    cin >> number;
    }cout <<"Wrong number"<< endl;
}

void Employee::payEmployee(){
    cout << "Current Employees: "<< endl;
    cout << endl;
    cout << "Ingrid Echeverri, Jhonatan Arias, Miguel Arana" << endl;
    cout << endl;
    cout << "Pick Employee to pay (Write the employee name): ";
    string nameEmployee;
    cin >> nameEmployee;
    cout << endl;
    cout << nameEmployee << " has been payed" << endl;
}



