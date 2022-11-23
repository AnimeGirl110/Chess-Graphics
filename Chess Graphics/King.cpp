#include <iostream>
#include "King.h"

namespace leah_chess {
King::King(int posX, int posY, char name) : Piece{posX, posY, name} {
  std::cout << "King()" << std::endl;
}
}  // namespace leah_chess