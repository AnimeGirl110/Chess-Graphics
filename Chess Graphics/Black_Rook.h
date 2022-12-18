#pragma once
#include "Piece.h"

namespace leah_chess {
class BlackRook : public Piece
{
 public:
  BlackRook(int posX, int posY, std::string path);
};
}  // namespace leah_chess
