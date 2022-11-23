#include <iostream>
#include <string>
#include "HumanPlayer.h"
#include "App.h"

#include "Rook.h"
   
namespace leah_chess {
HumanPlayer::HumanPlayer() : Player{} {
  std::cout << "HumanPlayer()" << std::endl;
  pieces.push_back(Rook(0, 0, 'R'));
}

void HumanPlayer::Play() {
 /* bool isInvalid = true;
  std::string ui;

  while (isInvalid) {
    std::cout << std::endl << "Make move: ";
    std::getline(std::cin, ui);

    std::string cleanInput = "";

    size_t length = ui.length();
    int i = 0;
    int parsecode = 0;
    while (i < length) {
      if (ui[i] < 'a' || ui[i] > 'h') {
        ++i;
        continue;
      };
      if (i + 1 >= length) {
        break;
      }
      if (ui[i + 1] < '1' || ui[i + 1] > '8') {
        ++i;
        continue;
      }
      cleanInput += ui.substr(i, 2);
      parsecode++;
      i += 2;

      if (parsecode == 2) {
        isInvalid = false;
        break;
      }
    }
    if (isInvalid) {
      std::cout << "Invalid: " << cleanInput;

    } else {
      std::cout << cleanInput;
      game.MakeMove(cleanInput);
    }
  }*/
  // send move to board/game -> check if move is valid
}
}  // namespace leah_chess