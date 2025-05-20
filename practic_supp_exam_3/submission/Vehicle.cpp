#include "Vehicle.h"
#include <algorithm>   // std::max / std::min

/* -------- constructors -------- */
Vehicle::Vehicle()            : weight(1000),
                                 fuelCapacity(50),
                                 fuelPercentage(100.0f),
                                 numberOfTrips(0),
                                 isOperational(true) {}

Vehicle::Vehicle(int w, int f) : weight(w),
                                 fuelCapacity(f),
                                 fuelPercentage(100.0f),
                                 numberOfTrips(0),
                                 isOperational(true) {}

/* -------- getters -------- */
int   Vehicle::get_weight()         const { return weight; }
int   Vehicle::get_fuelCapacity()   const { return fuelCapacity; }
float Vehicle::get_fuelPercentage() const { return fuelPercentage; }
int   Vehicle::get_numberOfTrips()  const { return numberOfTrips; }
bool  Vehicle::get_isOperational()  const { return isOperational; }

/* -------- setters -------- */
void Vehicle::set_weight(int w)               { weight          = w; }
void Vehicle::set_fuelCapacity(int f)         { fuelCapacity    = f; }
void Vehicle::set_fuelPercentage(float pct)   {                 // clamp
    fuelPercentage = std::max(0.0f, std::min(100.0f, pct));
}
void Vehicle::set_numberOfTrips(int n)        { numberOfTrips   = n; }
void Vehicle::set_isOperational(bool state)   { isOperational   = state; }

/* -------- public methods -------- */
void Vehicle::refuel() {
    fuelPercentage = 100.0f;
    isOperational  = true;
}

void Vehicle::travel(int distance, int /*speed*/) {
    if (!isOperational) return;                     // already broken

    float required = (distance / 10.0f) * 1.0f;     // 1 % / 10 km
    fuelPercentage = std::max(0.0f, fuelPercentage - required);
    ++numberOfTrips;

    if (fuelPercentage < 15.0f)
        isOperational = false;
}
