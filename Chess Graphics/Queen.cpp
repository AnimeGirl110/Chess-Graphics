#include <iostream>
#include "Queen.h"

namespace leah_chess {
Queen::Queen(int posX, int posY, char name) : Piece{posX, posY, name} {
  std::cout << "Queen()" << std::endl;
}
}  // namespace leah_chess