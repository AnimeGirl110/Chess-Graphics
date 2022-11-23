#pragma once
#include "Actor.h"

namespace leah_chess {
class Player; 

class Piece : public Actor {
 public:
  Piece(int posX, int posY, char name);
  ~Piece();

  //getposition
  char GetName() { return name; }
  int GetPosX() { return posX; }
  int GetPosY() { return posY; }

  void UpdatePosition(int toPosX, int toPosY);

 private:
  char name;
};
}  // namespace leah_chess