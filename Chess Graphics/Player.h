#pragma once
#include <vector>
#include "Piece.h"

namespace leah_chess {
class Piece;
class Board;

class Player {
 public:
  Player(Board& board);
  ~Player();
  void AddPiece(Piece* piece);
  void RemovePiece(Piece* piece);
  void MovePiece(Piece* piece, int toRow, int toCol);
  virtual void Play() = 0;

  std::vector<Piece*> pieces;
 protected:
  Board& board;
};  
}  // namespace leah_chess
