#include <iostream>
#include "Bishop.h"

namespace leah_chess {
Bishop::Bishop(int posX, int posY, char name)
    : Piece{posX, posY, name} {
  std::cout << "Bishop()" << std::endl;
}
}  // namespace leah_chess