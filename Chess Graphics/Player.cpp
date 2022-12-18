#include "Player.h"
#include <iostream>
#include "App.h"
#include "Board.h"

namespace leah_chess {
Player::Player(Board& board) : board{board} {
  std::cout << "Player()" << std::endl; 
}
Player::~Player() {
  for (Piece* piece : pieces) {
    delete piece;
  }
  pieces.clear();
}
void Player::AddPiece(Piece* piece) {
  pieces.emplace_back(piece);
  board.AddPiece(piece); //piece pos is updated first!!
}

void Player::RemovePiece(Piece* piece) {
  board.RemovePiece(piece);
  auto it = std::find(pieces.begin(), pieces.end(), piece);
  if (it != pieces.end()) {
    // This quick deletion trick works so long as the vector isn't "ordered."
    std::iter_swap(it, pieces.end() - 1);
    pieces.pop_back();
  }
  delete piece;
  piece = nullptr;
}

void Player::MovePiece(Piece* piece, int toRow, int toCol) {
  int oldCol = piece->GetPosX();
  int oldRow = piece->GetPosY();
  piece->UpdatePosition(toCol, toRow);  
  board.MovePiece(piece, oldRow, oldCol); 
  board.LogBoard();
}
}  // namespace leah_chess
