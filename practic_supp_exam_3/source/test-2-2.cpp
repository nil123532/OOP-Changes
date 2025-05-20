// main-2-2.cpp
#include <iostream>
#include "Truck.h"

using namespace std;

int main() {
  /* --------------------------------------------------------------
     Test 1 – Moderate cargo, moderate speed
     -------------------------------------------------------------- */
  Truck t1(8000, 120, 1800);     // weight = 8000 kg, 120 L tank, 1 800 kg cargo
  cout << "Test 1 – Create Truck (8000 kg, 120 L, 1800 kg cargo) and travel "
          "100 km at 90 km/h\n";
  cout << "Fuel:  "  << t1.get_fuelPercentage() << "%\n";
  cout << "Trips: "  << t1.get_numberOfTrips()  << "\n";
  t1.travel(100, 90);            // uses 0.8 % per 10 km  → 8 %
  cout << "Fuel after travel:  " << t1.get_fuelPercentage() << "%\n";
  cout << "Trips after travel: " << t1.get_numberOfTrips()  << "\n\n";

  /* --------------------------------------------------------------
     Test 2 – Heavy cargo, high speed, check extra load penalty
     -------------------------------------------------------------- */
  Truck t2(10000, 150, 3000);    // 3 000 kg cargo (≥ 2000 kg, extra over-load)
  cout << "Test 2 – Create Truck (10000 kg, 150 L, 3000 kg cargo), "
          "set fuel to 50 %, travel 200 km at 110 km/h\n";
  t2.set_fuelPercentage(50);
  t2.set_numberOfTrips(2);       // simulate prior use
  cout << "Fuel:  "  << t2.get_fuelPercentage() << "%\n";
  cout << "Trips: "  << t2.get_numberOfTrips()  << "\n";
  t2.travel(200, 110);           // (1 % + 0.1 %) per 10 km → 22 %
  cout << "Fuel after travel:  " << t2.get_fuelPercentage() << "%\n";
  cout << "Operational: "        << (t2.get_isOperational() ? "yes" : "no") << "\n";
  cout << "Trips after travel: " << t2.get_numberOfTrips()  << "\n\n";

  /* --------------------------------------------------------------
     Test 3 – Low-fuel edge case, expects no take-off
     -------------------------------------------------------------- */
  Truck t3(9000, 100, 2600);     // 2 600 kg cargo
  cout << "Test 3 – Create Truck (9000 kg, 100 L, 2600 kg cargo), "
          "set fuel = 11 %, attempt 100 km at 70 km/h (should refuse)\n";
  t3.set_fuelPercentage(11);
  cout << "Fuel:  "  << t3.get_fuelPercentage() << "%\n";
  cout << "Trips: "  << t3.get_numberOfTrips()  << "\n";
  t3.travel(100, 70);            // would need ≈ 10.2 % → below 10 %, so no go
  cout << "Fuel after attempt: " << t3.get_fuelPercentage() << "% (unchanged if no take-off)\n";
  cout << "Trips after attempt: "<< t3.get_numberOfTrips()  << "\n";
  cout << "Operational: "        << (t3.get_isOperational() ? "yes" : "no") << "\n";

  return 0;
}
