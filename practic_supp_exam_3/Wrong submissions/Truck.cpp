#include "Truck.h"
#include <algorithm>
#include <cmath>

/* -------- constructors -------- */
Truck::Truck() : Vehicle(), cargoLoad(0) {}
Truck::Truck(int w, int f, int c) : Vehicle(w, f), cargoLoad(c) {}

/* -------- accessors -------- */
int  Truck::get_cargoLoad() const { return cargoLoad; }
void Truck::set_cargoLoad(int c)  { cargoLoad = c;    }

/* -------- overridden travel -------- */
void Truck::travel(int distance, int /*speed*/) {
    if (!get_isOperational()) return;

    /* base consumption */
    float ratePer10 = (cargoLoad > 2000) ? 1.0f : 0.8f;

    /* overload penalty */
    if (cargoLoad > 2500) {
        int over       = cargoLoad - 2500;
        int hundredKg  = (over + 99) / 100;          // ceil
        ratePer10     += hundredKg * 0.02f;
    }

    float required = (distance / 10.0f) * ratePer10;
    float current  = get_fuelPercentage();

    /* REFUSAL RULE: don’t start if we’d finish < 10 % */
    if (current - required < 10.0f) return;

    current -= required;
    set_fuelPercentage(current);
    set_numberOfTrips(get_numberOfTrips() + 1);
    set_isOperational(current >= 10.0f);            // 10 % threshold
}
