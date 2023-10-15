#pragma once
#include <vector>
#include "raylib.h"
#include "Types.hpp"

class Snake {
public:
  Snake();
  ~Snake();
  Snake(Snake const&) = delete;
  Snake& operator=(Snake const&) = delete;
  Snake(Snake&&) noexcept;
  Snake& operator=(Snake&&) noexcept;

  void prepareToMove(DIRECTION);
  void move();
private:
  std::vector<Vector2> m_position;
  Color m_head_color;
  Color m_body_color;
  Color m_tail_color;
  int m_length;
  DIRECTION m_previous_direction;
  DIRECTION m_current_direction;
};