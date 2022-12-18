#include <iostream>
#include "AiPlayer.h"
#include "App.h"
#include "Board.h"

#include "Black_Rook.h"
#include "Black_Queen.h"
#include "Black_Knight.h"
#include "Black_King.h"
#include "Black_Pawn.h"
#include "Black_Bishop.h"

namespace leah_chess {
AiPlayer::AiPlayer(Board& board) : Player{board} {
  std::cout << "AiPlayer()" << std::endl;
  for (int i = 0; i < 8; i++) {
    AddPiece(new BlackPawn(i, 6, "black_pawn.png"));
  }
  AddPiece(new BlackRook(0, 7, "black_rook.png"));
  AddPiece(new BlackRook(7, 7, "black_rook.png"));
  AddPiece(new BlackKnight(1, 7, "black_knight.png"));
  AddPiece(new BlackKnight(6, 7, "black_knight.png"));
  AddPiece(new BlackBishop(2, 7, "black_bishop.png"));
  AddPiece(new BlackBishop(5, 7, "black_bishop.png"));
  AddPiece(new BlackKing(4, 7, "black_king.png"));
  AddPiece(new BlackQueen(3, 7, "black_queen.png"));
}

void AiPlayer::Play() {}
}  // namespace leah_chess