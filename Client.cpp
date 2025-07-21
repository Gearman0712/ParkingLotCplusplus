#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
// #include "parkingSpot.cpp"
// #include  "Vehicle.cpp"
// // #include "VehicleType.cpp"
// #include "ParkingStrategy.cpp"
#include "ParkingSpotConcreteClasses.cpp"
// #include "ParkingSpotManager.cpp"
#include "Entrance.cpp"
#include "DefaultParkingStrategy.cpp"
#include "concreteCostComputationStrategy.cpp"
#include "Exit.cpp"
// #include "DurationType.cpp"
using namespace std;

// Include all the previously defined classes here or via headers...

int main()
{
    // Step 1: Create parking spots
    ParkingSpot *spot1 = new TwoWheelerParkingSpot(0);
    ParkingSpot *spot2 = new TwoWheelerParkingSpot(1);
    ParkingSpot *spot3 = new FourWheelerParkingSpot(2);

    vector<ParkingSpot *> parkingSpots = {spot1, spot2, spot3};

    // Step 2: Setup ParkingSpotManager
    ParkingSpotManager manager(parkingSpots);

    // Step 3: Setup Entrance with ParkingStrategy and CostStrategy
    Entrance entrance(&manager);
    DefaultParkingStrategy parkingStrategy;

    DefaultStrategy costStrategy;

    // Step 4: Create a vehicle
    Vehicle *bike = new Vehicle(VehicleType::TWO_WHEELER, "Red", "KA-01-AA-1234", 20);

    // Step 5: Book a spot and generate a ticket
    Ticket *ticket = entrance.bookSpotAndGiveTicket(bike, &costStrategy, &parkingStrategy, 1, DurationType::HOUR);

    if (ticket != nullptr)
    {
        std::cout << "Ticket issued for " << "ticket->name" << " at floor "
                  << "ticket->floorNo" << ", Price: " << ticket->price << std::endl;
    }
    else
    {
        std::cout << "No parking spot available!" << std::endl;
    }

    // Step 6: Simulate exit
    Exit exitGate;
    exitGate.payPrice(ticket, 5);
    exitGate.vacateParkingSpot(ticket);

    // // Step 7: Clean up
    // delete spot1;
    // delete spot2;
    // delete spot3;
    // delete bike;
    // delete ticket;

    return 0;
}
