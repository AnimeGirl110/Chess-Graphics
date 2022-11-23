#include <iostream>
#include "App.h"
#include "Player.h"

namespace leah_chess {
Player::Player() {
  std::cout << "Player()" << std::endl; 
}
Player::~Player() {
  for (Piece* piece : pieces) {
    delete piece;
  }
  pieces.clear();
}
}  // namespace leah_chess
