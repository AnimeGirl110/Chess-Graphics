#pragma once
#include "Player.h"

namespace leah_chess {
class Board;

class HumanPlayer : public Player {
 public:
  HumanPlayer(Board& board);
  void Play() override;

 private:
};
}  // namespace leah_chess
