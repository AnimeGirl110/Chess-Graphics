#include "Black_Queen.h"
#include <iostream>

namespace leah_chess {
BlackQueen::BlackQueen(int posX, int posY, std::string path)
  : Piece{ posX, posY, path, black_pawn }
{
  std::cout << "Queen()" << std::endl;
}
} // namespace leah_chess