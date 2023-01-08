#include <iostream>
#include "Piece.h"
#include "Config.h"
#include "Board.h"
#include "AiPlayer.h"
#include "HumanPlayer.h"


namespace leah_chess {

Board* Piece::board = nullptr;
HumanPlayer* Piece::humanPlayer = nullptr;

Piece::Piece(int posX, int posY, std::string path,PieceType type)
  : Actor
{ posX, posY, 1, 1, path }
  ,
  type{type}
{
  std::cout << "Piece()" << std::endl;
}

Piece::~Piece() {
  std::cout << "~Piece()" << std::endl;
  // TODO?
}

void Piece::Render() {
  // so white is at the bottom of the screen
  if (isAnimating) {
    texture.Animate(mPosX, mPosY, (float)dimX + 0.2f, (float)dimY + 0.2f);
  }
  else {
    texture.Render(posX, 7 - posY, dimX, dimY); 
  }
}


void Piece::SetMousePos(int toPosX, int toPosY) {
   mPosX = (float)(toPosX - SCREEN_WIDTH / 16) / 64;
   mPosY = (float)(toPosY - SCREEN_WIDTH / 16) / 64;
  //std::cout << mPosX << ", " << mPosX << std::endl;
}

bool
Piece::CheckMove(Piece* piece, int row, int col)
{
  return false;
}


void Piece::UpdatePosition(int toPosX, int toPosY) { 
  posX = toPosX;
  posY = toPosY;
  //todo?
}


}  // namespace leah_chess
