#pragma once
#include "Piece.h"
namespace leah_chess {
class BlackKnight : public Piece
{
 public:
  BlackKnight(int posX, int posY);
  bool CheckMove(Piece* piece, int row, int col) override;
};
}  // namespace leah_chess
