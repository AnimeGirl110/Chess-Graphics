#pragma once
#include <SDL.h>
#include <vector>
#include "Texture.h"

namespace leah_chess {
struct Mvc;

class View {
 public:
  View(Mvc& mvc);
  ~View();
  void Render();
  bool GetIsReady() { return isReady; }

 private:
  bool isReady{false};
  Mvc& mvc;
  SDL_Window* window;
  SDL_Renderer* renderer;
};
}  // namespace leah_chess
