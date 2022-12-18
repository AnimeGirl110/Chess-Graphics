#include <iostream>
#include "Black_Bishop.h"

namespace leah_chess {
BlackBishop::BlackBishop(int posX, int posY, std::string path)
    : Piece{posX, posY, path, black_bishop} {
  std::cout << "Bishop()" << std::endl;
}
}  // namespace leah_chess