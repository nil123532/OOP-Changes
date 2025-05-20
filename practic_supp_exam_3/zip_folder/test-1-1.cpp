#include <iostream>
#include "Vehicle.h"
 
using namespace std;
 
int main() {
  Vehicle car(2000, 60);
 
  cout << "Test 1 - Create a Vehicle with weight 2000 kg and fuel capacity 60 L, then travel 120 km at 100 km/h"
<< endl;
  cout << "Fuel: " << car.get_fuelPercentage() << "%" << endl;
  cout << "Number of trips: " << car.get_numberOfTrips() << endl;
  car.travel(120, 100);
  cout << "Fuel after travel: " << car.get_fuelPercentage() << "%" << endl;
  cout << "Number of trips after 1 trip: " << car.get_numberOfTrips() << endl
<< endl;
 
  Vehicle van;  // uses default constructor
 
  cout << "Test 2 - Checking setters" << endl;
  van.set_weight(3000);
  van.set_fuelCapacity(70);
  van.set_fuelPercentage(50);
  van.set_numberOfTrips(3);
  cout << "Weight: " << van.get_weight() << " kg" << endl;
  cout << "Fuel capacity: " << van.get_fuelCapacity() << " L" << endl;
  cout << "Fuel: " << van.get_fuelPercentage() << "%" << endl;
  cout << "Number of trips: " << van.get_numberOfTrips() << endl;
  van.refuel();
  cout << "Fuel after refueling: " << van.get_fuelPercentage() << "%" << endl;
 
  return 0;
}