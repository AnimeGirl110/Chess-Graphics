#pragma once
#include "Piece.h"

namespace leah_chess {
class BlackBishop : public Piece {
 public:
  BlackBishop(int posX, int posY, std::string path);
};
}  // namespace leah_chess