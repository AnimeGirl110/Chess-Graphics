#pragma once
#include "Player.h"

namespace leah_chess {

class HumanPlayer : public Player {
 public:
  HumanPlayer();
  void Play() override;

 private:
};
}  // namespace leah_chess
