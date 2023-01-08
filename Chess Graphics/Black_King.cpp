#include "Black_King.h"
#include <iostream>
#include "HumanPlayer.h"
#include "Black_Rook.h"
#include "Board.h"

namespace leah_chess {
BlackKing::BlackKing(int posX, int posY)
  : Piece{ posX, posY, "black_king.png", black_king }
{
  std::cout << "King()" << std::endl;
}
bool
BlackKing::CheckMove(Piece* piece, int row, int col)
{
  BlackKing* king = (BlackKing*)piece;
  int dx = col - piece->GetPosX();
  int dy = row - piece->GetPosY();
  int adx = abs(dx);
  int ady = abs(dy);
  bool result = false;

  if (!(ady > 1 || adx > 1)) {
    result = true;
    if (king->isFirstMove) {
      king->isFirstMove = false;
    }
  }
  if (king->isFirstMove) {
    if (ady == 0 && dx == 2) { // castle king-side || right
      if (!board->GetPiece(0, king->GetPosX() + 1)) {
        BlackRook* rook = (BlackRook*)board->GetPiece(7, 7);
        if (rook) {
          if (rook->isFirstMove) {
            std::cout << "Castling" << std::endl;
            result = true;
            rook->isFirstMove = false;
            king->isFirstMove = false;
            humanPlayer->MovePiece(board->GetPiece(7, 7), 7, 5);
          }
        }
      }
    }
    if (ady == 0 && dx == -2) { // castle queen-side || left
      if (!board->GetPiece(0, king->GetPosX() - 1) &&
          !board->GetPiece(0, king->GetPosX() - 2)) {
        BlackRook* rook = (BlackRook*)board->GetPiece(0, 0);
        if (rook) {
          if (rook->isFirstMove) {
            std::cout << "Castling" << std::endl;
            result = true;
            rook->isFirstMove = false;
            king->isFirstMove = false;
            humanPlayer->MovePiece(board->GetPiece(7, 0), 7, 3);
          }
        }
      }
    }
  }
  return result;
}
}  // namespace leah_chess