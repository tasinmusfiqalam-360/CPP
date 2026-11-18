/*
MD MUSFIQ ALAM TASIN
ID:20262103199
*/
#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    void setName(string name)
    {
        this->name = name;
    }

    void setAge(int age)
    {
        this->age = age;
    }

    string getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }
};

class Employee : public Person
{
private:
    int employeeId;
    double salary;

public:
    void setEmployeeId(int employeeId)
    {
        this->employeeId = employeeId;
    }

    void setSalary(double salary)
    {
        this->salary = salary;
    }

    int getEmployeeId()
    {
        return employeeId;
    }

    double getSalary()
    {
        return salary;
    }
};

int main()
{
    Employee e1;

    e1.setName("MUSFIQ ALAM TASIN");
    e1.setAge(21);
    e1.setEmployeeId(199);
    e1.setSalary(35000);

    cout << "Employee Information:" << endl;
    cout << "Employee Name: " << e1.getName() << endl;
    cout << "Employee Age: " << e1.getAge() << endl;
    cout << "Employee ID: " << e1.getEmployeeId() << endl;
    cout << "Employee Salary: " << e1.getSalary() << endl;

    return 0;
}

