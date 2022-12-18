#include <iostream>
#include "Black_King.h"

namespace leah_chess {
BlackKing::BlackKing(int posX, int posY, std::string path)
  : Piece{ posX, posY, path, black_king }
{
  std::cout << "King()" << std::endl;
}
}  // namespace leah_chess