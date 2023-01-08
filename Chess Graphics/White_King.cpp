#include <iostream>
#include "White_King.h"
#include "Board.h"
#include "HumanPlayer.h"
#include "White_Rook.h"

namespace leah_chess {
WhiteKing::WhiteKing(int posX, int posY)
  : Piece{ posX, posY, "white_king.png", white_king }
{
  std::cout << "King()" << std::endl;
}
bool
WhiteKing::CheckMove(Piece* piece, int row, int col)
{
  WhiteKing* king = (WhiteKing*)piece;
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
        WhiteRook* rook = (WhiteRook*)board->GetPiece(0, 7);
        if (rook) {
          if (rook->isFirstMove) {
            std::cout << "Castling" << std::endl;
            result = true;
            rook->isFirstMove = false;
            king->isFirstMove = false;
            humanPlayer->MovePiece(board->GetPiece(0, 7), 0, 5);
          }
        }
      }
    }
    if (ady == 0 && dx == -2) { // castle queen-side || left
      if (!board->GetPiece(0, king->GetPosX() - 1) &&
          !board->GetPiece(0, king->GetPosX() - 2)) {
        WhiteRook* rook = (WhiteRook*)board->GetPiece(0, 0);
        if (rook) {
          if (rook->isFirstMove) {
            std::cout << "Castling" << std::endl;
            result = true;
            rook->isFirstMove = false;
            king->isFirstMove = false;
            humanPlayer->MovePiece(board->GetPiece(0, 0), 0, 3);
          }
        }
      }
    }
  }
  return result;
}
}  // namespace leah_chess