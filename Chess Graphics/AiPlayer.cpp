#include <iostream>
#include "AiPlayer.h"
#include "App.h"

#include "Rook.h"
#include "Queen.h"
#include "Knight.h"
#include "King.h"
#include "Pawn.h"
#include "Bishop.h"

namespace leah_chess {
AiPlayer::AiPlayer() : Player{} {
  std::cout << "AiPlayer()" << std::endl;
  for (int i = 0; i < 8; i++) {
    pieces.emplace_back(new Pawn(i, 6, "black_pawn.png"));
  }
  pieces.emplace_back(new Rook(0, 7, "black_rook.png"));
  pieces.emplace_back(new Rook(7, 7, "black_rook.png"));
  pieces.emplace_back(new Knight(1, 7, "black_knight.png"));
  pieces.emplace_back(new Knight(6, 7, "black_knight.png"));
  pieces.emplace_back(new Bishop(2, 7, "black_bishop.png"));
  pieces.emplace_back(new Bishop(5, 7, "black_bishop.png"));
  pieces.emplace_back(new King(4, 7, "black_king.png"));
  pieces.emplace_back(new Queen(3, 7, "black_queen.png"));
}

void AiPlayer::Play() {}
}  // namespace leah_chess