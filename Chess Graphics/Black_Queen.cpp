#include "Black_Queen.h"
#include <iostream>
#include "Board.h"

namespace leah_chess {
BlackQueen::BlackQueen(int posX, int posY)
  : Piece{ posX, posY, "black_queen.png", black_queen }
{
  std::cout << "Queen()" << std::endl;
}
bool
BlackQueen::CheckMove(Piece* piece, int row, int col)
{
  int dx = col - piece->GetPosX();
  int dy = row - piece->GetPosY();
  int adx = abs(dx);
  int ady = abs(dy);

  if ((adx > 0 && ady > 0) && (adx != ady)) {
    return false;
  }
  if (dy > 0) {
    if (dx > 0) {
      // moving up-right
      for (int i = 1; i < adx; i++) {
        if (board->GetPiece(piece->GetPosY() + i, piece->GetPosX() + i)) {
          return false;
        }
      }
    } else if (dx < 0) {
      // moving up-left
      for (int i = 1; i < adx; i++) {
        if (board->GetPiece(piece->GetPosY() + i, piece->GetPosX() - i)) {
          return false;
        }
      }
    } else {
      // moving up
      for (int i = piece->GetPosY() + 1; i < row; i++) {
        if (board->GetPiece(i, col)) {
          return false;
        }
      }
    }
  } else if (dy < 0) {
    if (dx > 0) {
      // moving down-right
      for (int i = 1; i < adx; i++) {
        if (board->GetPiece(piece->GetPosY() - i, piece->GetPosX() + i)) {
          return false;
        }
      }
    } else if (dx < 0) {
      // moving down-left
      for (int i = 1; i < adx; i++) {
        if (board->GetPiece(piece->GetPosY() - i, piece->GetPosX() - i)) {
          return false;
        }
      }
    } else {
      // moving down
      for (int i = piece->GetPosY() - 1; i > row; i--) {
        if (board->GetPiece(i, col)) {
          return false;
        }
      }
    }
  } else {
    if (dx > 0) {
      // moving right
      for (int i = piece->GetPosX() + 1; i < col; i++) {
        if (board->GetPiece(row, i)) {
          return false;
        }
      }
    } else {
      // moving left
      for (int i = piece->GetPosX() - 1; i > col; i--) {
        if (board->GetPiece(row, i)) {
          return false;
        }
      }
    }
  }
  return true;
}
} // namespace leah_chess