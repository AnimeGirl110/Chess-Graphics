#include "White_Rook.h"
#include <iostream>

namespace leah_chess {
WhiteRook::WhiteRook(int posX, int posY, std::string path)
  : Piece{ posX, posY, path, white_queen }
{
  std::cout << "Rook()" << std::endl;
}
} // namespace leah_chess
