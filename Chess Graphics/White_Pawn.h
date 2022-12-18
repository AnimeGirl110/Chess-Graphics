#pragma once
#include "Piece.h"
namespace leah_chess {
class WhitePawn : public Piece
{
 public:
  WhitePawn(int posX, int posY, std::string path);
};
}  // namespace leah_chess
