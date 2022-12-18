#pragma once
#include "Piece.h"
namespace leah_chess {
class BlackPawn : public Piece
{
 public:
  BlackPawn(int posX, int posY, std::string path);
};
}  // namespace leah_chess
