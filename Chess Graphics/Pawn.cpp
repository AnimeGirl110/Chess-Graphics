#include <iostream>
#include "Pawn.h"

namespace leah_chess {
Pawn::Pawn(int posX, int posY, char name) : Piece{posX, posY, name} {
  std::cout << "Pawn()" << std::endl;
}
}  // namespace leah_chess