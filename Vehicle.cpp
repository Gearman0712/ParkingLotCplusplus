#include "VehicleType.cpp"
#include <iostream>
#include <string>

using namespace std;

class Vehicle
{

    string color;
    string vehicleNumber;
    int basePrice;

public:
    VehicleType vehicleType;

    Vehicle(const VehicleType &type, const string &col, const string &number, int priceVehicle) : vehicleType(type), color(col), vehicleNumber(number), basePrice(priceVehicle) {}

    int getBasePrice()
    {
        return basePrice;
    }
};
