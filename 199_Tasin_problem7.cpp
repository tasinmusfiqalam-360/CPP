/*
MD MUSFIQ ALAM TASIN
ID:20262103199
*/
#include <iostream>
using namespace std;

class University
{
public:
    void universityInfo()
    {
        cout << "University Name: BUBT" << endl;
    }
};

class Department : public University
{
public:
    void departmentInfo()
    {
        cout << "Department Name: CSE" << endl;
    }
};

class Student : public Department
{
public:
    int studentId;
    string studentName;

    void studentInfo()
    {
        cout << "Student ID: " << studentId << endl;
        cout << "Student Name: " << studentName << endl;
    }
};

int main()
{
    Student s1;

    s1.studentId = 199;
    s1.studentName = "MUSFIQ ALAM TASIN";

    s1.universityInfo();
    s1.departmentInfo();
    s1.studentInfo();

    return 0;
}

