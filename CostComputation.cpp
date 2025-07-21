// # include "VehicleType.cpp"
#include "Vehicle.cpp"
#include "DurationType.cpp"
class CostComputation
{

public:
    virtual int calculateCostForTicket(Vehicle *vh, int duration, DurationType durationType) = 0;
};

DefaultParkingStrategy.cpp

#include "ParkingStrategy.cpp"
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

DurationType.cpp

    enum class DurationType {
        HOUR,
        MINUTE

    };
