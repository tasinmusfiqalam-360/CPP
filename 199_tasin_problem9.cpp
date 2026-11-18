/*
MD MUSFIQ ALAM TASIN
ID:20262103199
*/
#include <iostream>
using namespace std;

class Vehicle
{
public:
    void vehicleInfo()
    {
        cout << "Vehicle Information" << endl;
    }
};

class Fare
{
public:
    void fareInfo()
    {
        cout << "Transportation Fare: 500 Taka" << endl;
    }
};

class Car : public Vehicle
{
public:
    void carInfo()
    {
        cout << "Car Information" << endl;
    }
};

class Bus : public Vehicle, public Fare
{
public:
    void busInfo()
    {
        cout << "Bus Information" << endl;
    }
};

int main()
{
    Car c1;
    Bus b1;

    cout << "Car Details:" << endl;
    c1.vehicleInfo();
    c1.carInfo();

    cout << "\nBus Details:" << endl;
    b1.vehicleInfo();
    b1.fareInfo();
    b1.busInfo();

    return 0;
}

