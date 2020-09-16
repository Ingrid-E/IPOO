#include "Student.h"
#include "ClassRoom.h"

#include <iostream>
using namespace std;

int main(void) {
  string roomId;
	int roomSize; // numero de estudiantes
	ClassRoom poo80;
	cout<<" Codigo del curso"<<endl;
	cin>>roomId;
	cout<<" Cantidad de estudiantes en el salon:"<<endl;
	cin>>roomSize;

	poo80.setID(roomId);
	poo80.setNumberStudents(roomSize);

	for(int student=0;student<roomSize;student++){
		string studentId, studentName;
		int midterm, finalterm;
		cout<<"Código del estudiante "<<endl;
		cin>>studentId;
		cout<<"Nombre del estudiante ("<<to_string(student)<<")"<<endl;
		cin>>studentName;
		cout<<"¿Nota del primer parcial?"<<endl;
		cin>>midterm;
		cout<<"¿Nota del segundo parcial?"<<endl;
		cin>>finalterm;
		Student aStudent(studentId, studentName, midterm, finalterm);
		cout<<aStudent.getStudentID()<<", "<<aStudent.getStudentName()<<", "<<aStudent.getGrading()<<endl;
	}

}