#include "Move.h"
#include "Piece.h"

leah_chess::Move::Move(Piece* piece, int row, int col)
  : piece(piece)
  , row(row)
  , col(col)
{
}
