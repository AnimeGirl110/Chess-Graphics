#include "White_Queen.h"
#include <iostream>

namespace leah_chess {
WhiteQueen::WhiteQueen(int posX, int posY, std::string path)
  : Piece{ posX, posY, path, white_queen }
{
  std::cout << "Queen()" << std::endl;
}
} // namespace leah_chess