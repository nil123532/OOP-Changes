// main-2-1.cpp
#include <iostream>
#include "Car.h"

using namespace std;

int main() {
  /* --------------------------------------------------------------
     Test 1 – Basic travel at moderate speed, no extra passengers
     -------------------------------------------------------------- */
  Car car1(1500, 50, 4);   // weight = 1500 kg, fuel cap = 50 L, passengers = 4

  cout << "Test 1 – Create a Car (1500 kg, 50 L, 4 passengers) and travel "
          "100 km at 90 km/h\n";
  cout << "Initial fuel: "      << car1.get_fuelPercentage()   << "%\n";
  cout << "Initial trips: "     << car1.get_numberOfTrips()    << "\n";
  car1.travel(100, 90);      // 0.3 % per 10 km → 3 % total
  cout << "Fuel after travel: " << car1.get_fuelPercentage()   << "%\n";
  cout << "Trips after travel: "<< car1.get_numberOfTrips()    << "\n\n";

  /* --------------------------------------------------------------
     Test 2 – High-speed trip with extra passengers, low fuel edge case
     -------------------------------------------------------------- */
  Car car2(1600, 60, 5);   // one passenger over the limit of 4

  cout << "Test 2 – Create a Car (1600 kg, 60 L, 5 passengers).\n"
          "Set fuel to 15 %, simulate prior trips, then travel 200 km at 120 km/h\n";
  car2.set_fuelPercentage(15);
  car2.set_numberOfTrips(3);
  cout << "Fuel after manual set: " << car2.get_fuelPercentage() << "%\n";
  cout << "Trips after manual set: " << car2.get_numberOfTrips() << "\n";

  car2.travel(200, 120);   // (0.5 % + 0.05 %) per 10 km → 11 % total
  cout << "Fuel after travel: "      << car2.get_fuelPercentage() << "%\n";
  cout << "Is operational: "         << (car2.get_isOperational() ? "yes" : "no") << "\n";
  cout << "Trips after travel: "     << car2.get_numberOfTrips()  << "\n";

  cout << "Refueling …\n";
  car2.refuel();
  cout << "Fuel after refuel: "      << car2.get_fuelPercentage() << "%\n";
  cout << "Is operational: "         << (car2.get_isOperational() ? "yes" : "no") << "\n";

  return 0;
}
