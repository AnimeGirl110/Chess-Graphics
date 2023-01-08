#pragma once
#include "Piece.h"

namespace leah_chess {
class WhiteBishop : public Piece {
 public:
  WhiteBishop(int posX, int posY);
  bool CheckMove(Piece* piece, int row, int col) override;
};
}  // namespace leah_chess