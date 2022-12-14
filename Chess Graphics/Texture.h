#pragma once
#include <SDL.h>
#include <string>

namespace leah_chess {
class Texture {
 public:
  Texture(std::string path);
  ~Texture();

  void Load(std::string path);
  void Free();
  void Render(int posX, int posY, int dimX, int dimY);
  void Animate(float posX, float posY, float dimX, float dimY);

  static SDL_Renderer* renderer;
  static void SetRenderer(SDL_Renderer* renderer);

 private:
  SDL_Texture* texture;
  int width, height;
};
}  // namespace leah_chess
