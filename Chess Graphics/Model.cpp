#include "Model.h"
#include "App.h"
#include "Math.h"
#include "Config.h"
#include <iostream>

namespace leah_chess {

Model::Model(Mvc& mvc)
  : mvc{ mvc }
  , board{ *this }
  , aiPlayer{ board, this }
  , humanPlayer{ board }
{
  std::cout << "Model::Model()" << std::endl;
  Math::InitializeRandom();
  Piece::board = &board;
  Piece::humanPlayer = &humanPlayer;
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
  if (row > 8 || col > 8 || row < 0 || col < 0) {
    return false;
  }
  if (piece->GetPosX() == col && piece->GetPosY() == row) {
    std::cout << "piece was not moved to a different position" << std::endl;
    return false;
  }
  Piece* spot = board.GetPiece(row, col);
  if (spot) {
    if (spot->type % 2 == 0) {
      std::cout << "your pieces cannot be moved onto a position that another "
                   "of your pieces is on"
                << std::endl;
      return false;
    }
  }
  // later, check if king is checked
  // TODO: update case(s)
  if (piece->type % 2 == 0) {
    return piece->CheckMove(piece, row, col);
  } else {
    return false;
  }
  return true;
}
} // namespace leah_chess