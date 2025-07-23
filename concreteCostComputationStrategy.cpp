#include "CostComputation.h"

class DefaultStrategy : public CostComputation
{

public:
    int calculateCostForTicket(VehicleType vt, int duration, DurationType durationType)
    {
        // return vh->getBasePrice() + 50;
        return 20 + 50;
    }
};

class PreminumStrategy : public CostComputation
{

public:
    int calculateCostForTicket(VehicleType vt, int duration, DurationType durationType)
    {
        // int totalPrice = vh->getBasePrice();
        int totalPrice = 80;
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
    int calculateCostForTicket(VehicleType vt, int duration, DurationType durationType)
    {
        int totalPrice = 180;
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