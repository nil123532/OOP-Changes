#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"

class Truck : public Vehicle {
private:
    int cargoLoad;   // kg

public:
    Truck();                                // 0-load, default Vehicle
    Truck(int w, int f, int c);

    int  get_cargoLoad() const;
    void set_cargoLoad(int c);

    void travel(int distance, int speed) override;
};
#endif
