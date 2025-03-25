#include "Orchestra.h"
#include "Musician.h"
#include <iostream>

using namespace std;

int main (void) {

  Orchestra my_orchestra(3);

  Musician musician1("flute", 7);
  Musician musician2("double bass", 8);
  Musician musician3("flute", 4);
  Musician musician4("piano", 4);

  cout << "my orchestra currently has " << my_orchestra.get_current_number_of_members() << " members" << endl;

  my_orchestra.add_musician(musician1);
  cout << "my orchestra currently has " << my_orchestra.get_current_number_of_members() << " members" << endl;

  my_orchestra.add_musician(musician2);
  cout << "my orchestra currently has " << my_orchestra.get_current_number_of_members() << " members" << endl;

  my_orchestra.add_musician(musician3);
  if (my_orchestra.add_musician(musician4) == false) {
    cout << "sorry orchestra is full" << endl;
  }
  cout << "my orchestra currently has " << my_orchestra.get_current_number_of_members() << " members" << endl;

  if (my_orchestra.has_instrument("flute"))
    cout << "my orchestra does have a flute" << endl;
  else
    cout << "my orchestra does NOT have a flute" << endl;

  if (my_orchestra.has_instrument("viola"))
    cout << "my orchestra does have a viola" << endl;
  else
    cout << "my orchestra does NOT have a viola" << endl;
}
