#include <iostream>

#include "Board.h"
#include "Model.h"
#include "Player.h"
#include "Piece.h"
#include <vector>


//TODO: update humanplayer/aiplayers

namespace leah_chess {
Board::Board(Model& model)
    : Actor{0, 0, 8, 8, "chessboard.png"}, model{model} {
  std::cout << "Board()" << std::endl;
}

Board::~Board() {}

//void Board::LogBoard() {
//  char chessboard[8][8];
//  for (int row = 0; row < 8; row++) {
//    for (int col = 0; col < 8; col++) {
//      chessboard[col][row] = 0;
//    }
//  }
//  std::vector<Piece*> humanPieces = model.GetHumanPlayer().pieces;
//  std::vector<Piece*> aiPieces = model.GetAiPlayer().pieces;
//  for (Piece* piece : humanPieces) {
//    chessboard[piece->GetPosX()][piece->GetPosY()] = piece->GetName();
//  }
//  for (Piece* piece : aiPieces) {
//    chessboard[piece->GetPosX()][piece->GetPosY()] = piece->GetName();
//  }
//  // positions the pieces on the board
//
//  for (int row = 0; row < 8; row++) {
//    for (int col = 0; col < 8; col++) {
//      std::cout << chessboard[col][row] << " ";
//    }
//    std::cout << std::endl;
//  }
//}
}  // namespace leah_chess