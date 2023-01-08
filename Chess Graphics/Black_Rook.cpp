#include "Black_Rook.h"
#include <iostream>
#include "Board.h"

namespace leah_chess {
BlackRook::BlackRook(int posX, int posY)
  : Piece{ posX, posY, "black_rook.png", black_rook }
{
  std::cout << "Rook()" << std::endl;
}
bool
BlackRook::CheckMove(Piece* piece, int row, int col)
{
  int dx = col - piece->GetPosX();
  int dy = row - piece->GetPosY();
  int adx = abs(dx);
  int ady = abs(dy);
  BlackRook* rook = (BlackRook*)piece;

  if (adx > 0 && ady > 0) {
    return false;
  }
  if (!ady) {
    if (dx < 0) {
      // left
      for (int i = piece->GetPosX() - 1; i > col; i--) {
        if (board->GetPiece(row, i)) {
          return false;
        }
      }
    } else {
      // right
      for (int i = piece->GetPosX() + 1; i < col; i++) {
        if (board->GetPiece(row, i)) {
          return false;
        }
      }
    }
  } else {
    if (dy < 0) {
      // down
      for (int i = piece->GetPosY() - 1; i > row; i--) {
        if (board->GetPiece(i, col)) {
          return false;
        }
      }
    } else {
      // up
      for (int i = piece->GetPosY() + 1; i < row; i++) {
        if (board->GetPiece(i, col)) {
          return false;
        }
      }
    }
  }
  if (rook->isFirstMove) {
    rook->isFirstMove = false;
  }
  return true;
}
} // namespace leah_chess
