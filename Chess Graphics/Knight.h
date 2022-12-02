#pragma once
#include "Piece.h"
namespace leah_chess {
class Knight : public Piece {
 public:
  Knight(int posX, int posY, std::string path);
};
}  // namespace leah_chess
