#include <iostream>
#include <string>
#include "ParkingSpot.cpp"
#include "VehicleType.cpp"
using namespace std;

class TwoWheelerParkingSpot : public ParkingSpot
{

    bool isOccupied;
    int price;
    VehicleType vehicleType = VehicleType::TWO_WHEELER;

public:
    TwoWheelerParkingSpot(bool isOp) : isOccupied(isOp) {}

    bool isEmpty()
    {
        return isOccupied;
    }

    void parkVehicle(VehicleType vt)
    {
        isOccupied = true;
    }
    void vacateParkingSpot()
    {
        isOccupied = false;
    }
    VehicleType getVehicleType()
    {
        return vehicleType;
    }
};
class ThreeWheelerParkingSpot : public ParkingSpot
{

    bool isOccupied;
    int price;
    VehicleType vehicleType = VehicleType::THREE_WHEELER;

public:
    ThreeWheelerParkingSpot(bool isOp) : isOccupied(isOp) {}

    bool isEmpty()
    {
        return isOccupied;
    }

    void parkVehicle(VehicleType vt)
    {
        isOccupied = true;
    }
    void vacateParkingSpot()
    {
        isOccupied = false;
    }
    VehicleType getVehicleType()
    {
        return vehicleType;
    }
};

class FourWheelerParkingSpot : public ParkingSpot
{

    bool isOccupied;
    int price;
    VehicleType vehicleType = VehicleType::FOUR_WHEELER;

public:
    FourWheelerParkingSpot(bool isOp) : isOccupied(isOp) {}

    bool isEmpty()
    {
        return isOccupied;
    }

    void parkVehicle(VehicleType vt)
    {
        isOccupied = true;
    }
    void vacateParkingSpot()
    {
        isOccupied = false;
    }
    VehicleType getVehicleType()
    {
        return vehicleType;
    }
};
