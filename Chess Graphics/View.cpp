#include "View.h"
#include <iostream>
#include <SDL_image.h>
#include "Texture.h"
#include "App.h"
#include "Config.h"
#include "Piece.h"

namespace leah_chess {
using std::cout;
using std::endl;

View::View(Mvc& mvc) : mvc{mvc}, window{nullptr}, renderer{nullptr} {
  cout << "View::View()" << endl;
  if (SDL_Init(SDL_INIT_VIDEO) < 0) {
    cout << "SDL could not initialize: " << SDL_GetError() << endl;
    return;
  }
  if (!SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "1")) {
    cout << "Warning: linear filtering texture not enabled" << endl;
  }
  window = SDL_CreateWindow("Learning SDL", SDL_WINDOWPOS_UNDEFINED,
                            SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH,
                            SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
  if (!window) {
    cout << "Window could not be created: " << SDL_GetError() << endl;
    return;
  }
  renderer = SDL_CreateRenderer(
      window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
  if (!renderer) {
    cout << "SDL_Renderer could not be created:" << SDL_GetError() << endl;
    return;
  }
  Texture::SetRenderer(renderer);
  if (!(IMG_Init(IMG_INIT_PNG) & IMG_INIT_PNG)) {
    cout << "SDL_image could not initialize:  " << IMG_GetError() << endl;
    return;
  }
  isReady = true;
}

View::~View() {
  cout << "View::~View()" << endl;
  // delete texture(s)
  SDL_DestroyRenderer(renderer);
  renderer = NULL;
  SDL_DestroyWindow(window);
  window = NULL;
  IMG_Quit();
  SDL_Quit();
}

void View::Render() { 
  SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0xFF, 0xFF);
  SDL_RenderClear(renderer);
  //mvc.model->GetBoard().GetPiece(0, 0)->Render();
  SDL_RenderPresent(renderer);
}
}  // namespace leah_chess