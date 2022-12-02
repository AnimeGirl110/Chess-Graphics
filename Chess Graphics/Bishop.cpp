#include <iostream>
#include "Bishop.h"

namespace leah_chess {
Bishop::Bishop(int posX, int posY, std::string path)
    : Piece{posX, posY, path} {
  std::cout << "Bishop()" << std::endl;
}
}  // namespace leah_chess