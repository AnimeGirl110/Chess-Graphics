#pragma once
#include <vector>

#include "HumanPlayer.h"
#include "AiPlayer.h"
#include "Board.h"

namespace leah_chess {
class Piece;

class Model {
 public:
  Model(struct Mvc& mvc);
  ~Model();
  bool GetIsReady() { return isReady; }
  void Run();

  HumanPlayer& GetHumanPlayer() { return humanPlayer; }
  AiPlayer& GetAiPlayer() { return aiPlayer; }
  Board& GetBoard() { return board; }
  bool IsLegalMove(Piece* piece, int row, int col);

 private:
  bool isReady{false};
  struct Mvc& mvc;
  Board board;
  AiPlayer aiPlayer;
  HumanPlayer humanPlayer;
  
};
}  // namespace leah_chess
