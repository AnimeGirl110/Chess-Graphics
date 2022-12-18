#include <iostream>
#include "White_Bishop.h"

namespace leah_chess {
WhiteBishop::WhiteBishop(int posX, int posY, std::string path)
    : Piece{posX, posY, path, white_bishop} {
  std::cout << "Bishop()" << std::endl;
}
}  // namespace leah_chess