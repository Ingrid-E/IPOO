#include "ClassRoom.h"
#include "Student.h"
#include <string>
using namespace std;

ClassRoom::ClassRoom()
{
    id = "";
    numberStudents = 0;
    index = 0;
}
ClassRoom::~ClassRoom() {}

string ClassRoom::getID()
{
    return id;
}

int ClassRoom::getNumberStudents()
{
    return numberStudents;
}

void ClassRoom::setID(string nId)
{
    id = nId;
}

void ClassRoom::setNumberStudents(int nNumberStudents)
{
    numberStudents = nNumberStudents;
}

void ClassRoom::addStudent(Student student)
{
    //vecStudents[index].deepCopy(student);
}

void ClassRoom::delStudent(int position)
{
    //vecStudents[position] = NULL;
}

void ClassRoom::replaceStudent(Student student, int position)
{
    //vecStudents[position].deepCopy(student);
}