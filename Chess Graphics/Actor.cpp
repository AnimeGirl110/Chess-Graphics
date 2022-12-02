#include "Actor.h"
#include <iostream>

namespace leah_chess {
std::vector<Actor*> Actor::actors;

Actor::Actor(int posX, int posY, int dimX, int dimY, std::string path)
  : texture{path}, posX{posX}, posY{posY}, dimX{dimX}, dimY{dimY} {
  std::cout << "Actor::Actor()" << std::endl;
  actors.push_back(this);
}

Actor::~Actor() {
}
}  // namespace leah_chess
