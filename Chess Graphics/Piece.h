#pragma once
#include "Actor.h"
#include <string>

namespace leah_chess {
class Player;

class Piece : public Actor
{
public:
  static enum PieceType
  {
    white_pawn,
    black_pawn,
    white_knight,
    black_knight,
    white_bishop,
    black_bishop,
    white_rook,
    black_rook,
    white_queen,
    black_queen,
    white_king,
    black_king
  };

  Piece(int posX, int posY, std::string path, PieceType type);
  ~Piece();
  void Render();
  int GetPosX() { return posX; }
  int GetPosY() { return posY; }
  void SetMousePos(int toPosX, int toPosY);

  void UpdatePosition(int toPosX, int toPosY);

private:
  float mPosX{ 0.0f };
  float mPosY{ 0.0f };

public:
  const PieceType type;
};
} // namespace leah_chess