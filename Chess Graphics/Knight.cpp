#include <iostream>
#include "Knight.h"

namespace leah_chess {
Knight::Knight(int posX, int posY, char name) : Piece{posX, posY, name} {
  std::cout << "Knight()" << std::endl;
}
}  // namespace leah_chess