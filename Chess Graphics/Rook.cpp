#include "Rook.h"
#include <iostream>

namespace leah_chess {
Rook::Rook(int posX, int posY, char name) : Piece{posX, posY, name} {
  std::cout << "Rook()" << std::endl; 
  texture.Load("black_rook.png");
}
}  // namespace leah_chess
