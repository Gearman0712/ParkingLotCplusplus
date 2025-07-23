// #include "Ticket.cpp"

class Exit
{
public:
    void payPrice(Ticket *ticket, int endT)
    {
        if (ticket != nullptr)
            cout << "Paid" << ticket->getCost(endT);
    }
    void vacateParkingSpot(Ticket *ticket)
    {
        if (ticket != nullptr)
            ticket->parkingSpot->vacateParkingSpot();
    }
};