#pragma once
#include "Player.h"

namespace leah_chess {

class AiPlayer : public Player {
 public:
  AiPlayer();
  void Play() override;

 private:
};
}


