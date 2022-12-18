#pragma once
#include "Piece.h"

namespace leah_chess {
class WhiteBishop : public Piece {
 public:
  WhiteBishop(int posX, int posY, std::string path);
};
}  // namespace leah_chess