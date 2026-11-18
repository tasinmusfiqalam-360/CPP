/*
MD MUSFIQ ALAM TASIN
ID:20262103199
*/
#include <iostream>
#include <string>
using namespace std;

class Course
{
private:
    int courseId;
    string courseName;

public:
    void setCourseId(int courseId)
    {
        this->courseId = courseId;
    }

    void setCourseName(string courseName)
    {
        this->courseName = courseName;
    }

    int getCourseId()
    {
        return courseId;
    }

    string getCourseName()
    {
        return courseName;
    }

    virtual void displayCourseType() = 0;

    virtual ~Course()
    {
    }
};

class TheoryCourse : public Course
{
public:
    void displayCourseType()
    {
        cout << "This is a Theory Course" << endl;
    }
};

class LabCourse : public Course
{
public:
    void displayCourseType()
    {
        cout << "This is a Lab Course" << endl;
    }
};

int main()
{
    Course *c;

    c = new TheoryCourse();

    c->setCourseId(101);
    c->setCourseName("Object Oriented Programming");

    cout << "Theory Course Information:" << endl;
    cout << "Course ID: " << c->getCourseId() << endl;
    cout << "Course Name: " << c->getCourseName() << endl;

    c->displayCourseType();

    delete c;

    cout << endl;

    c = new LabCourse();

    c->setCourseId(102);
    c->setCourseName("OOP Lab");

    cout << "Lab Course Information:" << endl;
    cout << "Course ID: " << c->getCourseId() << endl;
    cout << "Course Name: " << c->getCourseName() << endl;

    c->displayCourseType();

    delete c;

    return 0;
}

