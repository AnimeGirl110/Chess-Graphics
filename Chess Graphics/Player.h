#pragma once
#include <vector>
#include "Piece.h"

namespace leah_chess {

class Player {
 public:
  Player();
  ~Player();
  virtual void Play() = 0;

  std::vector<Piece*> pieces;

 protected:
};  
}  // namespace leah_chess
