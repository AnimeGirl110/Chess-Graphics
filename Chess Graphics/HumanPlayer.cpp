#include <iostream>
#include <string>
#include "HumanPlayer.h"
#include "App.h"
#include "Board.h"

#include "White_Rook.h"
#include "White_Queen.h"
#include "White_Knight.h"
#include "White_King.h"
#include "White_Pawn.h"
#include "White_Bishop.h"

namespace leah_chess {
HumanPlayer::HumanPlayer(Board& board) : Player{board} {
  std::cout << "HumanPlayer()" << std::endl;
  for (int i = 0; i < 8; i++) {
    AddPiece(new WhitePawn(i, 1, "white_pawn.png"));
  }
  AddPiece(new WhiteRook(0, 0, "white_rook.png"));
  AddPiece(new WhiteRook(7, 0, "white_rook.png"));
  AddPiece(new WhiteKnight(1, 0, "white_knight.png"));
  AddPiece(new WhiteKnight(6, 0, "white_knight.png"));
  AddPiece(new WhiteBishop(2, 0, "white_bishop.png"));
  AddPiece(new WhiteBishop(5, 0, "white_bishop.png"));
  AddPiece(new WhiteKing(3, 0, "white_king.png"));
  AddPiece(new WhiteQueen(4, 0, "white_queen.png"));
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