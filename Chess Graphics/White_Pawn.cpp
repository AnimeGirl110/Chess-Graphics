#include "White_Pawn.h"
#include <iostream>
#include "Board.h"

namespace leah_chess {
WhitePawn::WhitePawn(int posX, int posY)
  : Piece{ posX, posY, "white_pawn.png", white_pawn }
{
  std::cout << "Pawn()" << std::endl;
}
bool
WhitePawn::CheckMove(Piece* piece, int row, int col)
{
  WhitePawn* pawn = (WhitePawn*)piece;
  int dx = col - piece->GetPosX();
  int dy = row - piece->GetPosY();

  bool result = false;
  if (dy == 1 && dx == 0) {
    result = true;
  } else if (dy == 2 && pawn->isFirstMove &&
             !board->GetPiece(piece->GetPosY() + 1, col) && dx == 0) {
    result = true;
  }
  if (dy == 1 && abs(dx) == 1) {
    // en passant
  }

  if (pawn->isFirstMove && result == true) {
    pawn->isFirstMove = false;
  }
  return result;
}
}  // namespace leah_chess