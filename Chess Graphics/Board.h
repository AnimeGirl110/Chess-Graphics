#pragma once
#include "Actor.h"

namespace leah_chess {
class Piece;
class Model;

class Board : public Actor
{ //make this an actor
 public:
  Board(Model& model);
  ~Board();
  void LogBoard();

  Piece* GetPiece(int row, int col) { return chessboard[row][col];}
  void MovePiece(Piece* piece, int oldRow, int oldCol);
  void RemovePiece(Piece* piece);
  void AddPiece(Piece* piece);

 private:
  Model& model;
  Piece* chessboard[8][8];
};
}  // namespace leah_chess
