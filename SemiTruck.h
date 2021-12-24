#pragma once

#include <iostream>
#include "Vehicle.h"

struct SemiTruck : public Vehicle
{
    SemiTruck(const std::string& s);
    
    void toSpeedLimit(int s);
    void pullOver();
};


