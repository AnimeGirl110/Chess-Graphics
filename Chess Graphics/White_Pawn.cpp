#include <iostream>
#include "White_Pawn.h"

namespace leah_chess {
WhitePawn::WhitePawn(int posX, int posY, std::string path)
  : Piece{ posX, posY, path, white_pawn }
{
  std::cout << "Pawn()" << std::endl;
}
}  // namespace leah_chess