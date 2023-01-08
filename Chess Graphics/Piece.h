#pragma once
#include "Actor.h"
#include <string>

namespace leah_chess {
class Player;
class Board;
class HumanPlayer;

class Piece : public Actor
{
public:
  enum PieceType
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
  void SetIsAnimating(bool state) { isAnimating = state; }
  virtual bool CheckMove(Piece* piece, int row, int col);

  void UpdatePosition(int toPosX, int toPosY);

private:
  float mPosX{ 0.0f };
  float mPosY{ 0.0f };
  bool isAnimating{ false };

public:
  const PieceType type;
  static Board* board;
  static HumanPlayer* humanPlayer;
};
} // namespace leah_chess