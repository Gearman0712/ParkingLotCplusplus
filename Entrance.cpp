#include "ParkingSpotManager.cpp"
#include "CostComputation.cpp"
#include "Ticket.cpp"
class Entrance
{
private:
    ParkingSpotManager *parkingSpotManager;

public:
    Entrance(ParkingSpotManager *manager) : parkingSpotManager(manager) {}

    ParkingSpot *findSpace(VehicleType vt, ParkingStrategy *strategy)
    {
        return parkingSpotManager->findParkingSpot(vt, strategy);
    }

    Ticket *bookSpotAndGiveTicket(Vehicle *v, CostComputation *costComp, ParkingStrategy *startegy, int time, DurationType durationType)
    {
        ParkingSpot *spot = findSpace(v->vehicleType, startegy);

        if (spot && spot->isEmpty())
        {
            parkingSpotManager->parkVehicle(v, spot);
            string idn = "1";

            return new Ticket(costComp, idn, time, v, spot, durationType);
        }
    }
};