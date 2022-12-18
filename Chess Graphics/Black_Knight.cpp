#include <iostream>
#include "Black_Knight.h"

namespace leah_chess {
BlackKnight::BlackKnight(int posX, int posY, std::string path)
  : Piece{ posX, posY, path, black_knight }
{
  std::cout << "Knight()" << std::endl;
}
}  // namespace leah_chess