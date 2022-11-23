#pragma once
#include "Piece.h"

namespace leah_chess {
class Bishop : public Piece {
 public:
  Bishop(int posX, int posY, char name);
};
}  // namespace leah_chess