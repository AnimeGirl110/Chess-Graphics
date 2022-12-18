#pragma once
#include "Piece.h"
namespace leah_chess {
class WhiteQueen : public Piece
{
 public:
  WhiteQueen(int posX, int posY, std::string path);
};
}  // namespace leah_chess
