#pragma once
#include <vector>

namespace leah_chess {
class Piece;
class Model;

class Board {
 public:
  Board(Model& model);
  ~Board();
  void LogBoard();
 // void UpdatePosition(Piece& piece, Position& toPos);
  //Piece* GetPiece(int row, int col) { return chessboard[row][col]; }

 // Piece* chessboard[8][8];
 private:
  Model& model;
};
}  // namespace leah_chess
