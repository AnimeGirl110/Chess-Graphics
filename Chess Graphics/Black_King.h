#pragma once
#include "Piece.h"
namespace leah_chess {
class BlackKing : public Piece
{
 public:
  BlackKing(int posX, int posY, std::string path);
};
}  // namespace leah_chess