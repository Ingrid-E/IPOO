#ifndef CLASSROOM_H_
#define CLASSROOM_H_
#include "Student.h"
#include <string>
using namespace std;

class ClassRoom{
    private:
        string id;
        int index;
        int numberStudents;
        Student vecStudents[100];
        void setListStudents(Student students[]);
    public:
        ClassRoom();
        ~ClassRoom();
        string getID();
        int getIndex();
        int getNumberStudents();
        void setID(string nId);
        void setNumberStudents(int nNumberStudents);
        void addStudent(Student student);
        void replaceStudent(Student student, int index);
        void delStudent(int index);
};

#endif
