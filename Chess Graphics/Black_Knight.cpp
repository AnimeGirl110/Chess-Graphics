#include <iostream>
#include "Black_Knight.h"

namespace leah_chess {
BlackKnight::BlackKnight(int posX, int posY)
  : Piece{ posX, posY, "black_knight.png", black_knight }
{
  std::cout << "Knight()" << std::endl;
}
bool
BlackKnight::CheckMove(Piece* piece, int row, int col)
{
  int adx = abs(col - piece->GetPosX());
  int ady = abs(row - piece->GetPosY());

  if (!(ady == 1 && adx == 2) && !(ady == 2 && adx == 1)) {
    return false;
  }
  return true;
}
}  // namespace leah_chess