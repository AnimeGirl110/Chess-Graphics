#pragma once
#include <vector>

#include "Texture.h"

namespace leah_chess {
class Actor {
 public:
  static std::vector<Actor*> actors;

  Actor(int posX, int posY, int dimX, int dimY);
  ~Actor();
  void Render() { texture.Render(posX, posY, dimX, dimY); }

 protected:
  Texture texture;
  int posX;
  int posY;
  int dimX;
  int dimY;
};
}  // namespace leah_chess
