#include "Student.h"
#include <iostream>
using namespace std;

Student::Student(){
    id = "";
    studentName = "";
    midtermExam = 0.0;
    finaltermExam = 0.0;
    grading = 0.0;
}

Student::Student(string newStudentId, string newStudentName, double newMidTerm, double newFinalTerm){
    id = newStudentId;
    studentName = newStudentName;
    midtermExam = newMidTerm;
    finaltermExam = newFinalTerm;
    grading = 0.0;
}

Student::~Student(){}

string Student::getStudentName(){
    return studentName;
}

string Student::getStudentID(){
    return id;
}

double Student::getMidterm(){
    return midtermExam;
}

double Student::getFinaltermExam(){
    return finaltermExam;
}

void Student::setMidterm(double nMidterm){
    midtermExam = nMidterm;
}

void Student::setFinaltermExam(double nFinaltermExam){
    nFinaltermExam = nFinaltermExam;
}

void Student::setStudentName(string name){
    studentName = name;
}

void Student::setStudentID(string nID){
    id = nID;
}

double Student::getGrading(){
    grading = (getMidterm()*0.4) + (getFinaltermExam() * 0.6);
    return grading;
}

