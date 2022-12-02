#pragma once
#include "Piece.h"
namespace leah_chess {
class Queen : public Piece {
 public:
  Queen(int posX, int posY, std::string path);
};
}  // namespace leah_chess
