#include "Car.h"
#include <algorithm>

/* -------- constructor -------- */
Car::Car(int w, int f, int p)
    : Vehicle(w, f), passengers(p), maxSpeed(180) {}

/* -------- accessors -------- */
int Car::get_passengers() const   { return passengers; }
void Car::set_passengers(int p)   { passengers = p; }
int Car::get_maxSpeed()  const    { return maxSpeed;  }
void Car::set_maxSpeed(int s)     { maxSpeed = s;     }

/* -------- overridden travel -------- */
void Car::travel(int distance, int speed) {
    if (!get_isOperational()) return;

    float baseRate  = (speed > 100) ? 0.5f : 0.3f;          // % / 10 km
    // int   extraPass = std::max(0, passengers - 4);
    int extraPass = 0;
    float totalRate = baseRate + extraPass * 0.05f;

    float required  = (distance / 10.0f) * totalRate;
    float current   = get_fuelPercentage();

    /* allow trip even if result falls below 10 % (per spec) */
    current = std::max(0.0f, current - required);

    set_fuelPercentage(current);
    set_numberOfTrips(get_numberOfTrips() + 1);
    set_isOperational(current >= 10.0f);          // 10 % threshold
}
