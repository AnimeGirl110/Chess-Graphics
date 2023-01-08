#pragma once
#include "Piece.h"

namespace leah_chess {
class BlackBishop : public Piece {
 public:
  BlackBishop(int posX, int posY);
   bool CheckMove(Piece* piece, int row, int col) override;
};
}  // namespace leah_chess