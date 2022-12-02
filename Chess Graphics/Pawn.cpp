#include <iostream>
#include "Pawn.h"

namespace leah_chess {
Pawn::Pawn(int posX, int posY, std::string path) : Piece{posX, posY, path} {
  std::cout << "Pawn()" << std::endl;
}
}  // namespace leah_chess