//
// Created by 91817 on 09-Feb-25.
//

#include "../Board.h"
#include "Piece.h"

class King : public Piece {
public:
  King(int color, sf::Sprite *sprite) : Piece(color, sprite) {}
  bool can_move(Board *board, Position *from, Position *to) override {
    int fromX = from->getX();
    int fromY = from->getY();
    int toX = to->getX();
    int toY = to->getY();

    // king can only move to surrounding blocks
    if (std::max(abs(fromX - toX), abs(fromY - toY)) != 1) {
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
