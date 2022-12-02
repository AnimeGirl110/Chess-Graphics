#include <iostream>
#include "King.h"

namespace leah_chess {
King::King(int posX, int posY, std::string path) : Piece{posX, posY, path} {
  std::cout << "King()" << std::endl;
}
}  // namespace leah_chess