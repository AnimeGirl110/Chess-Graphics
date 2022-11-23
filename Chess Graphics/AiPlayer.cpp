#include <iostream>
#include "AiPlayer.h"
#include "App.h"

namespace leah_chess {
AiPlayer::AiPlayer() : Player{} {
  std::cout << "AiPlayer()" << std::endl;
  //new rook;
  //new queen;
  //etc.
}

void AiPlayer::Play() {}
}  // namespace leah_chess