#include <iostream>

#include "Board.h"
#include "Model.h"
#include "Player.h"
#include "Piece.h"
#include <vector>


//TODO: update humanplayer/aiplayers

namespace leah_chess {
Board::Board(Model& model) : Actor{0, 0, 8, 8, "chessboard.png"}, model{model} {
  std::cout << "Board()" << std::endl;
  for (int row = 0; row < 8; row++) {
    for (int col = 0; col < 8; col++) {
      chessboard[row][col] = nullptr;
    }
  }
}

Board::~Board() {}

void Board::MovePiece(Piece* piece, int oldRow, int oldCol) {
  // check ??
  chessboard[oldRow][oldCol] = nullptr;
  chessboard[piece->GetPosY()][piece->GetPosX()] = piece;
}

void Board::RemovePiece(Piece* piece) {
  chessboard[piece->GetPosY()][piece->GetPosX()] = nullptr;
}

void Board::AddPiece(Piece* piece) {
  chessboard[piece->GetPosY()][piece->GetPosX()] = piece;
}

void Board::LogBoard() {
  std::cout << std::endl;
  std::cout << "    a b c d e f g h" << std::endl;
  std::cout << "  -------------------" << std::endl;
  for (int row = 7; row >= 0; row--) {
    std::cout << row + 1 << " | ";
    for (int col = 0; col < 8; col++) {
      if (chessboard[row][col]) {
        std::cout << "x";
      } else {
        std::cout << " ";
      }
      std::cout << " ";
    }
    std::cout << "|" << std::endl;
  }
  std::cout << "  -------------------" << std::endl;
}
}  // namespace leah_chess