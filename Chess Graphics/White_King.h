#pragma once
#include "Piece.h"
namespace leah_chess {
class WhiteKing : public Piece
{
 public:
  WhiteKing(int posX, int posY, std::string path);
};
}  // namespace leah_chess