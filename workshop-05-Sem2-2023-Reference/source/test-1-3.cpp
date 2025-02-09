#include "Musician.h"
#include "Orchestra.h"
#include <iostream>

using namespace std;

int main (void) {
  
  Orchestra my_orchestra(3);

  Musician musician1("flute", 7);
  Musician musician2("double bass", 8);
  Musician musician3("flute", 4);

  my_orchestra.add_musician(musician1);
  my_orchestra.add_musician(musician2);

  cout << "the members of my orchestra are: " << endl;
  Musician * members = my_orchestra.get_members();
  for (int i=0; i<my_orchestra.get_current_number_of_members(); i++) {
    cout << members[i].get_instrument() << endl;
  }

  my_orchestra.add_musician(musician3);

  members = my_orchestra.get_members();
  for (int i=0; i<my_orchestra.get_current_number_of_members(); i++) {
    cout << members[i].get_instrument() << endl;
  }
}
