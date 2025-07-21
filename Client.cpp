#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "ParkingSpotConcreteClasses.cpp"
#include "Entrance.cpp"
#include "concreteCostComputationStrategy.cpp"
#include "Exit.cpp"
#include "DurationType.h"
#include "ConcreteParkingStrategy.cpp"
using namespace std;

// Include all the previously defined classes here or via headers...

int main()
{
    // Step 1: Create parking spots
    ParkingSpot *spot1 = new TwoWheelerParkingSpot(true);
    ParkingSpot *spot2 = new TwoWheelerParkingSpot(false);
    ParkingSpot *spot3 = new FourWheelerParkingSpot(true);

    vector<ParkingSpot *> parkingSpots = {spot1, spot2, spot3};

    // Step 2: Setup ParkingSpotManager
    ParkingSpotManager manager(parkingSpots);

    // Step 3: Setup Entrance with ParkingStrategy and CostStrategy
    Entrance entrance(&manager);
    DefaultParkingStrategy parkingStrategy;

    PreminumStrategy costStrategy;

    // Step 4: Create a vehicle
    Vehicle *bike = new Vehicle(VehicleType::TWO_WHEELER, "Red", "KA-01-AA-1234", 20);

    // Step 5: Book a spot and generate a ticket
    Ticket *ticket = entrance.bookSpotAndGiveTicket(bike->getVehicleType(), &costStrategy, &parkingStrategy, 1, DurationType::HOUR);

    if (ticket != nullptr)
    {
        std::cout << "Ticket issued for " << "ticket->name" << " at floor "
                  << "ticket->floorNo" << std::endl;
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
