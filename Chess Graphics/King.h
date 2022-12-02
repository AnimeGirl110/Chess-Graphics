#pragma once
#include "Piece.h"
namespace leah_chess {
class King : public Piece {
 public:
  King(int posX, int posY, std::string path);
};
}  // namespace leah_chess