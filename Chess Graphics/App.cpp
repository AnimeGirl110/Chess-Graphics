#include "App.h"
#include "Piece.h"

#include <iostream>

namespace leah_chess {
App::App()
    : view{mvc},
      model{mvc},
      controller{mvc},
      isRunning{model.GetIsReady() && view.GetIsReady() &&
                controller.GetIsReady()} {
  std::cout << "App::App()" << std::endl;
  mvc.app = this;
  mvc.model = &model;
  mvc.view = &view;
  mvc.controller = &controller;

  //model.GetBoard().LogBoard();

  while (isRunning) {
    controller.Run();
    model.Run();
    view.Render();
  }
}

App::~App() { std::cout << "App::~App()" << std::endl; }
}  // namespace leah_chess