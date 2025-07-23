#include "ParkingSpotManager.cpp"
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

    Ticket *bookSpotAndGiveTicket(VehicleType vt, CostComputation *costComp, ParkingStrategy *startegy, int time, DurationType durationType)
    {
        ParkingSpot *spot = findSpace(vt, startegy);

        if (spot && spot->isEmpty())
        {
            parkingSpotManager->parkVehicle(vt, spot);
            string idn = "1";

            return new Ticket(costComp, idn, time, vt, spot, durationType);
        }

        return nullptr;
    }
};