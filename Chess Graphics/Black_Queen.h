#pragma once
#include "Piece.h"
namespace leah_chess {
class BlackQueen : public Piece
{
 public:
  BlackQueen(int posX, int posY);
  bool CheckMove(Piece* piece, int row, int col) override;
};
}  // namespace leah_chess
