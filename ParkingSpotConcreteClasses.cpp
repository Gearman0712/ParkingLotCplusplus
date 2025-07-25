#include <iostream>
#include <string>
#include "ParkingSpot.h"
using namespace std;

class TwoWheelerParkingSpot : public ParkingSpot
{

    bool isOccupied;
    VehicleType vehicleType = VehicleType::TWO_WHEELER;

public:
    TwoWheelerParkingSpot(bool isOp) : isOccupied(isOp)
    {
        cout << "TWoWheeller Parking spot created" << "\n";
    }

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
    VehicleType vehicleType = VehicleType::THREE_WHEELER;

public:
    ThreeWheelerParkingSpot(bool isOp) : isOccupied(isOp)
    {
        cout << "ThreeWheeller Parking spot created" << "\n";
    }

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

    VehicleType vehicleType = VehicleType::FOUR_WHEELER;

public:
    FourWheelerParkingSpot(bool isOp) : isOccupied(isOp)
    {
        cout << "FourWheeller Parking spot created" << "\n";
    }

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
