#include <iostream>
#include "White_Knight.h"

namespace leah_chess {
WhiteKnight::WhiteKnight(int posX, int posY)
  : Piece{ posX, posY, "white_knight.png", white_knight }
{
  std::cout << "Knight()" << std::endl;
}
bool
WhiteKnight::CheckMove(Piece* piece, int row, int col)
{
  int adx = abs(col - piece->GetPosX());
  int ady = abs(row - piece->GetPosY());

  if (!(ady == 1 && adx == 2) && !(ady == 2 && adx == 1)) {
    return false;
  }
  return true;
}
}  // namespace leah_chess