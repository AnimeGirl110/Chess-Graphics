#include <iostream>
#include "Queen.h"

namespace leah_chess {
Queen::Queen(int posX, int posY, std::string path) : Piece{posX, posY, path} {
  std::cout << "Queen()" << std::endl;
}
}  // namespace leah_chess