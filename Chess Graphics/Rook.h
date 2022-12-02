#pragma once
#include "Piece.h"

namespace leah_chess {
class Rook : public Piece {
 public:
  Rook(int posX, int posY, std::string path);
};
}  // namespace leah_chess
