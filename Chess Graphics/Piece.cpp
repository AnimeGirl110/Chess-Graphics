#include <iostream>
#include "Piece.h"
#include "Config.h"


namespace leah_chess {
Piece::Piece(int posX, int posY, char name) : Actor{posX, posY, 1, 1}, name{name} {
  std::cout << "Piece()" << std::endl;
}

Piece::~Piece() {
  std::cout << "~Piece()" << std::endl;
  // TODO?
}

void Piece::UpdatePosition(int toPosX, int toPosY) { 
  posX = toPosX;
  posY = toPosY;
}


}  // namespace leah_chess
