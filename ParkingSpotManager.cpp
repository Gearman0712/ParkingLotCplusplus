// #include "parkingSpot.cpp"
#include "Vehicle.cpp"
// #include "VehicleType.cpp"
#include <vector>
#include <algorithm>
#include "ParkingStrategy.cpp"

using namespace std;

class ParkingSpotManager
{
private:
    vector<ParkingSpot *> parkings;

public:
    ParkingSpotManager(const vector<ParkingSpot *> &ps) : parkings(ps) {}

    ParkingSpot *findParkingSpot(VehicleType vt, ParkingStrategy *strategy)
    {
        return strategy->findParkingSpot(vt, parkings);
    }
    void addParkingSpot(ParkingSpot *ps)
    {
        parkings.push_back(ps);
    }
    void removeParkingSpot(ParkingSpot *spot)
    {
        parkings.erase(remove(parkings.begin(), parkings.end(), spot), parkings.end());
    }

    void parkVehicle(Vehicle *v, ParkingSpot *spot)
    {
        spot->parkVehicle(v->vehicleType);
    }
};
