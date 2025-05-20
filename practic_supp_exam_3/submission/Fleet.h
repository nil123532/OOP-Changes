#ifndef FLEET_H
#define FLEET_H
#include "Vehicle.h"

class Fleet {
private:
    Vehicle** fleet;          // size 3

public:
    Fleet();                  // builds & stores vehicles
    ~Fleet();

    Vehicle** get_fleet() const;
};
#endif
