// main-3-1.cpp
#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include "Fleet.h"

using namespace std;

int main() {
  // Create the fleet
  Fleet myFleet;

  // Retrieve the array of Vehicle pointers
  Vehicle** fleet = myFleet.get_fleet();

  // Iterate through the three vehicles and display key data
  for (int i = 0; i < 3; ++i) {
    Vehicle* current = fleet[i];
    cout << "Vehicle #" << i + 1 << '\n';
    cout << "Weight: " << current->get_weight() << " kg\n";

    // Car: index 0 → display passengers
    if (i == 0) {
      Car* car = dynamic_cast<Car*>(current);
      cout << "Passengers: " << car->get_passengers() << '\n';
    }

    // Truck: index 1 → display cargo load
    if (i == 1) {
      Truck* truck = dynamic_cast<Truck*>(current);
      cout << "Cargo load: " << truck->get_cargoLoad() << " kg\n";
    }

    cout << '\n';
  }

  return 0;
}
