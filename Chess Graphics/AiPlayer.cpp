#include <iostream>
#include <cstdlib>
#include "AiPlayer.h"
#include "App.h"
#include "Board.h"
#include "Model.h"
#include "Move.h"
#include "Math.h"

#include "Black_Rook.h"
#include "Black_Queen.h"
#include "Black_Knight.h"
#include "Black_King.h"
#include "Black_Pawn.h"
#include "Black_Bishop.h"

namespace leah_chess {
AiPlayer::AiPlayer(Board& board, Model* model)
  : Player{ board }
  , model{model}
{
  std::cout << "AiPlayer()" << std::endl;
  for (int i = 0; i < 8; i++) {
    AddPiece(new BlackPawn(i, 6));
  }
  AddPiece(new BlackRook(0, 7));
  AddPiece(new BlackRook(7, 7));
  AddPiece(new BlackKnight(1, 7));
  AddPiece(new BlackKnight(6, 7));
  AddPiece(new BlackBishop(2, 7));
  AddPiece(new BlackBishop(5, 7));
  AddPiece(new BlackKing(3, 7));
  AddPiece(new BlackQueen(4, 7));
}

void
AiPlayer::Play()
{
  switch (iq) {
    case 0:
      MakeRandomMove();
      break;
    //TODO: other cases
  }
}
void
AiPlayer::MakeRandomMove()
{
  std::vector<Move*> moves;

  for (int row = 0; row < 8; row++) {
    for (int col = 0; col < 8; col++) {
      for (Piece* piece : pieces) {
        bool isValid{true};
        if (piece->GetPosX() == col && piece->GetPosY() == row) {
          isValid = false;
        }
        Piece* spot = board.GetPiece(row, col);
        if (spot) {
          if (spot->type % 2 == 1) {
            isValid = false;
          }
        }
        if (!piece->CheckMove(piece, row, col)) {
          isValid = false;
        }
        if (isValid) {
          moves.push_back(new Move(piece, row, col));
        }
      }
    }
  }
  std::cout << "Possible AI moves: " << moves.size() << std::endl;
  int rng = Math::GetRandomInt(0, moves.size());
  Move* move = moves[rng];
  MovePiece(move->piece, move->row, move->col);
  //Move contains piece, new pos
}
}  // namespace leah_chess