//
// Created by 91817 on 09-Feb-25.
//

#include "Board.h"
#include "utils/Position.h"
#include "utils/Square.h"

Square *Board::get_square(Position position) {
  return this->board[position.getX()][position.getY()];
}

Square *Board::get_square(int x, int y) { return this->board[x][y]; }
