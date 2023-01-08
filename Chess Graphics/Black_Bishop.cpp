#include "Black_Bishop.h"
#include <iostream>
#include "Board.h"

namespace leah_chess {
BlackBishop::BlackBishop(int posX, int posY)
  : Piece{ posX, posY, "black_bishop.png", black_bishop }
{
  std::cout << "Bishop()" << std::endl;
}
bool
BlackBishop::CheckMove(Piece* piece, int row, int col)
{
  int dx = col - piece->GetPosX();
  int dy = row - piece->GetPosY();
  int adx = abs(dx);
  int ady = abs(dy);

  if (adx != ady) {
    return false;
  }
  if (dx > 0) {
    if (dy > 0) {
      // moving up-right
      for (int i = 1; i < adx; i++) {
        if (board->GetPiece(piece->GetPosY() + i, piece->GetPosX() + i)) {
          return false;
        }
      }
    } else {
      // moving down-right
      for (int i = 1; i < adx; i++) {
        if (board->GetPiece(piece->GetPosY() - i, piece->GetPosX() + i)) {
          return false;
        }
      }
    }
  } else {
    if (dy > 0) {
      // moving up-left
      for (int i = 1; i < adx; i++) {
        if (board->GetPiece(piece->GetPosY() + i, piece->GetPosX() - i)) {
          return false;
        }
      }
    } else {
      // moving down-left
      for (int i = 1; i < adx; i++) {
        if (board->GetPiece(piece->GetPosY() - i, piece->GetPosX() - i)) {
          return false;
        }
      }
    }
  }
  return true;
}
}  // namespace leah_chess