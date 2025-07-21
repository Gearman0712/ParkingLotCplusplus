#include "VehicleType.h"
#include <iostream>
#include <string>

using namespace std;
class Vehicle
{

    string color;
    string vehicleNumber;
    int basePrice;
    VehicleType vehicleType;

public:
    Vehicle(const VehicleType &type, const string &col, const string &number, int priceVehicle) : vehicleType(type), color(col), vehicleNumber(number), basePrice(priceVehicle) {}

    int getBasePrice()
    {
        return basePrice;
    }

    VehicleType getVehicleType()
    {

        return vehicleType;
    }
};
