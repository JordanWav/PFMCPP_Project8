#pragma once

#include <iostream>
#include "Vehicle.h"

struct SemiTruck : Vehicle
{
    SemiTruck(const std::string& s);

    ~SemiTruck() override;
    SemiTruck(const SemiTruck&);
    SemiTruck& operator=(const SemiTruck&);
    
    void checkSpeed(int s);
    void pullOver();
};
