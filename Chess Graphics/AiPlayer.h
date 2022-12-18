#pragma once
#include "Player.h"

namespace leah_chess {
class Board;

class AiPlayer : public Player {
 public:
  AiPlayer(Board& board);
  void Play() override;

 private:
};
}


