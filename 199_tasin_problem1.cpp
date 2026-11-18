/*
MD MUSFIQ ALAM TASIN
ID:20262103199
*/
#include <iostream>
using namespace std;

class Student
{
private:
    int studentId;
    string studentName;
    double cgpa;

public:

    void setStudentId(int studentId)
    {
        this->studentId = studentId;
    }

    void setStudentName(string studentName)
    {
        this->studentName = studentName;
    }

    void setCgpa(double cgpa)
    {
        this->cgpa = cgpa;
    }


    int getStudentId()
    {
        return studentId;
    }

    string getStudentName()
    {
        return studentName;
    }

    double getCgpa()
    {
        return cgpa;
    }
};

int main()
{
    Student s1;


    s1.setStudentId(199);
    s1.setStudentName("TASIN");
    s1.setCgpa(3.75);


    cout << "Student Information" << endl;
    cout << "Student ID: " << s1.getStudentId() << endl;
    cout << "Student Name: " << s1.getStudentName() << endl;
    cout << "CGPA: " << s1.getCgpa() << endl;

    return 0;
}
