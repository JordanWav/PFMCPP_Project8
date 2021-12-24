#include "SemiTruck.h"

SemiTruck::SemiTruck(const std::string& n) : Vehicle(n) {}

SemiTruck::~SemiTruck() = default;

SemiTruck::SemiTruck(const SemiTruck&) = default;

SemiTruck& SemiTruck::operator=(const SemiTruck&) = default;

void SemiTruck::toSpeedLimit(int s)
{
    if( s > 65 )
    {
        std::cout<< name << ": I should slow down!" << std::endl;
        Vehicle::setSpeed(65);
    }
    if( s < 65 )
    {
        std::cout<< name << ": I'm going too slow!" << std::endl;
        Vehicle::setSpeed(65);
    }
}

void SemiTruck::pullOver()
{
    setSpeed(0);
    std::cout << name << ": How are you doing, officer?" << std::endl;
}
