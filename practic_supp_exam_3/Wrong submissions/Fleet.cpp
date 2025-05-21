#include "Fleet.h"
#include "Car.h"
#include "Truck.h"

/* -------- ctor builds the three required vehicles -------- */
Fleet::Fleet() {
    fleet      = new Vehicle*[3];
    fleet[0]   = new Car   (1200, 60, 4);      // Car
    fleet[1]   = new Truck (8000,150,3000);    // Truck
    fleet[2]   = new Vehicle(1500, 70);        // plain Vehicle
}

/* -------- dtor cleans up -------- */
Fleet::~Fleet() {
    for (int i = 0; i < 3; ++i) delete fleet[i];
    delete[] fleet;
}

Vehicle** Fleet::get_fleet() const { return fleet; }
