#include "Rook.h"
#include <iostream>

namespace leah_chess {
Rook::Rook(int posX, int posY, std::string path) : Piece{posX, posY, path} {
  std::cout << "Rook()" << std::endl; 
}
}  // namespace leah_chess
