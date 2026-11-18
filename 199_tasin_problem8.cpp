/*
MD MUSFIQ ALAM TASIN
ID:20262103199
*/
#include <iostream>
using namespace std;

class Vehicle
{
public:
    void displayVehicleInfo()
    {
        cout << "Vehicle Information System" << endl;
    }
};

class Car : public Vehicle
{
public:
    string brand;
    int numberOfDoors;

    void carInfo()
    {
        cout << "Car Brand: " << brand << endl;
        cout << "Number of Doors: " << numberOfDoors << endl;
    }
};

class Bus : public Vehicle
{
public:
    int routeNumber;
    int passengerCapacity;

    void busInfo()
    {
        cout << "Bus Route Number: " << routeNumber << endl;
        cout << "Passenger Capacity: " << passengerCapacity << endl;
    }
};

int main()
{
    Car c1;
    Bus b1;

    c1.brand = "Toyota";
    c1.numberOfDoors = 4;

    b1.routeNumber = 15;
    b1.passengerCapacity = 50;

    cout << "Car Information:" << endl;
    c1.displayVehicleInfo();
    c1.carInfo();

    cout << "\nBus Information:" << endl;
    b1.displayVehicleInfo();
    b1.busInfo();

    return 0;
}

