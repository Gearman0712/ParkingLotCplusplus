#include "ParkingStrategy.h"
class DefaultParkingStrategy : public ParkingStrategy
{

    ParkingSpot *findParkingSpot(VehicleType vt, vector<ParkingSpot *> &parkings)
    {
        for (auto *spot : parkings)
            if (spot->isEmpty() && spot->getVehicleType() == vt)
                return spot;

        return nullptr;
    }
};