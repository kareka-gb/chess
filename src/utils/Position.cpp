//
// Created by 91817 on 09-Feb-25.
//

#include "Position.h"

Position::Position() = default;

Position::Position(int x, int y) {
  this->x = x;
  this->y = y;
}

int Position::getX() const { return this->x; }

int Position::getY() const { return this->y; }
