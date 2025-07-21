#include <vector>
#include "ParkingSpot.h"
using namespace std;

class ParkingStrategy
{
public:
    virtual ParkingSpot *findParkingSpot(VehicleType vt, vector<ParkingSpot *> &parkings) = 0;
};
