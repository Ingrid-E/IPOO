#ifndef STUDENT_H_
#define STUDENT_H_
#include <string>
using namespace std;

class Student{
    private:
        string id;
        string studentName;
        double midtermExam;
        double finaltermExam;
        double grading;
        void setGrading(double grade);
    public:
        Student();
        Student(string newStudentId, string newStudentName, double newMidTerm, double newFinalTerm);
        ~Student();
        string getStudentName();
        string getStudentID();
        double getMidterm();
        double getFinaltermExam();
        double getGrading();
        void setMidterm(double nMidterm);
        void setFinaltermExam(double nFinaltermExam);
        void setStudentName(string name);
        void setStudentID(string nID);

};

#endif