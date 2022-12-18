#include <iostream>
#include "Black_Pawn.h"

namespace leah_chess {
BlackPawn::BlackPawn(int posX, int posY, std::string path)
  : Piece{ posX, posY, path }
{
  std::cout << "Pawn()" << std::endl;
}
}  // namespace leah_chess