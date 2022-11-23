#pragma once
#include "Controller.h"
#include "Model.h"
#include "View.h"

namespace leah_chess {
class App;

struct Mvc {
  App* app{nullptr};
  Model* model{nullptr};
  View* view{nullptr};
  Controller* controller{nullptr};
};

class App {
 public:
  App();
  ~App();
  void Stop() { isRunning = false; }

 private:
  Mvc mvc;
  View view;
  Model model;
  Controller controller;
  bool isRunning{false};
};
}  // namespace leah_chess