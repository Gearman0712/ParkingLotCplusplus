#include "CostComputation.cpp"

class DefaultStrategy : public CostComputation
{

public:
    int calculateCostForTicket(Vehicle *vh, int duration, DurationType durationType)
    {
        return vh->getBasePrice() + 50;
    }
};

class PreminumStrategy : public CostComputation
{

public:
    int calculateCostForTicket(Vehicle *vh, int duration, DurationType durationType)
    {
        int totalPrice = vh->getBasePrice();
        if (durationType == DurationType::HOUR)
        {
            totalPrice += duration * 50;
        }
        else
        {
            totalPrice += duration * 2;
        }
        return totalPrice;
    }
};

class LuxuryStrategy : public CostComputation
{

public:
    int calculateCostForTicket(Vehicle *vh, int duration, DurationType durationType)
    {
        int totalPrice = vh->getBasePrice();
        if (durationType == DurationType::HOUR)
        {
            totalPrice += duration * 100;
        }
        else
        {
            totalPrice += duration * 4;
        }

        return totalPrice;
    }
};