/*
MD MUSFIQ ALAM TASIN
ID:20262103199
*/
#include <iostream>
using namespace std;

class Shape
{
protected:
    double dimension;

public:
    virtual double calculateArea() = 0;
};

class Square : public Shape
{
public:
    Square(double dimension)
    {
        this->dimension = dimension;
    }

    double calculateArea()
    {
        return dimension * dimension;
    }
};

class Circle : public Shape
{
public:
    Circle(double dimension)
    {
        this->dimension = dimension;
    }

    double calculateArea()
    {
        return 3.1416 * dimension * dimension;
    }
};

int main()
{
    Square s1(5);
    Circle c1(3);

    cout << "Area of Square: " << s1.calculateArea() << endl;
    cout << "Area of Circle: " << c1.calculateArea() << endl;

    return 0;
}

