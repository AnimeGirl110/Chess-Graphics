#pragma once
#include "Player.h"

namespace leah_chess {
class Board;
class Model;

class AiPlayer : public Player {
 public:
  AiPlayer(Board& board, Model* model);
  void Play() override;
  void MakeRandomMove();

 private:
  int iq{ 0 };
   Model* model;
};
}


