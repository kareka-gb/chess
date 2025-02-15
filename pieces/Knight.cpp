//
// Created by 91817 on 09-Feb-25.
//

#include "../Board.h"
#include "Piece.h"

class Knight : public Piece {
  bool can_move(Board *board, Position *from, Position *to) override {
    int fromX = from->getX();
    int fromY = from->getY();
    int toX = to->getX();
    int toY = to->getY();

    int a = abs(fromX - toX), b = abs(fromY - toY);
    if (a < b) {
      std::swap(a, b);
    }
    if (a != 2 || b != 1) {
      return false;
    }

    // final position of the rook contains a piece of same color
    if (board->get_square(toX, toY)->is_occupied() &&
        board->get_square(toX, toY)->get_piece()->get_color() ==
            this->get_color()) {
      return false;
    }

    return true;
  }
};
