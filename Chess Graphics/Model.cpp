#include "Model.h"
#include "App.h"
#include "Config.h"
#include <iostream>

namespace leah_chess {

Model::Model(Mvc& mvc)
  : mvc{ mvc }
  , board{ *this }
  , aiPlayer{ board }
  , humanPlayer{ board }
{
  std::cout << "Model::Model()" << std::endl;

  isReady = true; //<- always last line
}

Model::~Model()
{
  std::cout << "Model::~Model()" << std::endl;
}

void
Model::Run()
{
}

bool
Model::IsLegalMove(Piece* piece, int row, int col)
{
  //check if white_piece is on white_piece
  // later, check if king is checked
  // if same spot as started
  // TODO: update case(s)
  switch (piece->type) {
    case Piece::white_rook:
      //??? piece->GetPosX() - row;
      break;
    case Piece::white_bishop:
      break;
    case Piece::white_king:
      break;
    case Piece::white_knight:
      break;
    case Piece::white_queen:
      break;
    case Piece::white_pawn:
      break;
    default:
      return false;
  }
  return false;
}
} // namespace leah_chess