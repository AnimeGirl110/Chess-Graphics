#pragma once
#include "Actor.h"
#include <string>

namespace leah_chess {
class Player; 

class Piece : public Actor {
 public:
  Piece(int posX, int posY, std::string path);
  ~Piece();
  void Render() { texture.Render(posX, 7 - posY, dimX, dimY); } 
  //so white is at the bottom of the screen
  int GetPosX() { return posX; }
  int GetPosY() { return posY; }

  void UpdatePosition(int toPosX, int toPosY);

 private:
};
}  // namespace leah_chess