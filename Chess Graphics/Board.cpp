#include <iostream>

#include "Board.h"
#include "Model.h"
#include "Player.h"
#include "Piece.h"

#include "Bishop.h"
#include "Rook.h"
#include "Queen.h"
#include "King.h"
#include "Pawn.h"
#include "Rook.h"
#include "Knight.h"

//TODO: update humanplayer/aiplayers

namespace leah_chess {
Board::Board(Model& model) : model{model} {
  std::cout << "Board()" << std::endl;
}

Board::~Board() {}

void Board::LogBoard() { char chessboard[8][8]; }
}  // namespace leah_chess