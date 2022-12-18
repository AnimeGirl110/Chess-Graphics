#include "Controller.h"
#include <iostream>
#include "App.h"
#include "Piece.h"

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
    if (e.type == SDL_MOUSEBUTTONDOWN) {
      int posX, posY;
      SDL_GetMouseState(&posX, &posY);
      mouseOnPiece = CheckIfOnPiece(posX, posY);
      if (mouseOnPiece) {
        std::cout << mouseOnPiece->GetPosX() << ", " << mouseOnPiece->GetPosY()
                  << std::endl;
      } else {
        std::cout << "No piece here" << std::endl;
      }
    }
    if (e.type == SDL_MOUSEMOTION && mouseOnPiece) {
      //TODO: animate piece movement
      int mPosX, mPosY;
      SDL_GetMouseState(&mPosX, &mPosY);
      mouseOnPiece->SetMousePos(mPosX, mPosY);
    }
    if (e.type == SDL_MOUSEBUTTONUP && mouseOnPiece) {
      int mPosX, mPosY;
      SDL_GetMouseState(&mPosX, &mPosY);
      int row = 7 - mPosY / 64;
      int col = mPosX / 64;
      if (mvc.model->IsLegalMove(mouseOnPiece, row, col)) {
        mvc.model->GetHumanPlayer().MovePiece(mouseOnPiece, row, col);
      }
      mouseOnPiece->SetMousePos(0, 0); //so it doesn't animate
      mouseOnPiece = nullptr;
    }
  }
}
Piece* Controller::CheckIfOnPiece(int posX, int posY) {
  int row = 7 - posY / 64;
  int col = posX / 64;
  for (Piece* piece : mvc.model->GetHumanPlayer().pieces) {
    if (piece->GetPosX() == col && piece->GetPosY() == row) {
      return piece;
    }
  }
  //** for debugging purposes
  for (Piece* piece : mvc.model->GetAiPlayer().pieces) {
    if (piece->GetPosX() == col && piece->GetPosY() == row) {
      return piece;
    }
  }
  return nullptr;
  //std::cout << col << ", " << row << std::endl;
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