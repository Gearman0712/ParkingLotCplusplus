#ifndef PARKING_SPOT_H
#define PARKING_SPOT_H

#include "VehicleType.h"

class ParkingSpot
{
public:
    virtual bool isEmpty() = 0;
    virtual VehicleType getVehicleType() = 0;
    virtual void parkVehicle(VehicleType vt) = 0;
    virtual void vacateParkingSpot();
};

#endif