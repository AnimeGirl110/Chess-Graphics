#pragma once
#include "Piece.h"

namespace leah_chess {
class WhiteRook : public Piece
{
 public:
  WhiteRook(int posX, int posY, std::string path);
};
}  // namespace leah_chess
