#pragma once
#include "Piece.h"
namespace leah_chess {
class Pawn : public Piece {
 public:
  Pawn(int posX, int posY, char name);
};
}  // namespace leah_chess
