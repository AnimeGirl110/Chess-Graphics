#pragma once
#include "Piece.h"
namespace leah_chess {
class BlackQueen : public Piece
{
 public:
  BlackQueen(int posX, int posY, std::string path);
};
}  // namespace leah_chess
