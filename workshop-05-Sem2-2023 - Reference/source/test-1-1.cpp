#include "Musician.h"
#include <iostream>

using namespace std;

int main(void) {
  
  Musician musician1("cello", 10);

  cout << "the musician has played the " << musician1.get_instrument() << " for " << musician1.get_experience() << " years" << endl;

}
