/*
MD MUSFIQ ALAM TASIN
ID:20262103199
*/
#include <iostream>
using namespace std;

class LandVehicle
{
public:
    void landInfo()
    {
        cout << "This vehicle can travel on land." << endl;
    }
};

class WaterVehicle
{
public:
    void waterInfo()
    {
        cout << "This vehicle can travel on water." << endl;
    }
};

class AmphibiousVehicle : public LandVehicle, public WaterVehicle
{
public:
    void displayVehicleType()
    {
        cout << "Vehicle Type: Amphibious Vehicle" << endl;
    }
};

int main()
{
    AmphibiousVehicle a1;

    a1.displayVehicleType();
    a1.landInfo();
    a1.waterInfo();

    return 0;
}

