#include "Texture.h"
#include <iostream>
#include <SDL_Image.h>
#include "Config.h"

namespace leah_chess {
SDL_Renderer* Texture::renderer = nullptr;
void Texture::SetRenderer(SDL_Renderer* renderer) {
  Texture::renderer = renderer;
  std::cout << "Texture::SetRenderer()" << std::endl;
}

Texture::Texture() : texture{nullptr}, width{0}, height{0} {
  std::cout << "Texture::Texture()" << std::endl;
}

Texture::~Texture() {
  std::cout << "Texture::~Texture()" << std::endl;
  Free();
}

void Texture::Load(std::string path) {
  std::cout << "Texture::Load()" << std::endl;
  Free();
  SDL_Surface* loadedSurface = IMG_Load(path.c_str());
  if (!loadedSurface) {
    std::cout << "Surface could not be loaded: " << IMG_GetError() << std::endl;
    return;
  }
  // transparency below
  // SDL_SetColorKey(loadedSurface, SDL_TRUE, SDL_MapRGB(loadedSurface->format,
  // 0, 0xFF, 0xFF));
  texture = SDL_CreateTextureFromSurface(renderer, loadedSurface);
  if (!texture) {
    std::cout << "*** Texture could not be loaded: " << SDL_GetError()
              << std::endl;
  } else {
    width = loadedSurface->w;
    height = loadedSurface->h;
  }
  SDL_FreeSurface(loadedSurface);
}

void Texture::Free() {
  if (texture) {
    SDL_DestroyTexture(texture);
    texture = nullptr;
    width = 0;
    height = 0;
  }
}

void Texture::Render(int posX, int posY, int dimX, int dimY) {
  SDL_Rect dstRect{
    posX * SCREEN_WIDTH / 8,
    posY * SCREEN_HEIGHT /8,
    dimX * SCREEN_WIDTH / 8,
    dimY * SCREEN_HEIGHT / 8
  };
  SDL_Point center{dimX * SCREEN_HEIGHT / 16, dimY * SCREEN_HEIGHT / 16};
  SDL_RenderCopyEx(renderer, texture, NULL, &dstRect, 0.0, &center,
                   SDL_FLIP_NONE);
}
}  // namespace leah_chess