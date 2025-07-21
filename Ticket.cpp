// #include "VehicleType.cpp"
// #include "Vehicle.cpp"
#include <iostream>
#include <string>
#include "ParkingSpot.cpp"
#include "CostComputation.cpp"
using namespace std;

class Ticket
{

public:
    //    int floorNo;
    int price;
    string id;
    int startTime;
    Vehicle *vehicle;
    CostComputation *costComputation;
    ParkingSpot *parkingSpot;
    DurationType durationtype;

    Ticket(CostComputation *costComp, string &i, int startT, Vehicle *vh, ParkingSpot *ps, DurationType dt) : costComputation(costComp), id(i), startTime(startT), vehicle(vh), parkingSpot(ps), durationtype(dt) {}

    int getStartTime()
    {
        return startTime;
    }

    int getCost(int endTime)
    {
        return costComputation->calculateCostForTicket(vehicle, endTime - startTime, durationtype);
    }
};
