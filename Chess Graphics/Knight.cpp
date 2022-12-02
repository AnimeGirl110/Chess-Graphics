#include <iostream>
#include "Knight.h"

namespace leah_chess {
Knight::Knight(int posX, int posY, std::string path) : Piece{posX, posY, path} {
  std::cout << "Knight()" << std::endl;
}
}  // namespace leah_chess