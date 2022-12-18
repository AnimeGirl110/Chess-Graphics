#include "Black_Rook.h"
#include <iostream>

namespace leah_chess {
BlackRook::BlackRook(int posX, int posY, std::string path)
  : Piece{ posX, posY, path, black_rook }
{
  std::cout << "Rook()" << std::endl;
}
} // namespace leah_chess
