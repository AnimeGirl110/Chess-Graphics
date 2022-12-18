#include <iostream>
#include "White_Knight.h"

namespace leah_chess {
WhiteKnight::WhiteKnight(int posX, int posY, std::string path)
  : Piece{ posX, posY, path, white_knight }
{
  std::cout << "Knight()" << std::endl;
}
}  // namespace leah_chess