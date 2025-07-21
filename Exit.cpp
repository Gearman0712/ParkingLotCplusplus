#include "Ticket.cpp"

class Exit
{
public:
    void payPrice(Ticket *ticket, int endT)
    {
        cout << "Paid" << ticket->getCost(endT);
    }
    void vacateParkingSpot(Ticket *ticket)
    {
        ticket->parkingSpot->vacateParkingSpot();
    }
};