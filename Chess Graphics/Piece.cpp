#include <iostream>
#include "Piece.h"
#include "Config.h"


namespace leah_chess {
Piece::Piece(int posX, int posY, std::string path) : Actor{posX, posY, 1, 1, path} {
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
