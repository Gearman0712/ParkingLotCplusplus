#include "VehicleType.h"
// #include "Vehicle.cpp"
#include "DurationType.h"
// #include "ParkingStrategy.cpp"
class CostComputation
{

public:
    virtual int calculateCostForTicket(VehicleType vt, int duration, DurationType durationType) = 0;
};
