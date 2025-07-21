// #include "VehicleType.cpp"
// #include "Vehicle.cpp"
#include <iostream>
#include <string>
#include "ParkingSpot.h"
#include "CostComputation.cpp"
using namespace std;

class Ticket
{

public:
    //    int floorNo;
    int price;
    string id;
    int startTime;
    VehicleType vt;
    CostComputation *costComputation;
    ParkingSpot *parkingSpot;
    DurationType durationtype;

    Ticket(CostComputation *costComp, string &i, int startT, VehicleType vh, ParkingSpot *ps, DurationType dt) : costComputation(costComp), id(i), startTime(startT), vt(vh), parkingSpot(ps), durationtype(dt) {}

    int getStartTime()
    {
        return startTime;
    }

    int getCost(int endTime)
    {
        return costComputation->calculateCostForTicket(vt, endTime - startTime, durationtype);
    }
};
