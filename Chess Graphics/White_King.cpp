#include <iostream>
#include "White_King.h"

namespace leah_chess {
WhiteKing::WhiteKing(int posX, int posY, std::string path)
  : Piece{ posX, posY, path, white_king }
{
  std::cout << "King()" << std::endl;
}
}  // namespace leah_chess