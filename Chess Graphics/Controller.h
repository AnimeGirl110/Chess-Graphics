#pragma once

namespace leah_chess {
class Controller {
 public:
  Controller(struct Mvc& mvc);
  ~Controller();
  bool GetIsReady() { return isReady; }
  void Run();

 private:
  bool isReady{false};
  struct Mvc& mvc;
};
}  // namespace leah_asteroids
