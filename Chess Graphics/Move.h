#pragma once

namespace leah_chess {
class Piece;
class Move
{
public:
  Move(Piece* piece, int row, int col);

  Piece* piece;
  int row;
  int col;
};
}