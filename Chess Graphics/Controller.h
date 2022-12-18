#pragma once

namespace leah_chess {
class Piece;

class Controller {
 public:
  Controller(struct Mvc& mvc);
  ~Controller();
  bool GetIsReady() { return isReady; }
  void Run();

  Piece* CheckIfOnPiece(int posX, int posY);

 private:
  bool isReady{false};
  Piece* mouseOnPiece{nullptr};
  struct Mvc& mvc;
};
}  // namespace leah_asteroids
