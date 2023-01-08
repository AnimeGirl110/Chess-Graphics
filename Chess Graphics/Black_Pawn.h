#pragma once
#include "Piece.h"
namespace leah_chess {
class BlackPawn : public Piece
{
 public:
  BlackPawn(int posX, int posY);
  bool CheckMove(Piece* piece, int row, int col) override;
  bool isFirstMove{ true };
};
}  // namespace leah_chess
