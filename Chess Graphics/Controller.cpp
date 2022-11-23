#include "Controller.h"
#include <iostream>
#include "App.h"

namespace leah_chess {
Controller::Controller(Mvc& mvc) : mvc{mvc} {
  std::cout << "Controller::Controller()" << std::endl;
  isReady = true;
}

Controller::~Controller() {
  std::cout << "Controller::~Controller()" << std::endl;
}

void Controller::Run() {
  SDL_Event e;
  while (SDL_PollEvent(&e)) {
    if (e.type == SDL_QUIT) {
      mvc.app->Stop();
    }
  }
}
}  // namespace leah_chess

//bool Game::MakeMove(std::string move) {
//  if (move.length() < 4) return false;
//
//  int fromCol = move[0] - 'a';
//  int fromRow = move[1] - '1';
//  ;
//  int toCol = move[2] - 'a';
//  int toRow = move[3] - '1';
//
//  Piece* piece = board.chessboard[fromRow][fromCol];
//  if (fromCol < 0 || fromRow < 0 || toCol < 0 || toRow < 0 || fromCol > 7 ||
//      fromRow > 7 || toCol > 7 || toRow > 7) {
//    return false;
//  }
//
//  if (piece == nullptr) {
//    return false;
//  }
//  board.UpdatePosition(*piece, *(new Position(move[2], toRow + 1)));
//  board.LogBoard();
//  // TODO: figure out which piece is on board || option: rewrite chessboard[][]
//  // to std::vector
//
//  return false;
//}